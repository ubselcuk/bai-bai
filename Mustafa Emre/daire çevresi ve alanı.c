#include <stdio.h>
#define pi 3.14159265358979323846

int main(){
    float r;
	printf("dairenin yaricapi: ");
	scanf("%f",&r);
    if (r<0){
        printf("negatif uzunluk olmaz.");
    }
    else{
        printf("\ndairenin cevresinin uzunlugu:%f",(2*pi*r));
	    printf("\ndairenin cevresinin uzunlugu:%f",(pi*r*r));
    }
    return 0;
}