/* You are given coins of different denominations and a total amount of money amount.
Write a function to compute the fewest number of coins that you need to make up that amount.
If that amount of money cannot be made up by any combination of the coins, return -1.
*/
#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
int mincoin_helper(vector<int>& coins, int amt, vector<int>& res){
        if(amt < 0)
		return -1;
        if(amt == 0)
		return 0;
        if(res[amt])
		return res[amt];
       int temp = INT_MAX;
        for(int i = 0; i < coins.size(); i++){
            int k = mincoin_helper(coins, amt - coins[i], res);
            if(k == -1) continue;
            temp = min(temp, 1 + k);
        }
       res[amt] = (temp == INT_MAX) ? -1 : temp;
        return res[amt];
    }
int mincoin(vector<int>& coins, int amt) {
        if(amt == 0)
		return 0;
       vector<int> res(amt + 1, 0);
    return mincoin_helper(coins, amt, res);
    }


int main()
{
	int N, amt;
	cin>>N>>amt;
	vector<int> v;
	int x;
	for(int i=0;i<N;i++)
	{
		cin>>x;
		v.push_back(x);
	}
	cout<<mincoin(v, amt);
}
