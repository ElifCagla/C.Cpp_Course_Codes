#include <stdio.h>

int main() {
    char* dizi[] = {"m", "e", "r", "h", "a", "b", "a"};
    int i;
    int j;
	for (i = 0; i < 7; i++) {
		for (j = 0; j <= i; j++) {
			printf("%s", dizi[j]);
		}
		printf("\n");
    }
  	for (i = 5; i >= 0; i--) {
 		for (j = 0; j <= i; j++) {
  			printf("%s", dizi[j]);
      	}
       	printf("\n");
    }
    return 0;
}
