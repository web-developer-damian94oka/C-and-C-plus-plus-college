#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int iloscLiczb;
	float liczba, suma = 0;
	
	printf("Podaj ilosc liczb ktore wpowadzisz: \n");
	scanf("%d", &iloscLiczb);
	
	for(int i = 1; i <= iloscLiczb; i++){
		printf("Wprowadz liczbe %d : \n", i);
		scanf("%f", &liczba);
		suma += liczba;
	}
	
	printf("Suma wprowadonych przez ciebie liczb to %.2f, a ich srednia to %.2f. \n", suma, suma / iloscLiczb);
	
	system("pause");
	return(0);
}
