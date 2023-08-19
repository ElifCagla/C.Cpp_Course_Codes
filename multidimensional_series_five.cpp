#include <stdio.h>
#include <string.h>

char duz_yazi[] = "Merhaba Arkadaslar Nasilsiniz?";
int i,dizi_boyutu;

int main(){
	dizi_boyutu = sizeof(duz_yazi) / sizeof(duz_yazi[0]);
	printf("\n%s",duz_yazi);
	for(i = dizi_boyutu ; i>=0; i--)
		if(duz_yazi[i]!=NULL)
			printf("%s",duz_yazi[i]);
}
