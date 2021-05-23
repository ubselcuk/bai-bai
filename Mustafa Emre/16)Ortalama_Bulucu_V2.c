#include <stdio.h>

int main (void){
	float x = 0 , ortalama = 0, counter = 0;
	while(x != -1){
		printf("\nortalama eklenecek sayi:");
		scanf("%f",&x);
        if (x!=-1){
            ortalama = ortalama + x;
            counter++;
        }     
	}
	printf("\ngirilen sayılarin ortalamasi:%f",ortalama/counter);
	return 0;
}