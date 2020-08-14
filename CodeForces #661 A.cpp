#include "bits/stdc++.h"
using namespace std;

void subtask()
{
	long long int n;
	cin>>n;
	long long int arr[n],brr[n],mina,minb,i,cnta,cntb,cnt;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<n;i++)
	{
		cin>>brr[i];
	}
	mina = arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]<mina)
			mina = arr[i];	
	}
	minb = brr[0];
	for(i=0;i<n;i++)
	{
		if(brr[i]<minb)
			minb = brr[i];	
	}
	cnta=cntb=cnt=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]>mina)
			cnta = arr[i]-mina;
		if(brr[i]>minb)
			cntb = brr[i]-minb;
		if(cnta>cntb)
		{
			cnt += cntb;
			cnt += cnta-cntb;
		}
		else
		{
			cnt += cnta;
			cnt += cntb-cnta;
		}
		cnta=cntb=0;	
	}
	cout<<cnt<<endl;
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
