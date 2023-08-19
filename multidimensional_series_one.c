#include <stdio.h>

int notlar[]={90,85,55,90};

int koordinat[5][9]={
	{1,2},
	{4,7},
	{6,5},
	{76,88},
	{11,22,33}
};

int uc_boyut[10][10][10]={
	{
		{5,9},
		{11,54},
		{11,22,33}
	}
};

int main(){
	printf("%d",uc_boyut[0][2][2]);
	return 0;
} 
