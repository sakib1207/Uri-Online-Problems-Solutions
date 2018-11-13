#include<stdio.h>
main()
{
int a,al=0,g=0,d=0;
	scanf("%d",&a);
	if(a==1)
		{
			al++;
		}
		if(a==2)
		{
			g++;
		}
		if(a==3)
		{
			d++;
		}
	while(a!=4)
	{
		scanf("%d",&a);
		{
		if(a==1)
		{
			al++;
		}
		if(a==2)
		{
			g++;
		}
		if(a==3)
		{
			d++;
		}
	}
	}
	
	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n",al);
	printf("Gasolina: %d\n",g);
	printf("Diesel: %d\n",d);

}

