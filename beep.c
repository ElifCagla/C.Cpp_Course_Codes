#include <stdio.h>

int main(){
	int i;
	Beep(1000, 3000);
	for(i=1; i<50; i++){
		Beep(i*100,100);
		usleep(1000);
	}
	return 0;
}
