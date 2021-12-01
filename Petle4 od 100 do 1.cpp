#include <stdio.h>
#include <stdlib.h>

int main(){
	
	for(int i = 100; i >= 1; i--){
		if(i % 10 == 0 && i != 100){
			printf("\n");
		}
		printf("%5d", i);
	}
	printf("\n");
	
	system ("pause");
	return 0;
}
