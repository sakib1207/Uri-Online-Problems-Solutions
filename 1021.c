#include<stdio.h>
int main()
{
    double N,a,b,c,d,e,f,g;
    int A,B,i,j,k,h,l;
    scanf("%lf",&N);
    printf("NOTAS:\n");
    a=(int)(N/100);
    printf("%.0lf nota(s) de R$ 100.00\n",a);
    b=(int)(N-(a*100))/50;
    printf("%.0lf nota(s) de R$ 50.00\n",b);
 
    c=(int)(N-(a*100)-(b*50))/20;
    printf("%.0lf nota(s) de R$ 20.00\n",c);
    d=(int)(N-((a*100)+(b*50)+(c*20)))/10;
    printf("%.0lf nota(s) de R$ 10.00\n",d);
    e=(int)(N-((a*100)+(b*50)+(c*20)+(d*10)))/5;
    printf("%.0lf nota(s) de R$ 5.00\n",e);
    f=(int)(N-((a*100)+(b*50)+(c*20)+(d*10)+(e*5)))/2;
    printf("%.0lf nota(s) de R$ 2.00\n",f);
    printf("MOEDAS:\n");
    g=(int)(N-((a*100)+(b*50)+(c*20)+(d*10)+(e*5)+(f*2)))/1;
    printf("%.0lf moeda(s) de R$ 1.00\n",g);
    A=N*100;
 
    B=A%100;
    h=B/50;
    printf("%d moeda(s) de R$ 0.50\n",h);
    i=((B-(h*50))/25);
    printf("%d moeda(s) de R$ 0.25\n",i);
    j=((B-(h*50)-(25*i))/10);
    printf("%d moeda(s) de R$ 0.10\n",j);
    k=((B-(h*50)-(25*i)-(10*j))/5);
    printf("%d moeda(s) de R$ 0.05\n",k);
    l=((B-(h*50)-(25*i)-(10*j)-(k*5))/1);
    printf("%d moeda(s) de R$ 0.01\n",l);
 
    return 0;
}
