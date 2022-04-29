//Finding the Average//

#include <stdio.h>

//defining the number of element of n_students(for the array)//
#define n_students 5

int main(void){
	float grades[n_students], average, sum;
	int i;

	printf("Enter scores one by one: \n");

	//A loop to individually read and store the value to the address//
	for(i = 0; i < n_students; i++){
		printf("Enter grade for Student %d: ", i+1);
		scanf("%f", &grades[i]);
	}
	//Loop for getting the sum of grades//
	for(i = 0; i < n_students; i++){
		sum += grades[i];
	}

	//Computes the average and printing its value//
	average = sum/n_students;

	printf("%.2f\n", average);

	return 0;
}