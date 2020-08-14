#include "bits/stdc++.h"
#include <algorithm>
using namespace std;

void subtask()
{
	int n;
	cin>>n;
	int arr[n],i;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	int j=0,cnt=0,temp,k=n-1,temp1,itr=0,b[n],l;
	for(l=0;l<n;l++)
	{
		b[i]=0;
	}
	l=0;
	while(j<n/2)
	{
		temp = arr[k]+arr[j];
		if(itr>0)
		{
			if(temp1!=temp)
			{
				j=0;
				b[l++]=cnt;
				cnt=0;
				n--;	
			}
			else
			{
				k--;
				j++;
				cnt++;		
			}	
		}
		if(itr==0)
		{
			j++;
			k--;
		}
		temp1 = temp;
		itr++;
	}
	if(b[0]==0)
		cout<<cnt+1<<endl;
	else
	{
		int max=b[0];
		for(i=0;i<n;i++)
		{
			if(max<b[i])
				max=b[i];
		}
		cout<<max<<endl;
	}
}

int main()
{
	int t,i;
	cin>>t;
	for(i=0;i<t;i++)
	{
		subtask();
	}
	return 0;
}
