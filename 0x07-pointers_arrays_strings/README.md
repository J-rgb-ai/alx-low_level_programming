A pointer to a pointer is a form of multiple indirection, or a chain of pointers. Normally, a pointer contains the address of a variable. When we define a pointer to a pointer, the first pointer contains the address of the second pointer, which points to the location that contains the actual value as shown below.

Pointer to Pointer in C
A variable that is a pointer to a pointer must be declared as such. This is done by placing an additional asterisk in front of its name. For example, the following declaration declares a pointer to a pointer of type int −

int **var;
When a target value is indirectly pointed to by a pointer to a pointer, accessing that value requires that the asterisk operator be applied twice, as is shown below in the example −

 Live Demo
#include <stdio.h>
 
int main () {

   int  var;
   int  *ptr;
   int  **pptr;

   var = 3000;

   /* take the address of var */
   ptr = &var;

   /* take the address of ptr using address of operator & */
   pptr = &ptr;

   /* take the value using pptr */
   printf("Value of var = %d\n", var );
   printf("Value available at *ptr = %d\n", *ptr );
   printf("Value available at **pptr = %d\n", **pptr);

   return 0;
}
When the above code is compiled and executed, it produces the following result −

Value of var = 3000
Value available at *ptr = 3000
Value available at **pptr = 3000

C – Pointer to Pointer (Double Pointer) with example
BY CHAITANYA SINGH | FILED UNDER: C-PROGRAMMING

We already know that a pointer holds the address of another variable of same type. When a pointer holds the address of another pointer then such type of pointer is known as pointer-to-pointer or double pointer. In this guide, we will learn what is a double pointer, how to declare them and how to use them in C programming. To understand this concept, you should know the basics of pointers.

How to declare a Pointer to Pointer (Double Pointer) in C?
int **pr;
Here pr is a double pointer. There must be two *’s in the declaration of double pointer.

Let’s understand the concept of double pointers with the help of a diagram:
pointer-to-pointer or double pointer

As per the diagram, pr2 is a normal pointer that holds the address of an integer variable num. There is another pointer pr1 in the diagram that holds the address of another pointer pr2, the pointer pr1 here is a pointer-to-pointer (or double pointer).

Values from above diagram:

Variable num has address: XX771230
Address of Pointer pr1 is: XX661111
Address of Pointer pr2 is: 66X123X1
Example of double Pointer
Lets write a C program based on the diagram that we have seen above.

#include <stdio.h>
int main()
{
     int num=123;

     //A normal pointer pr2
     int *pr2;

     //This pointer pr2 is a double pointer
     int **pr1;

     /* Assigning the address of variable num to the
      * pointer pr2
      */
     pr2 = #

     /* Assigning the address of pointer pr2 to the
      * pointer-to-pointer pr1
      */
     pr1 = &pr2;

     /* Possible ways to find value of variable num*/
     printf("\n Value of num is: %d", num);
     printf("\n Value of num using pr2 is: %d", *pr2);
     printf("\n Value of num using pr1 is: %d", **pr1);

     /*Possible ways to find address of num*/
     printf("\n Address of num is: %p", &num);
     printf("\n Address of num using pr2 is: %p", pr2);
     printf("\n Address of num using pr1 is: %p", *pr1);

     /*Find value of pointer*/
     printf("\n Value of Pointer pr2 is: %p", pr2);
     printf("\n Value of Pointer pr2 using pr1 is: %p", *pr1);

     /*Ways to find address of pointer*/
     printf("\n Address of Pointer pr2 is:%p",&pr2);
     printf("\n Address of Pointer pr2 using pr1 is:%p",pr1);

     /*Double pointer value and address*/
     printf("\n Value of Pointer pr1 is:%p",pr1);
     printf("\n Address of Pointer pr1 is:%p",&pr1);

     return 0;
}
Output:

Value of num is: 123
Value of num using pr2 is: 123
Value of num using pr1 is: 123
Address of num is: XX771230
Address of num using pr2 is: XX771230
Address of num using pr1 is: XX771230
Value of Pointer pr2 is: XX771230
Value of Pointer pr2 using pr1 is: XX771230
Address of Pointer pr2 is: 66X123X1
Address of Pointer pr2 using pr1 is: 66X123X1
Value of Pointer pr1 is:  66X123X1
Address of Pointer pr1 is: XX661111
There are some confusions regarding the output of this program, when you run this program you would see the address similar to this: 0x7fff54da7c58. The reason I have given the address in different format is because I want you to relate this program with the diagram above. I have used the exact address values in the above diagram so that it would be easy for you to relate the output of this program with the above diagram.

You can also understand the program logic with these simple equations:

num == *pr2 == **pr1
&num == pr2 == *pr1
&pr2 == pr1
Top Related Articles:
Pointers in C Programming with examples
Pointers in C++
Pointer and Array in C programming with example
Unary Operator in C with Examples
Java Variables: Declaration, Scope, and Naming Conventions

