#include "lists.h"
/**
 * printbeforemain - prints message before main is executed
 * Description: prints the two lines before main
 */
void __attribute__ ((constructor)) printbeforemain()
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
