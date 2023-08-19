#include <stdio.h>
#include <string.h>

struct menu {
    char isim[50];
    float fiyat;
};

void siparis_al() {
    struct menu yemek_listesi[5];
    
    strcpy(yemek_listesi[0].isim, "Pilav");
    yemek_listesi[0].fiyat = 30;

    strcpy(yemek_listesi[1].isim, "Cacik");
    yemek_listesi[1].fiyat = 10;

    strcpy(yemek_listesi[2].isim, "Kokorec");
    yemek_listesi[2].fiyat = 70;

    strcpy(yemek_listesi[3].isim, "Doner");
    yemek_listesi[3].fiyat = 80;

    strcpy(yemek_listesi[4].isim, "Tiramisu");
    yemek_listesi[4].fiyat = 75;

    int siparis_no;
    printf("Merhaba dostum naber? Ne istersin?\n ");
    printf(" ============================================\n");
    printf(" Pilav (0) - Fiyat: 30,00TL  \n");
    printf(" Cacik (1) - Fiyat: 10,00TL \n");
    printf(" Kokorec (2) - Fiyat: 70,00TL  \n");
    printf(" Doner (3) - Fiyat: 80,00TL  \n");
    printf(" Tiramisu (4) - Fiyat: 75,00TL  \n");
    printf(" ============================================\n-->");
    scanf("%d", &siparis_no);

    if (siparis_no >= 0 && siparis_no < 5) {
        printf("%s siparisi tercih ettiniz. %s aliyorsunuz. Almak ister misiniz? (E/H)\n--> ", yemek_listesi[siparis_no].isim, yemek_listesi[siparis_no].isim);
        
        char cevap;
        scanf(" %c", &cevap );
        if (cevap == 'E' || cevap == 'e') {
            printf("%s aliyorsunuz. Fiyat: %.2f TL\n", yemek_listesi[siparis_no].isim, yemek_listesi[siparis_no].fiyat);
        } else if (cevap == 'H' || cevap == 'h') {
            printf("Satin alma islemi reddedildi.\n");
            siparis_al();
        } else {
            printf("Gecersiz cevap!\n");
        }
    } else {
        printf("Gecersiz siparis numarasi!\n");
    }
    
}
