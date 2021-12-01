#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int zKlawiatury, wynik = 0;
	
	while(wynik < 1000){ 
		printf("Podaj liczbe do dodania: \n");
		scanf("%d", &zKlawiatury);
		printf("Suma podanych przez ciebie liczby wynosi: %d \n", wynik += zKlawiatury);
	}
	
	system("pause");
	return(0);
}
