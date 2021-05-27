#include <stdio.h>

int main(void) {
  int result;
  int x;
  int y;
  char islem;
  int flag=0;

  printf("hangi islemi yapmak istersiniz \n");
  printf("islemler: + - * /\n");
  printf("secilecek islem:");
  scanf(" %c", &islem);
  switch(islem){
    case '+':
        printf("ilk sayiyi giriniz \n");
        scanf(" %d", &x);
        printf("ikinci sayiyi giriniz \n");
        scanf(" %d", &y); 
        result = x + y ;
        flag = 1;
        break;

    case '-': 
        printf("ilk sayiyi giriniz \n");
        scanf(" %d", &x);
        printf("ikinci sayiyi giriniz \n");
        scanf(" %d", &y); 
      result = x - y ;
      flag = 1;
      break;

    case '*':
        printf("ilk sayiyi giriniz \n");
        scanf(" %d", &x);
        printf("ikinci sayiyi giriniz \n");
        scanf(" %d", &y);  
      result = x*y;
      flag = 1;
      break; 

    case '/':
        printf("ilk sayiyi giriniz \n");
        scanf(" %d", &x);
        printf("ikinci sayiyi giriniz \n");
        scanf(" %d", &y);  
      result = x / y;
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