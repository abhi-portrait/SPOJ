#include<stdio.h>
void main()
{
	long long int a,b,i,n,c[4];
	int t,k,s=1;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%llu%llu",&a,&b);
	s=1;
	if(b==0)
	{
	printf("1\n");
	}
	else
	{


		for(i=0;i<=3;i++)
		{
			s=s*a;
			c[i]=s%10;
		}
		k=b%4;

		if(k==0)
		printf("%llu\n",c[3]);
		else
		printf("%llu\n",c[k-1]);
	}
}

}
