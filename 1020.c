#include<stdio.h>
int main()
{
  int AGE_DAYS,YEARS,MONTHS,DAYS ;
  scanf("%d",&AGE_DAYS);
  YEARS=(AGE_DAYS/365);
  MONTHS=((AGE_DAYS%365)/30);
DAYS=((AGE_DAYS%365)%30);
printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",YEARS,MONTHS,DAYS);
    return 0;

}
