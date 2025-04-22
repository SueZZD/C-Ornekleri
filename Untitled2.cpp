#include <stdio.h>
#include <stdlib.h> // strtol için
#include <string.h>
#include <ctype.h>  // isspace için

int main() {
    char input[100];
    char *endptr;
    long sayi;

    while (1) {  // Sonsuz döngü (çýkýþ kontrolü içeride)
        printf("Bir pozitif tam sayi giriniz: ");
        fgets(input, sizeof(input), stdin);

        // Girdinin sonundaki '\n' karakterini temizle
        input[strcspn(input, "\n")] = '\0';

        // Boþ giriþ kontrolü (sadece Enter'a basýldýysa)
        if (input[0] == '\0') {
            printf("Hata: Boþ giriþ yapýlamaz!\n");
            continue;
        }

        sayi = strtol(input, &endptr, 10);

        // Geçerli bir tam sayý ve pozitif mi?
        if (*endptr == '\0' && sayi > 0) {
            break;  // Geçerli giriþ, döngüden çýk
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


