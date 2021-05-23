#include <stdio.h>

int main (void){
	float x = 0 , ortalama = 0;
	printf("-1 girilmedigi surece ortlamaya sayilar eklenmeye devam edecek");
	while(x != -1){
		ortalama = (ortalama + x)/2;
		printf("\nortalama eklenecek sayi:");
		scanf("%f",&x);
	}
	printf("\ngirilen sayılarin ortalamasi:%f",ortalama);
	return 0;
}

