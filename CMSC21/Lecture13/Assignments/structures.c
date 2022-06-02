//CMSC 21 Lecture 13(Structures) Assignment	- Zyrex Ganit//

#include <stdio.h>
#include <math.h>


//Defining the Structure//

/*This is a nested structure it contains various variables 
and another structure with tag name point. The structure will
be used for storing data in the driver code and user defined function
whenever it is called.*/
struct line{
	struct point{
		float x;
		float y;
	}point1, point2;
	float midpoint;
	float slope;
	float distance;
};

//Declaring Functions//
float solveSlope(struct line line1);
void solveMidpoint(struct line line1);
float solveDistance(struct line line1);
void getSlopeInterceptForm(struct line line1);
//This will be used for calculating the points from the input//

int main(){

	//Structure should be declared if we want to use it//
	struct line points; //We declare points as the variable for the structure//
	float m, midpoint, d;

	//Prompting the user to enter some values//
	printf("\nEnter the 1st x value: ");
	scanf("%f", &points.point1.x);

	printf("\nEnter the 1st y value: ");
	scanf("%f", &points.point1.y);

	//printf("%.2f", points.point1.y);

	printf("\nEnter the 2nd x value: ");
	scanf("%f", &points.point2.x);


	printf("\nEnter the 2nd y value: ");
	scanf("%f", &points.point2.y);


	//Slope//
	m = solveSlope(points); //Assigning the value of m to a member(slope) in the structure//
	points.slope = m;
	printf("\nSlope: %.2f", points.slope);

	//Midpoint//
	solveMidpoint(points);

	//Distance between two points//
	d = solveDistance(points);
	points.distance = d;
	printf("\nDistance between 2 points: %.2f", points.distance);

	//Slope Intercept Form//
	getSlopeInterceptForm(points);


}
//Function with a structure paramater and line1 as the variable of the structure//

//Slope Function//
float solveSlope(struct line line1){

	float m, x, y;

	//Formula for slope is m = (y2-y1)/(x2-x1)
	//We first equate all x and y seperately before dividing them//
	x = line1.point2.x - line1.point1.x;
	y = line1.point2.y - line1.point1.y;
	m = y/x;

	return m;
	  
}
//Midpoint Function//
void solveMidpoint(struct line line1){
//I decided to make it as a void function to make it easier when printing the values//

	float midpntx, midpnty;

	/*Formula for midpoint is x1+x2/2 and y1+y2/2*/
	midpntx = (line1.point1.x + line1.point2.x) / 2;
	midpnty = (line1.point1.y + line1.point2.y) / 2;

	//Printing the midpoint values//
	printf("\nMidpoint: %.2f & %.2f", midpntx, midpnty);

}
//Distance Between Two Points Function//
float solveDistance(struct line line1){
	float d, x, y;

	/*The formula for solving the distance between two points involve subtracting
	similar points and then we raise it with the power of 2 before being added 
	to the other points. Lastly, after getting the sum, it will then be squared. 
	Here, I equate them gradually to make the process easier to understand.*/
	
	x = line1.point2.x - line1.point1.x;
	x = x*x; //It is similar to x^x//

	y = line1.point2.y - line1.point1.y;
	y = y*y;

	d = x + y;
	d = sqrt(d); //Using sqrt() function from math.h//

	return d;

}
//Slope Intercept Form Function//
void getSlopeInterceptForm(struct line line1){
	float b;

	/*Formula: y = mx + b
	In getting the value of b, we plug in the values, we can choose any point for x and y
	but in this program, I chose the x and y points from point 1. We equate them first and then
	we islote them from b [y - mx = b]. That is why there is a minus operator between the point1.y
	and the slope * point1.x*/
	b = line1.point1.y - (line1.slope*line1.point1.x);

	printf("\ny = %.2fx + (%.2f)\n", line1.slope, b);
}