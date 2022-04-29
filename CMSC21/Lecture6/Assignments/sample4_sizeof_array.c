//Finding the Size of an Array Example//

#include <stdio.h>

int main(void){
	int number[16];
	/*We get the number of element in the array when we divide the array's 
	total size by the size of the array element*/
	size_t n = sizeof(number)/sizeof(number[0]);
	printf("Total elements the array can hold is: %d\n", n);

	return 0;
}