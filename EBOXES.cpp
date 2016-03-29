#include<stdio.h>
int main()
{
	long int t,n,k,x,f,ans;
	scanf("%lu",&t);
	while(t--)
	{
		scanf("%lu%lu%lu%lu",&n,&k,&x,&f);
		ans=(k*f-n)/(k-1);
		printf("%lu\n",ans);
	}
	return 0;
}
