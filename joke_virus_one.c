#include <stdio.h>
#include <unistd.h>

int main(){
	int i;
	
	printf("Format Baslatiliyor....\n");
	sleep(3);

	for( i=1; i<10; i++){
		printf(".");usleep(40000);
	}
	printf("\nBilgisayarinizi Formatliyorum...\n");
	sleep(3);
	for(i=1; i<50; i++){
		printf(".");usleep(30000);
	}
	printf("\n");
	for( i=0; i<=10; i++){
		printf("%%%d\t",i*10);usleep(8800);
	}
	
	sleep(3);
	printf("\n !!!!Herseyinizi Tamamen Sildim.GECMIS OLSUN!!!\n");
}
