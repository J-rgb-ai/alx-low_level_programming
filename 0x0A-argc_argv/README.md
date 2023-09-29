For those writing programs which will run in a hosted environment, arguments to main provide a useful opportunity to give parameters to programs. Typically, this facility is used to direct the way the program goes about its task. It's particularly common to provide file names to a program through its arguments.

The declaration of main looks like this:

int main(int argc, char *argv[]);
This indicates that main is a function returning an integer. In hosted environments such as DOS or UNIX, this value or exit status is passed back to the command line interpreter. Under UNIX, for example, the exit status is used to indicate that a program completed successfully (a zero value) or some error occurred (a non-zero value). The Standard has adopted this convention; exit(0) is used to return ‘success’ to its host environment, any other value is used to indicate failure. If the host environment itself uses a different numbering convention, exit will do the necessary translation. Since the translation is implementation-defined, it is now considered better practice to use the values defined in <stdlib.h>: EXIT_SUCCESS and EXIT_FAILURE.

There are at least two arguments to main: argc and argv. The first of these is a count of the arguments supplied to the program and the second is an array of pointers to the strings which are those arguments—its type is (almost) ‘array of pointer to char’. These arguments are passed to the program by the host system's command line interpreter or job control language.

The declaration of the argv argument is often a novice programmer's first encounter with pointers to arrays of pointers and can prove intimidating. However, it is really quite simple to understand. Since argv is used to refer to an array of strings, its declaration will look like this:

char *argv[]
Remember too that when it is passed to a function, the name of an array is converted to the address of its first element. This means that we can also declare argv as char **argv; the two declarations are equivalent in this context.

Indeed, you will often see the declaration of main expressed in these terms. This declaration is exactly equivalent to that shown above:

int main(int argc, char **argv);
When a program starts, the arguments to main will have been initialized to meet the following conditions:

argc is greater than zero.
argv[argc] is a null pointer.
argv[0] through to argv[argc-1] are pointers to strings whose meaning will be determined by the program.
argv[0] will be a string containing the program's name or a null string if that is not available. Remaining elements of argv represent the arguments supplied to the program. In cases where there is only support for single-case characters, the contents of these strings will be supplied to the program in lower-case.
To illustrate these points, here is a simple program which writes the arguments supplied to main on the program's standard output.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
        while(argc--)
                printf("%s\n", *argv++);
        exit(EXIT_SUCCESS);
}
Example 10.1
If the program name is show_args and it has arguments abcde, text, and hello when it is run, the state of the arguments and the value of argv can be illustrated like this:

Diagram showing the relationship between 'argc' and 'argv'                and the strings that elements of 'argv' point to
Figure 10.1. Arguments to a program
Each time that argv is incremented, it is stepped one item further along the array of arguments. Thus after the first iteration of the loop, argv will point to the pointer which in turn points to the abcde argument. This is shown in Figure 10.2.

Diagram showing the changes to the arrangement in Figure 10.1                after incrementing 'argv' so that it points to the next                element in the array of pointers
Figure 10.2. Arguments to a program after incrementing argv
On the system where this program was tested, a program is run by typing its name and then the arguments, separated by spaces. This is what happened (the $ is a prompt):

$ show_args abcde text hello
show_args
abcde
text
hello
$
So far, all the programs we have written can be run with a single command. For example, if we compile an executable called myprog, we can run it from within the same directory with the following command at the GNU/Linux command line:

./myprog
However, what if you want to pass information from the command line to the program you are running? Consider a more complex program like GCC. To compile the hypothetical myprog executable, we type something like the following at the command line:

gcc -o myprog myprog.c
The character strings -o, myprog, and myprog.c are all arguments to the gcc command. (Technically gcc is an argument as well, as we shall see.)

Command-line arguments are very useful. After all, C functions wouldn't be very useful if you couldn't ever pass arguments to them -- adding the ability to pass arguments to programs makes them that much more useful. In fact, all the arguments you pass on the command line end up as arguments to the main function in your program.

Up until now, the skeletons we have used for our C programs have looked something like this:

#include <stdio.h>

int main()
{

  return 0;
}
From now on, our examples may look a bit more like this:

#include <stdio.h>

int main (int argc, char *argv[])
{

  return 0;
}
As you can see, main now has arguments. The name of the variable argc stands for "argument count"; argc contains the number of arguments passed to the program. The name of the variable argv stands for "argument vector". A vector is a one-dimensional array, and argv is a one-dimensional array of strings. Each string is one of the arguments that was passed to the program.

For example, the command line

gcc -o myprog myprog.c
would result in the following values internal to GCC:


argc
4
argv[0]
gcc
argv[1]
-o
argv[2]
myprog
argv[3]
myprog.c
As you can see, the first argument (argv[0]) is the name by which the program was called, in this case gcc. Thus, there will always be at least one argument to a program, and argc will always be at least 1.

The following program accepts any number of command-line arguments and prints them out:

#include <stdio.h>

int main (int argc, char *argv[])
{
  int count;

  printf ("This program was called with \"%s\".\n",argv[0]);

  if (argc > 1)
    {
      for (count = 1; count < argc; count++)
	{
	  printf("argv[%d] = %s\n", count, argv[count]);
	}
    }
  else
    {
      printf("The command had no other arguments.\n");
    }

  return 0;
}
If you name your executable fubar, and call it with the command ./fubar a b c, it will print out the following text:

This program was called with "./fubar".
argv[1] = a
argv[2] = b
argv[3] = c


If variable <variable_name> or function <function_name> is not used, it can be removed. If it is only used sometimes, you can use __attribute__((unused)) .
