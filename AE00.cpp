#include<stdio.h>
#include<math.h>
int main()
{
	long int n,i=1,ans=0,j;
	scanf("%lu",&n);
j=sqrt(n);

	while(i<=j)
	{
		ans=ans + (n/i-(i-1));
		i++;
	}
	printf("%lu\n",ans);
	return 0;
}
