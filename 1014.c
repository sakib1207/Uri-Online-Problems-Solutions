#include<stdio.h>
int main()
{
int X;
float Y;
double average_consumption;
scanf("%d%f",&X,&Y);
average_consumption=(X/Y);
printf("%.3lf km/l\n",average_consumption);
return 0;
}
