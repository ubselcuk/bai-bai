#include <stdio.h>
#include <stdlib.h>

unsigned long long int fibonacci(int);
int main()
{
    for(int i=0 ; i<=20 ; i++ ){

        printf("%llu " , fibonacci(i));
    }

    return 0;
}

unsigned long long int fibonacci(int number){

    if(number==0 || number==1){
        return number;
    }
    else{
        return fibonacci(number-1)+fibonacci(number-2);
    }
}