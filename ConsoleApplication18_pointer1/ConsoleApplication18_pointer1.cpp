#include<stdio.h>

int main(void)
{
	short i = 5;
	short *p; // declared a pointer, points to variable of type short.
	p = NULL; // assigned a value zero to pointer.

	/*we can assign any value to the pointer for example 12345, but we have to know the value stored at
	the location, but if we know what is stored at 12345 than you are clairvoyant and learning 
	programming is just a waste of time. hahaha. */
	/* Therefore we can assign pointer a value that points to already existing variable.*/
	
	/* by using reference operator,  &   */

	p = &i;  // pointer p now points to already existing variable, 
	         // variable i address in memory is now stored at pointer p.

	printf("i is %d\n", i);
	printf("variable i address stored by pointer is %p", p);   // pointer gives the address of where variable is stored.

	return 0;
}