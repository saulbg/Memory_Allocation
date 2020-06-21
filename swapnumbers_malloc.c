#include <stdlib.h>
#include <stdio.h>

// Invertir dos numeros //

// Function to swap the numbers
void swapTwoNumbers(int *a, int *b)
{
	int temp= *a;
	*a= *b;
	*b= temp;
}

int  main(void) 
{ 	
  // Creating our variable pointers
  int *num1_ptr, *num2_ptr;
  // Creating space in the memory
  num1_ptr = malloc(sizeof(int));
  num2_ptr= malloc(sizeof(int));
  printf("Enter two numbers: ");
  scanf("%d" "%d", num1_ptr, num2_ptr); //Asigning values to our variables 
  
  // Calling the function
  int x= *num1_ptr, y= *num2_ptr;
  swapTwoNumbers(&x, &y);
  printf("The numbers swapped are: %d %d \n", x,y);
  
  // Free up the space
  free(num1_ptr);
  free(num2_ptr);
	return 0;
}

