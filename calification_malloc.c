#include <stdio.h>
#include <stdlib.h>


int main()
{
   // Creaiting our variable pointer
  int *cal_ptr;
  // Creating the space in the memory
  cal_ptr = malloc(sizeof(int)); 
  printf("Enter your calification (1-10) \n");
  scanf("%d", cal_ptr); // We asign the answer to a variable //
  // Conditional to check if there are enough space
  if(cal_ptr==NULL)
    {
    printf("Insufficient Memory, Closing... \n");
    return 0;
	}
	// Conditional to check if the answer is in the range
    if (*cal_ptr<0 || *cal_ptr>10)
  	{
		printf("You didn't enter the correct range");
	} else if (*cal_ptr<7) { 
				printf("You failed the quarter :(");
			  	} else {
        		printf("You approve the quarter!"); // If the calification is more o equal than 7 the user approve //
						}
free(cal_ptr); // We free up space
return 0;
}

