#include <stdio.h>		// standart io(GiriþÇýkýþ) iþlemleri
#include <unistd.h>    // sleep fonksiyonu bu kütüphane içerisinde tanýmlanmýþtýr
#include <Windows.h>

int i;
 
int main(){ 
	Beep(3500,2000);
 	
	printf("                        ______\n");
    printf("                    .-\"      \"-.\n");
    printf("                   /            \\\n");
    printf("       _          |              |          _\n");
    printf("      ( \\         |,  .-.  .-.  ,|         / )\n");
    printf("       > \"=._     | )(__/  \\__)( |     _.=\" <\n");
    printf("      (_/\"=._\"=._ |/     /\\     \\| _.=\"_.=\"\\_)\n");
    printf("             \"=._ (_     ^^     _)\"_.=\"\n");
    printf("                 \"=\\__|IIIIII|__/=\"\n");
    printf("                _.=\"| \\IIIIII/ |\"=._\n");
    printf("      _     _.=\"_.=\"\\          /\"=._\"=._     _\n");
    printf("     ( \\_.=\"_.=\"     `--------`     \"=._\"=._/ )\n");
    printf("      > _.=\"                            \"=._ <\n");
    printf("     (_/   KuzeyRobotik ViRUSU            \\_)\n\n");

 	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED );
  
    Beep(3500,2000);
    printf("\t !!!! UYARI: SiSTEMiNiZE KUZEYROBOTIK.COM VIRUSU BULASTI !!!! \n");	
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

	 SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN );
	 printf( "C:\\ HARRDISK FORMATLAMA BASLIYOR" );
 
	 
	 for( i=1; i<50; i++ ){
	 	printf(".");usleep(40000);
	 }
	 
	 Beep(3500,1000);
	 printf("100%% TUM DOSYALAR TARANDI!!");
	 Beep(3500,2000);
	 printf( "\nC:\\ HARRDISK FORMATLANIYOR" );
	 
	 for( i=1; i<50; i++ ){
	 	printf(".");
		 usleep(30000);
	 }
	 
	 Beep(1500,1000);
	 printf("100%% C:\\  HARDDISK TAMAMEN FORMATLANDI!");
	 
 
	Beep(1500,3000); 	
	SetConsoleTextAttribute(hConsole, FOREGROUND_RED );
	printf("\n!!!!BEDAVA PEYNiR SADECE FARE KAPANINDA BULUNUR!!!!\n");
	printf("\n!!!!EN IYI KAZANC EMEK VERILENDiR!!!!\n");
	printf("\n!!!!HERSEY SiLiNDi GECMiS OLSUN!!!!");	
	SetConsoleTextAttribute(hConsole, FOREGROUND_INTENSITY );
	getchar();
}


