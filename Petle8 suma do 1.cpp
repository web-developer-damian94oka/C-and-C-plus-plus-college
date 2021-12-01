#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int zKlawiatury = 0, wynik = 0;
	
	while(zKlawiatury != 1){ 
		printf("Podaj liczbe do dodania: \n");
		scanf("%d", &zKlawiatury);
		printf("Suma podanych przez ciebie liczby wynosi: %d \n", wynik += zKlawiatury);
	}
	
	system("pause");
	return(0);
}
