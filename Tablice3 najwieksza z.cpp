#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int wielkoscTab, max;
	
	printf("Wybierz ilosc liczb ktore chcesz wprowadzic : ");
	scanf("%d", &wielkoscTab);
	int tablica[wielkoscTab];
		
	for(int i = 0; i < wielkoscTab; i++){
		printf("Wprowadz liczbe calkowita nr %d : ", i + 1);
		scanf("%d", &tablica[i]);
	}

	max = tablica[0];
	for(int i = 1; i < wielkoscTab; i++){
		if(tablica[i] > max){
			max = tablica[i];
		}
	}
	printf("Najwieksza z podanych liczb to: %d\n", max);
	
	system("pause");
	return(0);
}
