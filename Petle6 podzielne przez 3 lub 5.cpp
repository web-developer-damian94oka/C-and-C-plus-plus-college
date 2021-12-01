#include <stdio.h>
#include <stdlib.h>

int main(){
	
	for(int i = 1, j = 0; i <= 100; i++){
		if(i % 3 == 0 || i % 5 == 0){
			j++;
			printf("%5d", i);
			if(j % 10 == 0){
				printf("\n");
			}
		}
	}
	printf("\n");

	system ("pause");
	return 0;
}
