#include <stdio.h>

int i,j;

int main(){
	printf("\nCARPIM TABLOSU\n");
	
	for(  i=1; i<=10 ; i++ ){
		
		if( i== 6 || i==9  || i==10 )printf("\n%d LAR TABLOSU\n" , i);
		else printf("\n%d LER TABLOSU \n" , i);
		
		 
		 for( j=1;  j<=10; j++)
		  printf("%d X %d = %d\n" , i , j , i*j  );
		
		printf("------------------");
	}
	
	
}
