#include <stdio.h>

int main() {
    double getiri;          // Yat�r�m�n beklenen getirisi (%)
    double risksizFaiz;     // Risksiz faiz oran� (%)
    double standartSapma;   // Portf�y�n standart sapmas� (%)
    double sharpeOrani;     // Hesaplanacak Sharpe oran�

    printf("==== Sharpe Orani Hesaplama Programi ====\n\n");

    // Kullan�c�dan verileri alma
    printf("Yatirimin beklenen getirisini giriniz (%%): ");
    scanf("%lf", &getiri);

    printf("Risksiz faiz oranini giriniz (%%): ");
    scanf("%lf", &risksizFaiz);

    // Standart sapma i�in kontrol: 0 olamaz
    do {
        printf("Portfoyun standart sapmasini (riski) giriniz (%%): ");
        scanf("%lf", &standartSapma);

        if (standartSapma == 0) {
            printf("HATA: Standart sapma 0 olamaz! Lutfen tekrar deneyiniz.\n");
        }
    } while (standartSapma == 0);

    // Sharpe oran�n� hesapla: (Getiri - Risksiz Faiz) / Standart Sapma
    sharpeOrani = (getiri - risksizFaiz) / standartSapma;

    // Sonucun ekrana yazd�r�lmas�
    printf("\n==== Sonuclar ====\n");
    printf("Yatirim Getirisi      : %.2f%%\n", getiri);
    printf("Risksiz Faiz Orani    : %.2f%%\n", risksizFaiz);
    printf("Standart Sapma (Risk) : %.2f%%\n", standartSapma);
    printf("Sharpe Orani          : %.2f\n", sharpeOrani);

    // Yorumsal de�erlendirme
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
