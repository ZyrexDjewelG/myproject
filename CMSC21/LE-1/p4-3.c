#include <stdio.h>
#include <math.h>

//Main Function//
int main(void){

	//Assignment and Declaring Variables//
	int x, y = 1; //Value of y(initial)//
	float y2, tol = 0.00001; //value of tol//


	printf("Enter the value of x: ");
	scanf("%d", &x);

	while(y2 <= tol){
		y2  = (y+(x/y))/2; //I used the iterative method of getting the square root.//
		printf("%f\n", y2);
		y = y2;
		
		
	}
	
	
	return 0;
}