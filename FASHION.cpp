#include<stdio.h>
void mergesort(int a[],int beg,int end)
{int mid;
if(beg<end)
{

mid=(beg+end)/2;
mergesort(a,beg,mid);
mergesort(a,mid+1,end);
merge(a,beg,mid,end);
}}
void merge(int a[],int beg,int mid,int end)
{
	int i=beg,j=mid+1,k,index=beg,c[1001];
	while((i<=mid) && (j<=end))
	{


	if(a[i]<a[j] )
	{
		c[index]=a[i];
		i++;

	}
	else
	{c[index]=a[j];
	j++;

	}index++;
}
	if(i>mid)
	{
		while(j<=end)
		{
			c[index]=a[j];
			j++;
			index++;
		}}
		else

		{
			while(i<=mid)
			{
				c[index]=a[i];
				i++;index++;
			}
		}

	for(k=beg;k<index;k++)
	a[k]=c[k];



}
int main()
{
	int t,n,i,a[1001],b[1001];
	long int sum;
	scanf("%d",&t);
	while(t--)
	{
		sum=0;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		for(i=0;i<n;i++)
		scanf("%d",&b[i]);
		mergesort(a,0,n-1);
	/*	for(i=0;i<n;i++)
		printf("%d\t",a[i]);*/

		mergesort(b,0,n-1);
	/*	for(i=0;i<n;i++)
		printf("%d\t",b[i]);*/
		for(i=0;i<n;i++)
		sum=sum + a[i]*b[i];
		printf("%lu\n",sum);

	}
	return 0;
}
