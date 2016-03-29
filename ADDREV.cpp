#include<stdio.h>
#include<string.h>
#include<math.h>
void main()
{
	int t;

	long int rem1,rem2,rem3,a,b,ans;
	scanf("%d",&t);

	while(t--)
	{
		scanf("%lu%lu",&a,&b);


		rem1=0;
		while(a!=0)
		{
		rem1=rem1*10;
		rem1=rem1 + a%10;
		a=a/10;
		}
		rem2=0;
	while(b!=0)
		{
		rem2=rem2*10;
		rem2=rem2 + b%10;
		b=b/10;
		}
		ans=rem1+rem2;
		rem3=0;
		while(ans!=0)
		{
		rem3=rem3*10;
		rem3=rem3 + ans%10;
		ans=ans/10;
		}
		printf("%lu\n",rem3);

	}
}
