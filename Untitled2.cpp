#include <stdio.h>
#include <stdlib.h> // strtol i�in
#include <string.h>
#include <ctype.h>  // isspace i�in

int main() {
    char input[100];
    char *endptr;
    long sayi;

    while (1) {  // Sonsuz d�ng� (��k�� kontrol� i�eride)
        printf("Bir pozitif tam sayi giriniz: ");
        fgets(input, sizeof(input), stdin);

        // Girdinin sonundaki '\n' karakterini temizle
        input[strcspn(input, "\n")] = '\0';

        // Bo� giri� kontrol� (sadece Enter'a bas�ld�ysa)
        if (input[0] == '\0') {
            printf("Hata: Bo� giri� yap�lamaz!\n");
            continue;
        }

        sayi = strtol(input, &endptr, 10);

        // Ge�erli bir tam say� ve pozitif mi?
        if (*endptr == '\0' && sayi > 0) {
            break;  // Ge�erli giri�, d�ng�den ��k
        } else {
            printf("Hata: '%s' gecersiz! Lutfen pozitif tamsayi girin.\n", input);
        }
    }
    
    // Fakt�riyel hesaplama
    long fakt = 1;
    for (long i = 1; i <= sayi; i++) {
        fakt *= i;
    }

    printf("Girdiginiz sayinin fakt�riyeli: %ld! = %ld\n", sayi, fakt);
    return 0;
}


