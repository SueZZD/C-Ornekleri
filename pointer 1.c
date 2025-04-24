#include <stdio.h>

int main() {
    int sayi = 10;
    int *pointer = &sayi; // 'sayi'nin adresini pointer'a atadýk

    printf("Sayinin degeri: %d\n", sayi);    // 10
    printf("Pointerin gosterdigi deger: %d\n", *pointer); // 10 (dereferans)
    printf("Pointerin tuttugu adres: %p\n", pointer);     // Bellek adresi (örn: 0x7ffd...)

    *pointer = 20; // Pointer üzerinden deðeri deðiþtirme
    printf("Yeni deðer: %d\n", sayi); // 20

    return 0;
}
