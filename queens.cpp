

#include <iostream>

using namespace std;

int a[100]={0};
bool place(int n)
{
	int i;
	for (i=1;i<n;i++)
	{
		if (a[i]==a[n]||abs(a[i]-n[a])==abs(i-n))
		{
			return false;
		}
	}
	return true;
}
int sum=0;
void quence2(int n,int num)
{
	int i;
	if (n==num)
	{
		sum++;
		printf("%d ",sum);
		for (i=1;i<=8;i++)
		{
			printf("%d ",a[i]);
		}
		printf("\n");
		return ;
	}

	for (i=1;i<=8;i++)
	{
		a[n]=i;
		if (place(n))
		{
			quence2(n+1,num);
		}
	}
}

int sum2=0;
void quence(int n)
{
	int k=1;
	int i;
	while(k>0)
	{
		a[k]=a[k]+1;
		while (k<=n&&!place(k))
		{
			a[k]=a[k]+1;
		}
		if (k==n&&a[k]<=n)
		{
			sum2++;
			if (10==sum2)
			{
				return ;
			}
			printf("%d ",sum2);
			for (i=1;i<=n;i++)
			{
				printf("%d ",a[i]);
			}
			printf("\n");
		}else if (k<n&&a[k]<=n)
		{
			k++;
		}else
		{
			a[k]=0;
			k--;
		}
	}
}



int main()
{
//	quence(8);
	quence2(1,8+1);
	return 1;
}