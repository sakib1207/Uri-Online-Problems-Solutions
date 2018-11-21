/*
************************************
*Name: Sakib Hasan Nishat           *
*Department : CSE                            *
*Make a different and easy code  *
***********************************
*/
#include<stdio.h>
#include<math.h>
int main()
{
	int t,i;
	double a[100],ans;
	while(scanf("%d",&t)!=EOF)
	{
		for(i=0;i<t;i++)
		{
			scanf("%lf",&a[i]);
		}
		ans=a[0];
		for(i=0;i<t-1;i++)
		{
			if(a[i]>a[i+1])
		{
			ans=a[i+1];
		}
		}
		printf("%.2lf\n",ans);
	}
	return 0;
}
