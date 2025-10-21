#include <stdio.h>

int main() {
    double getiri;          // Yatýrýmýn beklenen getirisi (%)
    double risksizFaiz;     // Risksiz faiz oraný (%)
    double standartSapma;   // Portföyün standart sapmasý (%)
    double sharpeOrani;     // Hesaplanacak Sharpe oraný

    printf("==== Sharpe Orani Hesaplama Programi ====\n\n");

    // Kullanýcýdan verileri alma
    printf("Yatirimin beklenen getirisini giriniz (%%): ");
    scanf("%lf", &getiri);

    printf("Risksiz faiz oranini giriniz (%%): ");
    scanf("%lf", &risksizFaiz);

    // Standart sapma için kontrol: 0 olamaz
    do {
        printf("Portfoyun standart sapmasini (riski) giriniz (%%): ");
        scanf("%lf", &standartSapma);

        if (standartSapma == 0) {
            printf("HATA: Standart sapma 0 olamaz! Lutfen tekrar deneyiniz.\n");
        }
    } while (standartSapma == 0);

    // Sharpe oranýný hesapla: (Getiri - Risksiz Faiz) / Standart Sapma
    sharpeOrani = (getiri - risksizFaiz) / standartSapma;

    // Sonucun ekrana yazdýrýlmasý
    printf("\n==== Sonuclar ====\n");
    printf("Yatirim Getirisi      : %.2f%%\n", getiri);
    printf("Risksiz Faiz Orani    : %.2f%%\n", risksizFaiz);
    printf("Standart Sapma (Risk) : %.2f%%\n", standartSapma);
    printf("Sharpe Orani          : %.2f\n", sharpeOrani);

    // Yorumsal deðerlendirme
    if (sharpeOrani < 1.0)
        printf("Performans Degerlendirmesi: Ortalama altinda bir performans.\n");
    else if (sharpeOrani < 2.0)
        printf("Performans Degerlendirmesi: Iyi bir performans.\n");
    else if (sharpeOrani < 3.0)
        printf("Performans Degerlendirmesi: Cok iyi bir performans.\n");
    else
        printf("Performans Degerlendirmesi: Mukemmel bir performans!\n");

    printf("===========================================\n");

    return 0;
}
