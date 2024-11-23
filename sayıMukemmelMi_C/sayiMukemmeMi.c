#include <stdio.h>

// M�kemmel say�y� kontrol eden fonksiyon
int mukemmelSayi(int sayi) {
    int toplam = 0;
    int i;

    // Say�n�n b�lenlerini bul ve toplam�n� hesapla
    for (i = 1; i <= sayi / 2; i++) {
        if (sayi % i == 0) {
            toplam += i; // i, say�n�n b�leni ise, toplam�na ekle
        }
    }

    // E�er toplam say�ya e�itse, m�kemmel say�d�r
    if (toplam == sayi) {
        return 1; // M�kemmel say�
    } else {
        return 0; // M�kemmel say� de�il
    }
}

int main() {
    int sayi;

    // Kullan�c�dan say�y� al
    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);

    // Say�n�n m�kemmel say� olup olmad���n� kontrol et
    if (mukemmelSayi(sayi)) {
        printf("%d sayisi mukemmel sayidir.\n", sayi);
    } else {
        printf("%d sayisi mukemmel sayi degildir.\n", sayi);
    }

    return 0;
}

