#include<iostream>
int main()
{
	long int t,z,i=0,sum;
	long long int n[100000],k;
	std::cin>>t;
	z=t;
	while(t>0)
	{
	std::	cin>>n[i];
		i++;
		t--;
	}
	std::cout<<"\n";
	for(i=0;i<z;i++)
	{
	sum=0;

	if(n[i]<5)
	sum=0;
	k=n[i]/5;
		while(k>=1)
		{
			sum=sum+k;
			k=k/5;
		}
	std::	cout<<sum;
	std::cout<<"\n";
	}

	return 0;

}
