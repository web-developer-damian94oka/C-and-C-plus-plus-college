#include <stdio.h>
#include <stdlib.h>

int main(){
	
	for(int i = 1; i <= 100; i++){
		printf("%5d", i);
		if(i % 10 == 0){
			printf("\n");
		}
	}

	system ("pause");
	return 0;
}