C programming language allows multidimensional arrays. Here is the general form of a multidimensional array declaration −

type name[size1][size2]...[sizeN];
For example, the following declaration creates a three dimensional integer array −

int threedim[5][10][4];
Two-dimensional Arrays
The simplest form of multidimensional array is the two-dimensional array. A two-dimensional array is, in essence, a list of one-dimensional arrays. To declare a two-dimensional integer array of size [x][y], you would write something as follows −

type arrayName [ x ][ y ];
Where type can be any valid C data type and arrayName will be a valid C identifier. A two-dimensional array can be considered as a table which will have x number of rows and y number of columns. A two-dimensional array a, which contains three rows and four columns can be shown as follows −

Two Dimensional Arrays in C
Thus, every element in the array a is identified by an element name of the form a[ i ][ j ], where 'a' is the name of the array, and 'i' and 'j' are the subscripts that uniquely identify each element in 'a'.

Initializing Two-Dimensional Arrays
Multidimensional arrays may be initialized by specifying bracketed values for each row. Following is an array with 3 rows and each row has 4 columns.

int a[3][4] = {  
   {0, 1, 2, 3} ,   /*  initializers for row indexed by 0 */
   {4, 5, 6, 7} ,   /*  initializers for row indexed by 1 */
   {8, 9, 10, 11}   /*  initializers for row indexed by 2 */
};
The nested braces, which indicate the intended row, are optional. The following initialization is equivalent to the previous example −

