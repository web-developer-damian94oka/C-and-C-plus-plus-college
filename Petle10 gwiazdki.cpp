#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int iloscGwiazdek;
	printf("Podaj ilosc * do wydrukowania: \n");
	scanf("%d", &iloscGwiazdek);
	
	for(; iloscGwiazdek > 0; iloscGwiazdek--){
		printf("*");
	}
	printf("\n");

	system("pause");
	return(0);
}
