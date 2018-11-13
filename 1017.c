#include<stdio.h>
int main()
{
  int time,average_speed;
  double LITER_NEED;
  scanf("%d\n%d",&time,&average_speed);
  LITER_NEED=(time*(average_speed/12.0));
  printf("%.3lf\n",LITER_NEED);
    return 0;
}
