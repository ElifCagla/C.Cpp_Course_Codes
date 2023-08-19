#include <stdio.h>
#include <string.h>

int sayilar[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17};
int i,j;

char kelime[]="merhaba";
char*kelime2[]={"m","e","r","h","a","b","a"};

int main(){
	int dizi_boyutu = sizeof(sayilar) / sizeof(sayilar[0]);
	char harf_boyutu = sizeof(kelime)  / sizeof(kelime[0]);
	
	for( i=0; i<dizi_boyutu; i++){
		printf("\n%d sira: %d ", i+1,sayilar[i]);
	}
	
	printf("\n%s\n", kelime);
	
	for(i=0; i<7; i++) printf("\n%s sira: %s",i+1,kelime[0]);
} 

