#include<stdio.h>
main()
{
int a,i=0,j=0,k=0,l,m,n;
scanf("%d",&a);
if(1<a&&a<1000)
{
for(l=1;l<=a;l++)
	{
	   i=l;
	    j=l*l;
	    m=j+1;
	     k=l*l*l;
	     n=k+1;
printf("%d %d %d\n",i,j,k);
printf("%d %d %d\n",i,m,n);
	}
}
}
