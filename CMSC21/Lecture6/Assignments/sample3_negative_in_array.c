/* Finds the negative numbers in an array */

#include <stdio.h>

int main(void){
	int N, i; //Declaring the variables//

	//Prompting the user to enter the lenght of the array//
	printf("Enter N (length of the array): ", N);
	scanf("%d", &N);

	int a[N]; //After knowing the length of the array, we now declare it as an int array//

	for (i = 0; i < N; i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	/* A 'for loop' that lets the user enter the elements for the array a[N],
	it would also print each element in every line(i). */

	}
	//Checking for negative numbers//
	printf("Negative numbers: \n");

	/*Loop with a nested if statement for checking if there is a negative integer
	value*/
	for (i = 0; i < N; i++) {
		if (a[i] < 0){
			printf("a[%d] = %d is a negative number. \n", i, a[i]);
		}
	}

	return 0;
}