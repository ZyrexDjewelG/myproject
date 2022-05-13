// Pathway Code //

#include <stdio.h>
#include <stdbool.h>

#define NUM_PATHWAYS ((int) (sizeof(pathway) / sizeof(pathway[0]))) //Number of pathways using the lenght of an array//

int main(){

	bool pathway[8] = {[0] = true, [2] = true};
	/*Using designated initializer for giving the elements
	0 and 2 to be true. The rest of the elements will be false.*/

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