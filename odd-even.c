#include <stdio.h>

int main(){
	int i;
	while(1){
		i++;
		if(i%2==0)printf("%d cift sayi\n",i);
		usleep(100000);
		if(i%2 != 0)printf("%d tek sayi\n",i);
	}
	return 0;
}
