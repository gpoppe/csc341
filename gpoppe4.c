//Garrett Poppe
//CSC-341
//Sample Pointer Program

#include <stdio.h>
#include <stdlib.h>

//global variables
int x;
int y = 15;

//Main Function
int main(int argc, char *argv[])
{
//local variables which hold values
	int i;
	int z = 0;

//array of size 5 with all elements initialized to 0
	int array1[5] = {0,1,2,3,4};

//pointer which only holds a reference or address
	int *pointer1;

//Since a pointer only points to addresses, you must assign it the address of something
//to point to. Pointer1 will now point to the address of z
	pointer1 = &z;

//print the value of a variable by specifying it's type, int in this case
	printf("The value of variable z is %d \n",z);
//print the address of any variable using &
	printf("The address of variable z is %p \n",&z);
//So the value of pointer values is an address which points to the same address as z
	printf("The value of pointer1= %p which is the same as the address of z which is %p \n",pointer1,&z);
//An array uses contiguous space to each address should be on after another
	for(i = 0;i < 5;i++)
	{
		printf("array1[%d] = %d with address of %p \n",i,array1[i],&array1[i]);
	}
	return EXIT_SUCCESS;
}