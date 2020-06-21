#include <stdio.h>
#include <stdlib.h>

// Function to make the addition
int addition(int x, int y) 
{
	return x+y; // Do the addition //
}

int main ()
{
	// Creating the variable pointers
	int *x_ptr, *y_ptr;
	// Creating space in the memory
	x_ptr= malloc(sizeof(int));
	y_ptr= malloc(sizeof(int));
  
	printf("Enter two numbers: \n");
	scanf("%d %d", x_ptr, y_ptr);	// Read the information that the user entered //
	printf("The addition is: %d \n", addition(*x_ptr, *y_ptr)); // We print the result of the function //
	
	// Free up the space
	free(x_ptr);
	free(y_ptr);
	
	return 0;
}
