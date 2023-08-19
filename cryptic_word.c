#include <stdio.h>

int i, kelime_boyutu;

int main(){
	char kelime[50];
	printf("Bir Kelime Giriniz:\n");
	scanf("%s",kelime);
	char sifreli[120];
	kelime_boyutu = strlen(kelime);
	
	for(i=0; i<kelime_boyutu; i++){
		char eski = kelime;
		char yeni_char = kelime[i]+1;
		printf("%c",yeni_char);
	}
	return 0;
}
