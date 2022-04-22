#include <stdio.h>

//Main Function//
int main(){

	int row, column = 0;
	int size = 0;
	char cont = 'y';

	while(size <= 0 ){//while conditon, while size is less than or equal to zero, program will execute.//
		printf("Enter square size: ");
		scanf("%d", &size);

		for(row = 0; row < size; row++){ //for loops of row//
			for(column = 0; column < size ;column++){//for loop of column//
				if (row == 0 || row == size-1 || column == 0 || column == size-1 ){
					/*Conditions for printing the asterisk, in row and column, I compared
					it with an incremented size for the opposite side*/
					printf("*");
				}else{
					printf(" ");
				}
			}
			printf("\n");
		}
		printf("Print another square? Enter y or n: ");//Asking the user if they want anther square//
		scanf("%c\n", &cont);

		if (cont == 'n'){//program will print END if cont == n//
			printf("END");
		}else if(cont != 'y' || cont != 'n'){//condition if input is neither y or n//
			printf("Not a valid choice. \n");

			printf("Print another square? Enter y/n: ");
			scanf("%c\n", &cont); //Scanning if the user enter y or n//
		}
	}
	return 0;

}


