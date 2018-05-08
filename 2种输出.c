#include <stdio.h> 
int main()
{
	int a[20];
	a[0]=0;
	a[1]=1;
	int i;
	for(i=2;i<20;i++)
	{
	if(i%2==0) 
	a[i]=a[i-1]-a[i-2];
	else 
	a[i]=a[i-1]+a[i-2];
	}
	i=0;//两种输出方式都可以完成目标 
	while( i < 20) 
	{
      printf("%d\t", a[i++]);
      if(i % 4 == 0)  printf("\n");
    }
	for(i=0;i<20;i++)
	{if(i%4==0&i!=0)
	printf("\n");
	printf("%d\t",a[i]);}
	return;
}
