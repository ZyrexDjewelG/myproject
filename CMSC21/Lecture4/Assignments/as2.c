//Number 2 | Checking which Loop is different//

#include <stdio.h>

/*I hashed the other loops just to check each of them individually,
you can unhash it but make sure to hash the other one.*/

/*int main(){

	int i;

	printf("Enter a num: ");
	scanf("%d", &i);

	while (i < 10){
		printf("%d,", i);
		i*=2;
	}
}*/

/*int main(){

	int i;

	printf("Enter a num: ");
	scanf("%d", &i);

	for (; i < 10; i*=2){
		printf("%d,", i);
	}
}*/

int main(){

	int i;

	printf("Enter a num: ");
	scanf("%d", &i);


	do {
		printf("%d,", i);
		i*=2;
	}while(i < 10);
}

/* Among these three types of loops, do while loop is unique as it will execute the block of loops even if it exceeds
the required conditions. The other two loops (for and while) will not print or return anything if the input values does
not satisfy the condition of the loop. For example, if I enter ten(10), the first two loops will not yield any output 
and the program would simply stop. However, if I use the body of do while loop, it will first print the value which 
is ten(10) and then it would check the given condition. Since 10 * 2 is greater than 10, the loop would now stop resulting
with an output of ten(10).*/