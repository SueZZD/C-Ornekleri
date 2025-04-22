#include <stdio.h>

int main(){
	int sayi, i;
	int fakt=1; //faktöriyeli bire eşitledik
	
	printf("Bir sayi giriniz:");    // Ekrana mesaj yazdırma
	scanf("%d", &sayi);     // Kullanıcıdan tamsayı değer okuma
	// Faktöriyel hesaplamak için for döngüsü
	for(i=1; i<=sayi; i++){     // 1'den başlayarak girilen sayıya kadar döner
		fakt*=i;              // Her iterasyonda i değerini fakt ile çarp ve fakt'a ata
	}
	printf("Girdiginiz sayinin faktöriyeli: %d!= %d", sayi, fakt);          // Sonucu ekrana yazdırma
	
	return 0;         // Programın başarıyla sonlandığını belirtir
}
