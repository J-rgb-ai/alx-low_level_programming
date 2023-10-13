stdarg.h is a header in the C standard library of the C programming language that allows functions to accept an indefinite number of arguments.[1] It provides facilities for stepping through a list of function arguments of unknown number and type. C++ provides this functionality in the header cstdarg.

The contents of stdarg.h are typically used in variadic functions, though they may be used in other functions (for example, vprintf) called by variadic functions.

Declaring variadic functions
Variadic functions are functions which may take a variable number of arguments and are declared with an ellipsis in place of the last parameter. An example of such a function is printf. A typical declaration is

int check(int a, double b, ...);
Variadic functions must have at least one named parameter, so, for instance,

char *wrong(...);
is not allowed in C. (In C++ and C23,[2] such a declaration is permitted.) In C, a comma must precede the ellipsis if a named parameter is specified; in C++, it is optional.

Defining variadic functions
The same syntax is used in a definition:

long func(char, double, int, ...);

long func(char a, double b, int c, ...)
{
    /* ... */
}
An ellipsis may not appear in old-style function definitions.

stdarg.h types
Name	Description	Compatibility
va_list	type for iterating arguments	C89
stdarg.h macros
Name	Description	compatibility
va_start	Start iterating arguments with a va_list	C89
va_arg	Retrieve an argument	C89
va_end	Free a va_list	C89
va_copy	Copy contents of one va_list to another	C99
Accessing the arguments
To access the unnamed arguments, one must declare a variable of type va_list in the variadic function. The macro va_start is then called with two arguments: the first is the variable declared of the type va_list, the second is the name of the last named parameter of the function. In C23 the second argument will be optional and will not be evaluated.[2] After this, each invocation of the va_arg macro yields the next argument. The first argument to va_arg is the va_list and the second is the type of the next argument passed to the function. Finally, the va_end macro must be called on the va_list before the function returns. (It is not required to read in all the arguments.)

C99 provides an additional macro, va_copy, which can duplicate the state of a va_list. The macro invocation va_copy(va2, va1) copies va1 into va2.

There is no defined method for counting or classifying the unnamed arguments passed to the function. The function is simply required to know or determine this somehow, the means of which vary. Common conventions include:

Use of a printf or scanf-like format string with embedded specifiers that indicate argument types.
A sentinel value at the end of the variadic arguments.
A count argument indicating the number of variadic arguments.
Passing unnamed arguments to other calls
Because the size of the unnamed argument list is generally unknown (the calling conventions employed by most compilers do not permit determining the size of the unnamed argument block pointed at by va_list inside the receiving function), there is also no reliable, generic way to forward the unnamed arguments into another variadic function. Even where determining the size of the argument list is possible by indirect means (for example, by parsing the format string of fprintf()), there is no portable way to pass the dynamically determined number of arguments into the inner variadic call, as the number and size of arguments passed into such calls must generally be known at compile time. To some extent, this restriction can be relaxed by employing variadic macros instead of variadic functions. Additionally, most standard library procedures provide v-prefixed alternative versions which accept a reference to the unnamed argument list (i.e. an initialized va_list variable) instead of the unnamed argument list itself. For example, vfprintf() is an alternate version of fprintf() expecting a va_list instead of the actual unnamed argument list. A user-defined variadic function can therefore initialize a va_list variable using va_start and pass it to an appropriate standard library function, in effect passing the unnamed argument list by reference instead of doing it by value. Because there is no reliable way to pass unnamed argument lists by value in C, providing variadic API functions without also providing equivalent functions accepting va_list instead is considered a bad programming practice.

Type safety
Some C implementations provide C extensions that allow the compiler to check for the proper use of format strings and sentinels. Barring these extensions, the compiler usually cannot check whether the unnamed arguments passed are of the type the function expects, or convert them to the required type. Therefore, care should be taken to ensure correctness in this regard, since undefined behavior results if the types do not match. For example, if the expected type is int *, then a null pointer should be passed as (int *)NULL. Writing just NULL would result in an argument of type either int or void *, neither of which is correct. Another consideration is the default argument promotions applied to the unnamed arguments. A float will automatically be promoted to a double. Likewise, arguments of types narrower than an int will be promoted to int or unsigned int. The function receiving the unnamed arguments must expect the promoted type.

GCC has an extension that checks the passed arguments:

format(archetype, string-index, first-to-check)

The format attribute specifies that a function takes printf, scanf, strftime or strfmon style arguments which should be type-checked against a format string. For example, the declaration:

extern int
my_printf (void *my_object, const char *my_format, ...)
      __attribute__ ((format (printf, 2, 3)));
causes the compiler to check the arguments in calls to my_printf for consistency with the printf style format string argument my_format.

— "5.27 Extensions to the C Language Family - Declaring Attributes of Functions". Retrieved 2009-01-03.
Example
#include <stdio.h>
#include <stdarg.h>

/* print all args one at a time until a negative argument is seen;
   all args are assumed to be of int type */
void printargs(int arg1, ...)
{
  va_list ap;
  int i;

  va_start(ap, arg1); 
  for (i = arg1; i >= 0; i = va_arg(ap, int))
    printf("%d ", i);
  va_end(ap);
  putchar('\n');
}

int main(void)
{
   printargs(5, 2, 14, 84, 97, 15, -1, 48, -1);
   printargs(84, 51, -1, 3);
   printargs(-1);
   printargs(1, -1);
   return 0;
}
This program yields the output:

5 2 14 84 97 15
84 51

1
To call other var args functions from within your function (such as sprintf) you need to use the var arg version of the function (vsprintf in this example):

void MyPrintf(const char *format, ...)
{
  va_list args;
  char buffer[BUFSIZ];

  va_start(args, format);
  vsnprintf(buffer, sizeof buffer, format, args);
  va_end(args);
  FlushFunnyStream(buffer);
}
varargs.h
Outdated versions of POSIX defined the legacy header varargs.h, which dates from before the standardization of C and provides functionality similar to stdarg.h. This header is part of neither ISO C nor POSIX. The file, as defined in the second version of the Single UNIX Specification, simply contains all of the functionality of C89 stdarg.h, with the exceptions that:

it cannot be used in standard C new-style definitions
the given argument may be omitted (standard C requires at least one argument)
The interface is also different. For printargs example, one would instead write:

#include <stdio.h>
#include <varargs.h>

/* There is no "void" type; use an implicit int return. */
printargs(arg1, va_alist)
  va_dcl /* no semicolon here! */
{
  va_list ap;
  int i;

  va_start(ap); /* only the va_list is given! */
  for (i = arg1; i >= 0; i = va_arg(ap, int))
    printf("%d ", i);
  va_end(ap);
  putchar('\n');
  return;
}
