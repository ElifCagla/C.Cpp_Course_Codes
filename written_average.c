#include <stdio.h>

int yazili_1, yazili_2;
double ortalama;

int main(){
	printf("1. Yazili Notunu Gir:");
	scanf("%d",&yazili_1);
	
	printf("\n2. Yazili Notunu Gir:");
	scanf("%d",&yazili_2);
	
	printf("\n1. Yaziliniz: %d", yazili_1);
	printf("\n2. Yaziliniz: %d", yazili_2);
	
	ortalama = (yazili_1 + yazili_2) / 2.00;
	
	printf("\n Ortalamaniz: %f", ortalama);
}
