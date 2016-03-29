#include<stdio.h>
void merge( long long int a[],long long int beg,long long int mid,long long int end)
{
	long long int i=beg,j=mid+1,k,index=beg,c[100001];
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
void mergesort(long long int a[],long long int beg,long long int end)
{long long int mid;
if(beg<end)
{

mid=(beg+end)/2;
mergesort(a,beg,mid);
mergesort(a,mid+1,end);
merge(a,beg,mid,end);
}}
int binary(long long int a[],long long int s,long long int beg,long long int end)
{
	long long int mid,count=0;

	while(beg<=end)
	{
			mid=(beg+end)/2;
			if(s<a[mid])
			end=mid-1;
			else if(s>a[mid])
			beg=mid+1;
			else
			{
				count++;
				break;
			}

	}
	return count;
}
int main()
{
	long long int n,k,a[100000],i,c=0,count;
	scanf("%llu%llu",&n,&k);
	for(i=0;i<n;i++)
	scanf("%llu",&a[i]);
	mergesort(a,0,n-1);
	for(i=0;i<n;i++)
	{
	count=	binary(a,a[i]+k,i,n-1);
		c=c+count;
	}
	printf("%llu\n",c);
	return 0;
}
