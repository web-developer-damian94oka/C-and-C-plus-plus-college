#include <stdio.h>
#include <stdlib.h>

int main() {
	int tablica[10];
	
	for(int i = 0; i < 10; i++){
		printf("Wprowadz liczbe calkowita nr %d : ", i + 1);
		scanf("%d", &tablica[i]);
	}
	printf("\nWprowadzone przez ciebie liczby to : ");

	for(int i = 0; i < 10; i++){
		printf("%d", tablica[i]);
		if(i < 9){
			printf(", ");
		}
	}
	printf("\n");
	
	system("pause");
	return(0);
}
