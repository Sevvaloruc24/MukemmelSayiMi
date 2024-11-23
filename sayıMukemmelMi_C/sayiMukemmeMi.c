#include <stdio.h>

// Mükemmel sayýyý kontrol eden fonksiyon
int mukemmelSayi(int sayi) {
    int toplam = 0;
    int i;

    // Sayýnýn bölenlerini bul ve toplamýný hesapla
    for (i = 1; i <= sayi / 2; i++) {
        if (sayi % i == 0) {
            toplam += i; // i, sayýnýn böleni ise, toplamýna ekle
        }
    }

    // Eðer toplam sayýya eþitse, mükemmel sayýdýr
    if (toplam == sayi) {
        return 1; // Mükemmel sayý
    } else {
        return 0; // Mükemmel sayý deðil
    }
}

int main() {
    int sayi;

    // Kullanýcýdan sayýyý al
    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);

    // Sayýnýn mükemmel sayý olup olmadýðýný kontrol et
    if (mukemmelSayi(sayi)) {
        printf("%d sayisi mukemmel sayidir.\n", sayi);
    } else {
        printf("%d sayisi mukemmel sayi degildir.\n", sayi);
    }

    return 0;
}

