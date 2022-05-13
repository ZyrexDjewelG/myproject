/* SHORTEST PATH | MATRIX ARRAY */

#include <stdio.h>

//macro definitions for the number of elements of an array//
#define row 8
#define column 8
#define CHARACTER 8

//Main Function//
int main(void){

	//Declaring Variables//
	int point;
	int road_networks[row][column] = {
		{1, 1, 0, 0, 0, 1, 0 ,0},
		{1, 1, 1, 0, 0, 0, 0, 0},
		{0, 1, 1, 0, 1, 1, 0, 0},
		{0, 0, 0, 1, 1, 0, 0, 0},
		{0, 0, 0, 1, 1, 0, 0, 0},
		{1, 0, 1, 0, 0, 1, 0, 0},
		{1, 0, 0, 1, 0, 0, 1, 0},
		{0, 0, 0, 0, 0, 1, 0, 1},
	};//Declaring a 2d array and assigning elements//
	char letters[CHARACTER] = {'A','B','C','D','E','F','G', 'H'};//An array for the points or letter//


	printf("\n\tA\tB\t[C]\t[D]\tE\tF\tG\tH\t\n"); //Printing the points above the matrix//

	/*Loop for printing the elements of the array
	The program will have a nested for loop since it is a 2d array,
	we initialize i and j for row and column respectively to print out the elements
	of the array*/
	for(int i = 0; i < row; i++){
		printf("\n%c",  letters[i]); 
		/*In every iteration, an element of array letters will be printed before the elements of road_networks*/
		for (int j = 0; j < column; j++){
			printf("\t%d", road_networks[i][j]);
		}
		printf("\n");
	}
	//Asking the user which point they are located//
	printf("Which point are you located? 0 - A, 1 - B, 2 - C, 3 - D, 4 - E, 5 - F, 6 - G, 7 - H\n: ");
	scanf("%d", &point);

	/*An if else statement for finding an open point and the shortest path,
	basing from the matrix, a point is open to the given point if it is one. 
	A zero means that there is no direct path or the point is not available to 
	point where the user is currently located*/
	if(point == 0)
	{
		printf("\nAt point A");
		printf("\nNow at point B");
		printf("\nNow at point C");
		printf("\npoint: C arrived to charging station");
	}
	else if(point == 1)
	{
		printf("\nAt point B");
		printf("\nNow at point C");
		printf("\npoint: C arrived to charging station");
	}
	else if(point == 2)
	{
		printf("\nAt point C");
		printf("\nNow at point E");
		printf("\npoint: D arrived to charging station");
	}
	else if(point == 3)
	{
		printf("\nAt point D");
		printf("\npoint: D arrived to charging station");
	}
	else if(point == 4)
	{
		printf("\nAt point E");
		printf("\nNow at point D");
		printf("\npoint: D arrived to charging station");
	}
	else if(point == 5)
	{
		printf("\nAt point F");
		printf("\nNow at point C");
		printf("\npoint: C arrived to charging station");
	}
	else if(point == 6)
	{
		printf("\nAt point G");
		printf("\nNow at point D");
		printf("\npoint: define arrived to charging station");
	}
	else if(point == 7)
	{
		printf("\nAt point H");
		printf("\nNow at point I");
		printf("\npoint: I - cannot go to charging station");
	}
	else{
		printf("\nIncorrect input");
	}


	return 0;

}