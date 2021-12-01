#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	
	int wielkoscTab;
	printf("Wybierz ilosc liczb ktore chcesz wprowadzic : ");
	scanf("%d", &wielkoscTab);
	float tablica[wielkoscTab];
		
	for(int i = 0; i < wielkoscTab; i++){
		printf("Wprowadz liczbe rzeczywista nr %d : ", i + 1);
		scanf("%f", &tablica[i]);
	}

	printf("\nWprowadzone przez ciebie liczby po podniesieniu do kwadratu: \n");
	for(int i = 0; i < wielkoscTab; i++){
		printf("%.0f",pow(tablica[i],2));
		if (i != wielkoscTab - 1){
			printf(", ");
		}
	}
	printf("\n");
	
	system("pause");
	return(0);
}
