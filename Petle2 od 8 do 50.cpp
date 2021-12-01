#include <stdio.h>
#include <stdlib.h>

int main(){
	
	for(int i = 8, j = 0; i <= 50; i++){
		printf("%5d", i);
		j++;
		if(j % 10 == 0){
			printf("\n");
		}
	}
	printf("\n");

	system ("pause");
	return 0;
}
