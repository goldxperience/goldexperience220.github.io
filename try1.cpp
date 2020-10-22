//习题(13-9) 输出不重复的数字
//20000 张致远
//2020-10-22
#include<iostream>
using namespace std;
int main ()
{
	int L,M;
	cin >> L >> M;
	const int l=L,m=M;
	int a[m],b[m];
	for(int i=0;i<m;i++)
	{	
		cin >> a[i] >> b[i];
	}
	int sum=0;
	for(int i=0;i<m-1;i++)
	{
		if(a[i+1]>a[i]&&a[i+1]<b[i])
		{
			if(b[i+1]<b[i])
			{
				b[i+1]=b[i];
			}
			sum=sum+b[i+1]-b[i];
			a[i+1]=a[i];
		}
		else if(a[i+1]<a[i]&&b[i+1]>a[i])
		{
			if(b[i+1]<b[i])
			{
				b[i+1]=b[i];
				sum=sum+a[i]-a[i+1];
			}
			sum=sum+a[i]-a[i+1]+b[i+1]-b[i];
		}
		else sum=sum+b[i+1]-a[i+1];
	}
	int treesLeft;
	treesLeft=L-sum;
	cout << treesLeft << endl;
	return 0;
} 
