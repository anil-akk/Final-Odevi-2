📊 Sharpe Oranı Hesaplama Programı
👤 Yazar: Anıl Ak
ℹ Proje Hakkında
Bu C programı, bir yatırımın Sharpe oranını hesaplamak için geliştirilmiştir. Sharpe oranı, yatırımın riskine göre getirisini ölçen finansal bir göstergedir ve yatırım performansını değerlendirmek için kullanılır. 💹
Program kullanıcıdan;
💰 Yatırımın beklenen getirisi (%)
🏦 Risksiz faiz oranı (%)
📈 Portföyün standart sapması (risk) (%)
bilgilerini alır ve Sharpe oranını hesaplayarak kullanıcıya sonucu ve performans değerlendirmesini gösterir.
✨ Özellikler
🖊 Kullanıcıdan veri alma ve girdi kontrolü
⚠ Standart sapma 0 girilirse uyarı verip tekrar isteme
📊 Sharpe oranını hesaplama:
Kodu kopyala

Sharpe Oranı = (Getiri - Risksiz Faiz) / Standart Sapma
🏆 Hesaplanan Sharpe oranına göre performans değerlendirmesi:
< 1.0 → ❌ Ortalama altı
1.0–2.0 → ✅ İyi
2.0–3.0 → 🌟 Çok iyi
≥ 3.0 → 🏅 Mükemmel
🚀 Kullanım
Program derlenir ve çalıştırılır:
Kodu kopyala
Bash
gcc sharpe_hesaplama.c -o sharpe
./sharpe
Program açıldığında istenen değerler sırayla girilir.
Sonuçlar ve performans değerlendirmesi ekranda gösterilir.
🖥 Örnek Çıktı
Kodu kopyala

==== Sharpe Orani Hesaplama Programi ====

Yatirimin beklenen getirisini giriniz (%): 12
Risksiz faiz oranini giriniz (%): 3
Portfoyun standart sapmasini (riski) giriniz (%): 4

==== Sonuclar ====
Yatirim Getirisi      : 12.00%
Risksiz Faiz Orani    : 3.00%
Standart Sapma (Risk) : 4.00%
Sharpe Orani          : 2.25
Performans Degerlendirmesi: 🌟 Cok iyi bir performans.
===========================================
📄 Lisans
Bu proje Anıl Ak tarafından geliştirilmiştir ve eğitim amaçlıdır. 🎓
