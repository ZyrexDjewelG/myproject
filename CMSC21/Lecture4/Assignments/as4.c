//Number 4 | Power of 2//

#include <stdio.h>

int main(){

	int num = 2, n, result = 1;

	printf("Enter a number for the exponent: ");
	scanf("%d", &n);

	while (n){
		result = result * num;
		n --;
	/*This Loop will compute for the result(Initialized with 1), it will multiply its value to num which is equal to 2. 
	The value would then be stored to result the process will keep on repeating while n will keep on decrementing,
	it will stop if n is equal to 0*/
	}
	printf("2 to the n is equal to %d", result);

}