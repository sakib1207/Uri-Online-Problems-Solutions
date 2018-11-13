#include<stdio.h>
int main()
{
int N,HUNDRED,FIFTY,TWENTY,TEN,FIVE,TWO,ONE;
scanf("%d",&N);
HUNDRED=(N/100);
FIFTY=((N%100)/50);
TWENTY=(((N%100)%50)/20);
TEN=((((N%100)%50)%20)/10);
FIVE=(((((N%100)%50)%20)%10)/5);
TWO=((((((N%100)%50)%20)%10)%5)/2);
ONE=(((((((N%100)%50)%20)%10)%5)%2)/1);
printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n",N,HUNDRED,FIFTY,TWENTY,TEN,FIVE,TWO,ONE);
return 0;
}
