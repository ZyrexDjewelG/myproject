//Lecture 3 Assignment | Number 2//

//Importing functions from stdio.h
#include <stdio.h>

//Main function//
int main(void){

	//Declaring the variables//
	int digit1, digit2;

	//Prompting question and assigning values to variable//
	printf("Enter a two-digit number: ");
	scanf("%1d%1d", &digit1, &digit2);

	/*Body of if statement with nested switch will be executed if the first
	digit equals to one as it need special treatment*/
	if (digit1 == 1) {
		switch(digit2 % 10){//2nd digit must be base 10 numeral as a condition//
			case 0: printf("ten"); break;
			case 1: printf("eleven"); break;
			case 2: printf("twelve"); break;
			case 3: printf("thirteen"); break;
			case 4: printf("fourteen"); break;
			case 5: printf("fifteen"); break;
			case 6: printf("sixteen"); break;
			case 7: printf("seventeen"); break;
			case 8: printf("eighteen"); break;
			case 9: printf("nineteen"); break;
		}
		return 0;

	//Switch case for the 1st digit//
	}
	switch(digit1 % 10) {
		case 1: printf("ten"); break;
		case 2: printf("twenty"); break;
		case 3: printf("thirty"); break;
		case 4: printf("forty"); break;
		case 5: printf("fifthy"); break;
		case 6: printf("sixty"); break;
		case 7: printf("seventy"); break;
		case 8: printf("eighty"); break;
		case 9: printf("ninety"); break;
	}
	//Switch case for the second digit//
	switch(digit2 % 10) {
		case 0: break; //if zero, it will not print anything (we cannot say twenty-zero)//
		case 1: printf("-one"); break;
		case 2: printf("-two"); break;
		case 3: printf("-three"); break;
		case 4: printf("-four"); break;
		case 5: printf("-five"); break;
		case 6: printf("-six"); break;
		case 7: printf("-seven"); break;
		case 8: printf("-eight"); break;
		case 9: printf("-nine"); break;

	}
	return 0;


}