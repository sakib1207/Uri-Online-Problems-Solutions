#include<stdio.h>
main()
{
int x,y;
double p;
scanf("%d%d",&x,&y);
if(x==1)
{
p=4*y;
printf("Total: R$ %.2lf\n",p);
}
if(x==2)
{
p=4.5*y;
printf("Total: R$ %.2lf\n",p);
}
if(x==3)
{
p=5*y;
printf("Total: R$ %.2lf\n",p);
}
if(x==4)
{
p=2*y;
printf("Total: R$ %.2lf\n",p);
}
if(x==5)
{
p=1.5*y;
printf("Total: R$ %.2lf\n",p);
}
return 0;
}
