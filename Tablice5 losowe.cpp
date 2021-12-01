#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <cstdio>
#include <math.h>

int main(){

	int szczesliwyNr, tab[100], min, max, tab2[sizeof(tab)/sizeof(*tab)], srodkowy1, srodkowy2, minLokalne, indeksMinLok;
	double suma = 0, srednia, sredni;

	printf("Podaj swoj szczesliwy numer: "); // a) tworzy tablice z losowymi liczbami
	scanf("%d", &szczesliwyNr);
	srand(szczesliwyNr);
    for(int i = 0; i < sizeof(tab)/sizeof(*tab); i++){ 
    	tab[i] = rand();
	}
	
	for (int i = 0; i < sizeof(tab)/sizeof(*tab); i++){ // kopiuje tab do tab2
		tab2[i] = tab[i];
	}
	
	min = tab[0]; // b)min i max
	for(int i = 1; i < sizeof(tab)/sizeof(*tab); i++){ 
		if (tab[i] < min){
			min = tab[i];
		}
	}	
	max = tab[0];
	for(int i = 1; i < sizeof(tab)/sizeof(*tab); i++){ 
		if (tab[i] > max){
			max = tab[i];
		}
	}
	printf("\nb)Najmniejszy i najwiekszy element tablicy: %d i %d \n", min, max);

	for(int i = 0; i < sizeof(tab)/sizeof(*tab); i++){ // c)suma i srednia
		suma += tab[i];
	}	
	srednia = suma / (sizeof(tab)/sizeof(*tab));
	printf("c)Suma i srednia z liczb w tablicy: %.0f i %.2f \n", suma, srednia);
	
	sredni = tab[0]; // d)sredni
	for(int i = 1; i < sizeof(tab)/sizeof(*tab); i++){ 
		if (abs(tab[i] - srednia) < abs(sredni - srednia)){
			sredni = tab[i];
		}
	}
	printf("d)Sredni element tablicy: %.0f\n", sredni);
	
	if(sizeof(tab2)/sizeof(*tab2) % 2 == 1 && sizeof(tab2)/sizeof(*tab2) > 1){ // e) element srodkowy nieparzysta tablica
		for(int i = 0; i < ceilf(float (sizeof(tab2)/sizeof(*tab2))/2); i++){ // znajdz minimum i zastap maxem polowe + 0.5 razy
			minLokalne = tab2[0]; 
			indeksMinLok = 0;
			for(int i = 1; i < sizeof(tab2)/sizeof(*tab2); i++){ // znajdz min
				if (tab2[i] < minLokalne){
					minLokalne = tab2[i];
					indeksMinLok = i;
				}
			}
			srodkowy1 = tab2[indeksMinLok];
			tab2[indeksMinLok] = max; // eliminacja najmniejszego elementu przez zastapienie najwiekszym	
		}	
	printf("e)Tablica zawiera nieparzysta ilosc elementow wiec ma jeden element srodkowy: %d. \n", srodkowy1);

	}else if(sizeof(tab2)/sizeof(*tab2) % 2 == 0 && sizeof(tab2)/sizeof(*tab2) > 2) { // e) element srodkowy parzysta tablica
		for(int i = 0; i < (sizeof(tab2)/sizeof(*tab2)) / 2 + 1 ; i++){ // znajdz minimum i zastap maxem polowe + 1 razy
			minLokalne = tab2[0]; 
			indeksMinLok = 0;
			for(int i = 1; i < sizeof(tab2)/sizeof(*tab2); i++){ // znajdz min
				if (tab2[i] < minLokalne){
					minLokalne = tab2[i];
					indeksMinLok = i;
				}
			}
			if(i == (sizeof(tab2)/sizeof(*tab2)) / 2 - 1){ // przedostatnie min to srodkowy1
				srodkowy1 = tab2[indeksMinLok];
			}else if(i == (sizeof(tab2)/sizeof(*tab2)) / 2){ // ostatnie min to srodkowy2
				srodkowy2 = tab2[indeksMinLok];
			}
			tab2[indeksMinLok] = max; // eliminacja najmniejszego elementu przez zastapienie najwiekszym	
		}	
	printf("e)Tablica zawiera parzysta ilosc elementow wiec ma dwa elementy srodkowe: %d i %d . \n  Ich srednia wynosi: %d .\n", srodkowy1, srodkowy2, (srodkowy1 + srodkowy2) / 2);
		
	} else {
		printf("e)Nieprawidlowy rozmiar tablicy.\n");
	}
	
	system("pause");
	return(0);
}
