#include <stdio.h>

int main(){
	int sayi, i;
	int fakt=1;
	
	printf("Bir sayi giriniz:");
	scanf("%d", &sayi);
	
	for(i=1; i<=sayi; i++){
		fakt*=i;
	}
	printf("Girdiginiz sayinin faktöriyeli: %d!= %d", sayi, fakt);
	
	return 0;
}
