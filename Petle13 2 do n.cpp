#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	
	int iloscPoteg;
	
	printf("Podaj ilosc poteg liczby 2 ktora chcesz wyswietlic: \n");
	scanf("%d", &iloscPoteg);
	
	for(int i = 0; i <= iloscPoteg; i++){
		printf("2^%d = %.0f \n", i, pow(2,i));
	}

	system("pause");
	return(0);
}
