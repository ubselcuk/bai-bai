#include <stdio.h>

int x,y;

int toplama(int a, int b){
int sum;
sum= a+b;
return sum; 
}

int cikarma(int a, int b){
int sum;
sum= a-b;
return sum;
}

int carpma(int a, int b){
int sum;
sum= a*b;
return sum;
}

int bolme(int a, int b){
int sum;
sum= a/b;
return sum;
}

void sayial(){
  printf("ilk sayiyi giriniz \n");
  scanf(" %d", &x);

  printf("ikinci sayiyi giriniz \n");
  scanf(" %d", &y);
}

int main(void) {
  int result;
  char islem;
  int flag=0;

  printf("hangi islemi yapmak istersiniz \n");
  printf("islemler: + - * /\n");
  printf("secilecek islem:");
  scanf(" %c", &islem);
  switch(islem){
    case '+':
      sayial(); 
      result = toplama(x, y);
      flag = 1;
      break;

    case '-': 
      sayial(); 
      result = cikarma(x, y);
      flag = 1;
      break;

    case '*':
      sayial();  
      result = carpma(x, y);
      flag = 1;
      break; 

    case '/':
      sayial();  
      result = bolme(x, y);
      flag = 1;
      break;

    default: 
      printf("bilinmeyen islem");
      break;
    }
  if(flag == 1)
    printf("%d%c%d""=""%d\n",x,islem,y,result);
  return 0;
}