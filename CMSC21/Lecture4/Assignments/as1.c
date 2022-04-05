//Number 1 | Checking the Output//

#include <stdio.h>

int main(void){
	int i;

	i = 1;

	while (i <= 128){
		printf("%d", i);
		i *= 2;
	}
	return 0;
}