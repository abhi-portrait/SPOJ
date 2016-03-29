#include<stdio.h>
int main()
{
	int a[10001],i,t,sum=0,k,count=0;
	scanf("%d",&t);
	while(t!=-1)
	{
	sum=0;
	count=0;
	for(i=0;i<t;i++)
	scanf("%d",&a[i]);
	for(i=0;i<t;i++)
	sum=sum+a[i];
	if(sum%t==0)
	{
		k=sum/t;
		for(i=0;i<t;i++)
	{
		if(a[i]>k)
		{
		count=count+(a[i]-k);
		}
	}
	printf("%d\n",count);
	}
	else
	printf("-1\n");
	scanf("%d",&t);
}
return 0;

}
