#include <stdio.h>
#include <stdlib.h>

int main(){

	for(int i = 2; i <= 50; i += 2){
		printf("%5d", i);
		if(i % 20 == 0){
			printf("\n");
		}
	}
	printf("\n");

	system ("pause");
	return 0;
}
