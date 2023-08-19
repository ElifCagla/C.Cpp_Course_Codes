#include <stdio.h>
#include <string.h>

char ajanda[7][2][20] = {
			{"pazartesi","piknik"},
			{"sali","ders calis"},
			{"carsamba","robot tasarla"},
			{"persembe","ev temizligi"},
			{"cuma","cuma cikisi kod yaz"},
			{"cumartesi","mangal"},
			{"pazar","zabaaa gadar ders"}
		};
		
int main(){
	for(int i=0; i<7; i++){
		printf("\n%d. Gun/", i+1);
		printf("\t%s:", ajanda[i]);	
		printf("\t%s", ajanda[i][1]);
	}
}
