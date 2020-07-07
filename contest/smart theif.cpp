/* The robber is very smart and  planning to rob houses along a street.
Each house has a certain amount of money stashed, the only constraint stopping thief from robbing each of them is
that adjacent houses have security system connected and it will automatically contact the police if two adjacent houses were broken into on the same night.
Given an array of non-negative integers representing the amount of money of each house,
determine the maximum amount of money you can rob tonight without alerting the police.
*/

#include<bits/stdc++.h>
using namespace std;
int find(vector<int> arr, int n)
{
    if (n == 0)
        return 0;

    int x = arr[0];
	int y = max(arr[0], arr[1]);
    if (n == 1)
        return x;
    if (n == 2)
        return y;
    int ans;
    for (int i=2; i<n; i++)
    {
        ans = max(arr[i]+x, y);
        x = y;
        y = ans;
    }

    return ans;
}
int main()
{
	int N,x;
	cin>>N;
	vector<int> v;
	for(int i=0;i<N;i++)
	{
		cin>>x;
		v.push_back(x);
	}
	cout<<find(v,N);

}
