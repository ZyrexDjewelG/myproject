// Pathway Code //

#include <stdio.h>
#include <stdbool.h>

#define N 8 //Macro for the array size//

#define NUM_PATHWAYS ((int) (sizeof(pathway) / sizeof(pathway[0])))//Number of pathways using the lenght of an array//

int main(){

	bool pathway[N] = {1,0,1,0,0,0,0,0}; 
	/*Since using dseignated initializer is prohibited, 
	I used macro to define the array size. 
	To make it shorter, I assigned it's elements 
	using boolean 1 and 0 which is either true or false.*/

	for (int i = 0; i < NUM_PATHWAYS; i++){

	/*
	Display the status of each pathway. The pathway is type bool, the elements are either true or false.
	*/

		if (pathway[i]){
			printf("pathway[%d] is open \n", i);
		}else{
			printf("pathway[%d] is close \n", i);
		}
	}
	return 0;
}