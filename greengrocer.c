#include <stdio.h>
#include <locale.h>

float elma_fiyat = 30.00;
float portakal_fiyat = 40.00;
float kiraz_fiyat = 50.00;
float muz_fiyat = 35.00;
float seftali_fiyat = 45.00;

int elma_stok = 5;
int portakal_stok = 5;
int kiraz_stok = 5;
int muz_stok = 5;
int seftali_stok = 5;

float para = 648.00;
float kalan_para;

char siparis_kodu;

void ince_cizgi() {
    printf("\n________\n");
}

void kalin_cizgi() {
    printf("\n=================================================\n");
}

void hesapla(float siparis_tutari, char siparis_ismi[]) {
    if (kalan_para >= siparis_tutari) {
        if (siparis_tutari > 0) {
            kalan_para -= siparis_tutari;
            kalin_cizgi();
            printf("%s ürünü baþarýlý bir þekilde satýn alýndý. Kalan para: %.2f$\n", siparis_ismi, kalan_para);
        } else {
            printf("Üzgünüz, bu ürün stokta yok!\n");
        }
    } else {
        printf("Yetersiz bakiye! Sipariþ alýnamadý.\n");
    }
    kalin_cizgi();
}

void gecersiz_urun(char gelen_harf) {
    ince_cizgi();
    printf("%c => Böyle bir ürün yok! Geçerli bir ürün kodu giriniz.\n", gelen_harf);
    ince_cizgi();
}

int main() {
    setlocale(LC_ALL, "Turkish");

    kalan_para = para;

    while (kalan_para > 0) {
        printf("Sipariþ kodu için harfi giriniz:\nElma (E) - Fiyat: %.2f$ - Stok: %d adet\nPortakal (P) - Fiyat: %.2f$ - Stok: %d adet\nKiraz (K) - Fiyat: %.2f$ - Stok: %d adet\nMuz (M) - Fiyat: %.2f$ - Stok: %d adet\nSeftali (S) - Fiyat: %.2f$ - Stok: %d adet\n",
               elma_fiyat, elma_stok, portakal_fiyat, portakal_stok, kiraz_fiyat, kiraz_stok, muz_fiyat, muz_stok, seftali_fiyat, seftali_stok);

        scanf(" %c", &siparis_kodu);

        switch (siparis_kodu) {
            case 'E':
            case 'e':
                if (elma_stok > 0) {
                    hesapla(elma_fiyat, "Elma");
                    elma_stok--;
                } else {
                    hesapla(0, "Elma");
                }
                break;
            case 'P':
            case 'p':
                if (portakal_stok > 0) {
                    hesapla(portakal_fiyat, "Portakal");
                    portakal_stok--;
                } else {
                    hesapla(0, "Portakal");
                }
                break;
            case 'K':
            case 'k':
                if (kiraz_stok > 0) {
                    hesapla(kiraz_fiyat, "Kiraz");
                    kiraz_stok--;
                } else {
                    hesapla(0, "Kiraz");
                }
                break;
            case 'M':
            case 'm':
                if (muz_stok > 0) {
                    hesapla(muz_fiyat, "Muz");
                    muz_stok--;
                } else {
                    hesapla(0, "Muz");
                }
                break;
            case 'S':
            case 's':
                if (seftali_stok > 0) {
                    hesapla(seftali_fiyat, "Seftali");
                    seftali_stok--;
                } else {
                    hesapla(0, "Seftali");
                }
                break;
            default:
                gecersiz_urun(siparis_kodu);
                break;
        }
    }

    printf("Para bitti! Sipariþ alýmlarýnýz sona erdi.\n");

    return 0;
}
