#include <stdio.h>

char dunyali[30] = "Ben Dunyaliyim";

int main(){
	char main_scope[30] = "Ben Main Scope'um";
	{
		char turkiye[30] = "Ben Turk Vatandasiyim";
		{
			char sinoplu[30] = "Ben Sinopluyum";
		}
		{
			char adanali[30] = "Adanaliyah Gardas";
		}
	}
	{
		char almanya[30] = "Burasi Almanya";
	}
	printf("%s",main_scope);
}
