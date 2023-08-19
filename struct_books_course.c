#include <stdio.h>

struct kitap {
    int sayfa_sayisi;
    int soru_sayisi;
    char *soru_tipi;
    char *zorluk_derecesi;
    char *resimlimi;
    char *ders_adi;
    double fiyati;
};

struct tatli {
    int sayfa_sayisi;
    char *resimlimi;
    double fiyati;
};

struct konuanlatim {
    char *ders_adi;
    int sayfa_sayisi;
    char *zorluk_derecesi;
    double fiyati;
};

int main() {
    struct kitap test_kitabi;
    test_kitabi.ders_adi = "matematik";
    test_kitabi.sayfa_sayisi = 460;
    test_kitabi.soru_sayisi = 1024;
    test_kitabi.soru_tipi = "test";
    test_kitabi.zorluk_derecesi = "%80 ZOR";
    test_kitabi.fiyati = 290;

    struct tatli tatlilar;
    tatlilar.sayfa_sayisi = 92;
    tatlilar.resimlimi = "evet";
    tatlilar.fiyati = 45;
    
    struct konuanlatim konu;
    konu.ders_adi = "Ingilizce";
    konu.sayfa_sayisi = 145;
    konu.zorluk_derecesi = "%50 ORTA";
    konu.fiyati = 90;

    printf("TEST KITABI\n");
        printf("---------------------------------------\n");
    printf("test kitabi ders adi: %s\n", test_kitabi.ders_adi);
    printf("test kitabi fiyati: %.2lf\n", test_kitabi.fiyati);
    printf("test kitabi sayfa sayisi: %d\n", test_kitabi.sayfa_sayisi);
    printf("test kitabi soru sayisi: %d\n", test_kitabi.soru_sayisi);
    printf("test kitabi soru tipi: %s\n", test_kitabi.soru_tipi);
    printf("test kitabi zorluk derecesi: %s\n", test_kitabi.zorluk_derecesi);

    printf("\nTATLILAR KITABI\n");
   		 printf("---------------------------------------\n");
    printf("tatlilar kitabi sayfa sayisi: %d\n", tatlilar.sayfa_sayisi);
    printf("tatlilar kitabi resimli mi: %s\n", tatlilar.resimlimi);
    printf("tatlilar kitabi fiyati: %.2lf\n", tatlilar.fiyati);

    printf("\nKONU ANLATIM\n");
        printf("---------------------------------------\n");
    printf("konu anlatim  kitabi ders adi: %s\n", konu.ders_adi);
    printf("konu anlatim  kitabi fiyati: %.2lf\n", konu.fiyati);
    printf("konu anlatim  kitabi sayfa sayisi: %d\n", konu.sayfa_sayisi);
    printf("konu anlatim  kitabi zorluk derecesi: %s\n", konu.zorluk_derecesi) ;

    return 0;
}