int a[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
Accessing Two-Dimensional Array Elements
An element in a two-dimensional array is accessed by using the subscripts, i.e., row index and column index of the array. For example −

int val = a[2][3];
The above statement will take the 4th element from the 3rd row of the array. You can verify it in the above figure. Let us check the following program where we have used a nested loop to handle a two-dimensional array −

 Live Demo
#include <stdio.h>
 
int main () {

   /* an array with 5 rows and 2 columns*/
   int a[5][2] = { {0,0}, {1,2}, {2,4}, {3,6},{4,8}};
   int i, j;
 
   /* output each array element's value */
   for ( i = 0; i < 5; i++ ) {

      for ( j = 0; j < 2; j++ ) {
         printf("a[%d][%d] = %d\n", i,j, a[i][j] );
      }
   }
   
   return 0;
}
When the above code is compiled and executed, it produces the following result −

a[0][0]: 0
a[0][1]: 0
a[1][0]: 1
a[1][1]: 2
a[2][0]: 2
a[2][1]: 4
a[3][0]: 3
a[3][1]: 6
a[4][0]: 4
a[4][1]: 8
As explained above, you can have arrays with any number of dimensions, although it is likely that most of the arrays you create will be of one or two dimensions.




Two dimensional (2D) arrays in C programming with example
BY CHAITANYA SINGH | FILED UNDER: C-PROGRAMMING

An array of arrays is known as 2D array. The two dimensional (2D) array in C programming is also known as matrix. A matrix can be represented as a table of rows and columns.

Let’s take a look at the following C program, before we discuss more about two Dimensional array.

Simple Two dimensional(2D) Array Example
This program demonstrates how to store the elements entered by user in a 2d array and how to display the elements of a two dimensional array. For now don’t worry about the initialization of two dimensional array shown in this example, we will discuss that part later.

#include<stdio.h>
int main(){
   /* 2D array declaration*/
   int disp[2][3];
   /*Counter variables for the loop*/
   int i, j;
   for(i=0; i<2; i++) {
      for(j=0;j<3;j++) {
         printf("Enter value for disp[%d][%d]:", i, j);
         scanf("%d", &disp[i][j]);
      }
   }
   //Displaying array elements
   printf("Two Dimensional array elements:\n");
   for(i=0; i<2; i++) {
      for(j=0;j<3;j++) {
         printf("%d ", disp[i][j]);
         if(j==2){
            printf("\n");
         }
      }
   }
   return 0;
}
Output:

Enter value for disp[0][0]:1
Enter value for disp[0][1]:2
Enter value for disp[0][2]:3
Enter value for disp[1][0]:4
Enter value for disp[1][1]:5
Enter value for disp[1][2]:6
Two Dimensional array elements:
1 2 3 
4 5 6 
Initialization of 2D Array
There are two ways to initialize a two Dimensional arrays during declaration.

int disp[2][4] = {
    {10, 11, 12, 13},
    {14, 15, 16, 17}
};
OR

int disp[2][4] = { 10, 11, 12, 13, 14, 15, 16, 17};
Although both the above declarations are valid, I recommend you to use the first method as it is more readable, because you can visualize the rows and columns of 2d array in this method.

Things that you must consider while initializing a 2D array
We already know, when we initialize a normal array (or you can say one dimensional array) during declaration, we need not to specify the size of it. However that’s not the case with 2D array, you must always specify the second dimension even if you are specifying elements during the declaration. Let’s understand this with the help of few examples –

/* Valid declaration*/
int abc[2][2] = {1, 2, 3 ,4 }  
/* Valid declaration*/ 
int abc[][2] = {1, 2, 3 ,4 }  
/* Invalid declaration – you must specify second dimension*/
int abc[][] = {1, 2, 3 ,4 }   
/* Invalid because of the same reason  mentioned above*/
int abc[2][] = {1, 2, 3 ,4 }
How to store user input data into 2D array
We can calculate how many elements a two dimensional array can have by using this formula: The array arr[n1][n2] can have n1*n2 elements. The array that we have in the example below is having the dimensions 5 and 4. These dimensions are known as subscripts. So this array has first subscript value as 5 and second subscript value as 4.
So the array abc[5][4] can have 5*4 = 20 elements.

To store the elements entered by user we are using two for loops, one of them is a nested loop. The outer loop runs from 0 to the (first subscript -1) and the inner for loop runs from 0 to the (second subscript -1). This way the the order in which user enters the elements would be abc[0][0], abc[0][1], abc[0][2]…so on.

#include<stdio.h>
int main(){
   /* 2D array declaration*/
   int abc[5][4];
   /*Counter variables for the loop*/
   int i, j;
   for(i=0; i<5; i++) {
      for(j=0;j<4;j++) {
         printf("Enter value for abc[%d][%d]:", i, j);
         scanf("%d", &abc[i][j]);
      }
   }
   return 0;
}
In above example, I have a 2D array abc of integer type. Conceptually you can visualize the above array like this:
2D-array

However the actual representation of this array in memory would be something like this:
memory-2D-diagram

Pointers & 2D array
As we know that the one dimensional array name works as a pointer to the base element (first element) of the array. However in the case 2D arrays the logic is slightly different. You can consider a 2D array as collection of several one dimensional arrays.

So abc[0] would have the address of first element of the first row (if we consider the above diagram number 1).
similarly abc[1] would have the address of the first element of the second row. To understand it better, lets write a C program –

#include <stdio.h>
int main()
{
   int abc[5][4] ={
            {0,1,2,3},
            {4,5,6,7},
            {8,9,10,11},
            {12,13,14,15},
            {16,17,18,19}
            };
    for (int i=0; i<=4; i++)
    {
        /* The correct way of displaying an address would be
         * printf("%p ",abc[i]); but for the demonstration
         * purpose I am displaying the address in int so that
         * you can relate the output with the diagram above that
         * shows how many bytes an int element uses and how they
         * are stored in contiguous memory locations.
         *
         */
    	printf("%d ",abc[i]);
    }
    return 0;
}
Output:

1600101376 1600101392 1600101408 1600101424 1600101440
The actual address representation should be in hex for which we use %p instead of %d, as mentioned in the comments. This is just to show that the elements are stored in contiguous memory locations. You can relate the output with the diagram above to see that the difference between these addresses is actually number of bytes consumed by the elements of that row.

The addresses shown in the output belongs to the first element of each row abc[0][0], abc[1][0], abc[2][0], abc[3][0] and abc[4][0].

How to calculate the address of an element in 2D array?
There are two techniques to find the address of an element in 2D array:
1. Row Major Order
2. Column Major Order

1. Row Major Order
If am array is represented by arr[x][y] where x represents the rows and y represents the columns then the address of a random element arr[i][j] can be calculated as follows:

Address of arr[i][j] = Base Address + (i * y + j) * size
Here Base Address represents the address of element arr[0][0] (the first element of the array).

Example: Given an array, arr[10][25] with base address 100 and the size of each element is 4 Bytes in memory. Find the address of arr[8][6] with the help of row-major order?

Address of arr[8][6] = Base Address + (8*25 + 6)*4
                     = 100 + (200+6)*4
                     = 100+824 = 924
2. Column Major Order
If an array is represented by arr[x][y] where x represents the rows and y represents the columns then the address of a random element arr[i][j] using column major method, can be calculated as follows:

Address of arr[i][j] = Base Address + (j * x + i) * size
Example: Given an array, arr[20][20] with base address value 100 and the size of each element is 4 Bytes in memory. Find the address of arr[5][16] with the help of column-major order?

Address of arr[5][16] = Base Address + (j * x + i) * size
                     = 100 + (16*20+ 5)*4
                     = 100+ 325*4
                     = 100+ 1300 = 1400
❮ PreviousNext ❯
Top Related Articles:
Java Array explained with examples
Multidimensional Arrays in C++
Pointers in C Programming with examples
Method overriding in java with example
Java Program to remove duplicate elements in an Array
