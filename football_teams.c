#include <stdio.h>
int i;

char* fener[]={  
		"arda", "zeko", "irfan" , "altay" , "besir" , "hasan" ,
		"osman" , "ismail" , "celal"  , "hakan", "bayram" 
	};

char* galata[]={
		"muslera"  ,"icardi" , "mertens" ,"kerem" , "gomis" , 
		"victor" , "boey"  , "mehmet" , "abdulkerim","yagiz" ,"uygar"
};

void galata_tek(){
		for(  i=0; i<=10 ; i++ ) if( i%2 != 0 ) printf("%d-%s \t", i , galata[i]  );  	 
}

void galata_cift(){
	for(i=0;i<10;i++)  if( i%2 == 0 ) printf("%d -%s \t", i , galata[i]); 
}

void fener_tek(){
		for(  i=0; i<=10 ; i++ ) if( i%2 != 0 ) printf("%d-%s \t", i , fener[i]  );  	 
}

void fener_cift(){
	for(i=0;i<10;i++)  if( i%2 == 0 ) printf("%d -%s \t", i , fener[i]); 
}

int main(){
	printf("GALTASARAY CIFTLER TAKIMI\n"); galata_cift();
	printf("\nGALTASARAY TEKLER TAKIMI\n"); galata_tek();
	
	printf("\nFENERBAHCE TEKLER TAKIMI\n"); fener_cift();
	printf("\nFENERBAHCE CIFTLER TAKIMI\n"); fener_tek();
}
