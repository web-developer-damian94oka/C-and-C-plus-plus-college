#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int iloscLiczb;
	float suma = 0;
	
	printf("Podaj ilosc poczatkowych liczb parzystych ktore chcesz zsumowac: \n");
	scanf("%d", &iloscLiczb);
	
	for(int i = 0, j = 0; j < iloscLiczb; i++){
		if(i % 2 == 0){
			printf("%d", i);
			suma += i;
			j++;
		}
		if(i % 2 == 0 && j != iloscLiczb){
			printf(" + ");
		}
	}
	printf(" = %.0f \n", suma);

	system("pause");
	return(0);
}
