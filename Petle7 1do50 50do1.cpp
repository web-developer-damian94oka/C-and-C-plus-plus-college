#include <stdio.h>
#include <stdlib.h>

int main(){
	
	for(int i = 1; i <= 50; i++){
		printf("%5d", i);
		if(i % 10 == 0){
			printf("\n");
		}
	}
	printf("\n");

	for(int i = 50; i >= 1; i--){
		if(i % 10 == 0 && i != 50){
			printf("\n");
		}
		printf("%5d", i);
	}
	printf("\n");

	system ("pause");
	return 0;
}
