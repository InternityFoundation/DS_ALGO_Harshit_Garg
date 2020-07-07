/*
A message containing letters from A-Z is being encoded to numbers using the following mapping:

'A' -> 1 'B' -> 2 ... 'Z' -> 26

Given a non-empty string containing only digits, determine the total number of ways to decode it.
*/

#include<iostream>
using namespace std;

int number_of_ways(string str,int n)
{
	if(n==0|| n==1)
		return 1;
	if(str[0]=='0')
		return 0;
	int ans =0;
	if(str[n-1]>0)
		ans = number_of_ways(str, n-1);
	if(str[n-2] =='1' || str[n-2]=='2')
		ans = ans+ number_of_ways(str, n-2);
	return ans;
}

int main()
{
	string str;
	cin>>str;
	cout<<number_of_ways(str, str.length());
}
