/* Reverse a series of number */

#include <stdio.h>

//Defining the number of elements//
#define N 10

int main(void){
	int a[N], i;

	//Store the numbers in the array as they're read//
	printf("Enter %d numbers: \n", N);

	for (i = 0; i < N; i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
	//Starts accessing from index n-1 to 0//
	printf("In reverse order:");

	for (i = N - 1; i >= 0; i--){
		printf(" %d", a[i]);
	}

	printf("\n");

	return 0;
}