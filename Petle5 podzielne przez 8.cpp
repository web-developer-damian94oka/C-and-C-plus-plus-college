#include <stdio.h>
#include <stdlib.h>

int main(){
	
	for(int i = 1; i <= 100; i++){
		if(i % 8 == 0){
			printf("%5d", i);
		}
	}
	printf("\n");

	system ("pause");
	return 0;
}
