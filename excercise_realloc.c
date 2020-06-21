#include <stdio.h>
#include <stdlib.h>

// Excercise using realloc
int main()
{
	// Creating our variable pointers;
	void *vector_orig= NULL;
    void *vector_mod= NULL; 
    int *vector_nuevo= NULL;

    //Creating 3 spaces in the memory
    vector_orig= malloc(3*sizeof(int));
    // Conditional to check if there are enough space in the memory
    if (vector_orig==NULL)
    printf("Insufficient Memory, Closing... \n");

    // Asigning values and linking variables
    vector_nuevo= (int*)vector_orig;
    vector_nuevo= vector_orig;
    vector_nuevo[0]=10;
    vector_nuevo[1]=11;
    vector_nuevo[2]=12;
    int i;
    printf("Initial memory space with 3 vectors: \n");
    // Loop for print the values in each vector
	for (i=0;i<3;i++)
    {
      printf("Vector[%d]= %d  \n", i, vector_nuevo[i]);
    }

    // Adding space in the memory
    vector_mod=realloc(vector_mod,5*sizeof(int)); //podria usar direcametne vector_din en ves de vector_din_6_lug
    // Conditional to check if there are enough space in the memory
	if (vector_mod==NULL)
    printf("Insufficient Memory, Closing... \n");

    // Showing the new space memory
    vector_nuevo= (int*)vector_mod;
    printf("Expanding memory space: \n");
    printf("Vector[3]= %d\n",vector_nuevo[3]);
    printf("Vector[4]= %d\n",vector_nuevo[4]);

    // Assigning new values 
    vector_nuevo[3]=13;
    vector_nuevo[4]=14;
    printf("New memory space with assigned vectors: \n");
    printf("Vector[3]= %d \n", vector_nuevo[3]);
    printf("Vector[4]= %d",vector_nuevo[4]);
    
    // Free up the space
    free(vector_orig);
    free(vector_mod);
    free(vector_nuevo);
    return 0;

}
