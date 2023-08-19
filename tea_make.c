#include <stdio.h>

void cay_yap(int parametre){
	int i;
	for(i = 1; i<=parametre; i++){
		printf("%d. Cayi Yaptim\n",i);
	}
}

int main(){
	cay_yap(5);
	return 0;
}
