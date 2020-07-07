/*
Given an integer array nums,
find the contiguous subarray within an array (containing at least one number) which has the largest product.
*/

#include<iostream>
#include<algorithm>
using namespace std;

int largest_prod(int arr[], int n)
{
	int m = 0, m1 = 0;
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		int t = m;
		m = max(arr[i], max(arr[i] * m, arr[i] * m1));
		m1 = min(arr[i], min(arr[i] * t, arr[i] * m1));
		ans = max(ans, m);
	}
	return ans;
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n; i++)
	{
		cin>>arr[i];
	}
	cout<<largest_prod(arr, n);
}
