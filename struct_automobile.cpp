#include <stdio.h>

struct otomobil{
  int motor_hacmi;
  char * rengi;
  float fiyati;
};

struct kamyon{
    int motor_hacmi;
    char * kasa_tipi;
    float fiyati;
    int tekerlek_sayisi;
};

void oto_tanit(char * isim , int motor_hacmi , char * rengi , float fiyati  ){
    printf("\n %s Guncel Fiyati : %.2f" ,isim ,   fiyati );
    printf("\n motor Hacmi : %d", motor_hacmi );
    printf("\n rengi: %s",rengi );
    printf("\n---------------------------\n");
}

int main(){

    struct kamyon mercedes_kamyon;
    struct otomobil mercedes; // otomobil struct ýný mercedes ismiyle TÜRETÝYORUZ
    struct otomobil woswos;

    mercedes.motor_hacmi=2000;
    mercedes.rengi="kirmizi";
    mercedes.fiyati=3523.123;

    woswos.motor_hacmi=1600;
    woswos.rengi="beyaz";
    woswos.fiyati=450000.0;

    oto_tanit( "mercedes", mercedes.motor_hacmi , mercedes.rengi , mercedes.fiyati ); // struct ýn fonksiyon içinde kullanýmý
    oto_tanit( "cins araba", 2000, "mor", 9999.99);

return 0;
}

