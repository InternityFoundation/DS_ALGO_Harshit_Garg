/*
mplement square root function that returns square root of given number.

Compute and return the square root of x, where x is guaranteed to be a non-negative integer.

Since the return type is an integer, the decimal digits are truncated and only the integer part of the result is returned.
*/

#include<iostream>
using namespace std;

int sqroot(int n)
{
	if(n==0 || n==1)
	return n;

	int ans;
	int s=1, e=n;
	while(s<=e)
	{
		int mid = (e+s)/2;
		if(mid*mid ==n)
		return mid;

		else if(mid*mid<n)
		{
			s = mid + 1;
			ans = mid;
		}
		else{
			e =mid-1;
		}
	}
	return ans;
}

int main()
{
	int n;
	cin>>n;
	int ans = sqroot(n);
	cout<<ans;
}
