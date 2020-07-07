/*
A peak element is an element that is greater than its neighbors.

Given an input array nums, where nums[i] ≠ nums[i+1], find a peak element and return its index.

The array may contain multiple peaks, in that case return the minimum index of the peak.
*/

#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int peek_element(int arr[], int n)
{
	int ans;
	vector<int> v;
	if(arr[0]> arr[1])
	{
		v.push_back(0);
	}
		if(arr[n-1]> arr[n-2])
	{
		v.push_back(n-1);
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i]<arr[i+1])
		{
			if(arr[i+1]> arr[i+2])
			{
				ans = i+1;
				v.push_back(ans);
			}
		}
	}
	int res= *min_element(v.begin(), v.end());
	return res;
}

int main()
{
	int N;
	cin>>N;
	int arr[N];
	for(int i=0;i<N;i++)
	{
		cin>>arr[i];
	}
	int res = peek_element(arr, N);
	cout<<res;
}
