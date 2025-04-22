#include <stdio.h>
#include <stdlib.h> // strtol için
#include <string.h>
#include <ctype.h>  // isspace için

int main() {
    char input[100];
    char *endptr;
    long sayi;

    while (1) {  // Sonsuz döngü (çıkış kontrolü içeride)
        printf("Bir pozitif tam sayi giriniz: ");
        fgets(input, sizeof(input), stdin);

        // Girdinin sonundaki '\n' karakterini temizle
        input[strcspn(input, "\n")] = '\0';

        // Boş giriş kontrolü (sadece Enter'a basıldıysa)
        if (input[0] == '\0') {
            printf("Hata: Boş giriş yapılamaz!\n");
            continue;
        }

        sayi = strtol(input, &endptr, 10);

        // Geçerli bir tam sayı ve pozitif mi?
        if (*endptr == '\0' && sayi > 0) {
            break;  // Geçerli giriş, döngüden çık
        } else {
            printf("Hata: '%s' gecersiz! Lutfen pozitif tamsayi girin.\n", input);
        }
    }
    
    // Faktöriyel hesaplama
    long fakt = 1;
    for (long i = 1; i <= sayi; i++) {
        fakt *= i;
    }

    printf("Girdiginiz sayinin faktöriyeli: %ld! = %ld\n", sayi, fakt);
    return 0;
}


