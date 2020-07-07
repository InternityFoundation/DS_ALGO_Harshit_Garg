/*
There are N gas stations along a circular route, where the amount of gas at i th station is gas[i].

You have a car with an unlimited gas tank and it costs cost[i] of gas to travel from station i to its next station (i+1).
You begin the journey with an empty tank at one of the gas stations.

Return the starting gas station's index if you can travel around the circuit once in the clockwise direction, otherwise return -1.
*/

#include<iostream>
#include<vector>
using namespace std;
int gas_st(vector<int> &gas, vector<int> &cost) {
            int sumGas = 0;
            int sumCost = 0;
            int start = 0;
            int tank = 0;
            for (int i = 0; i < gas.size(); i++) {
                sumGas += gas[i];
                sumCost += cost[i];
                tank += gas[i] - cost[i];
                if (tank < 0) {
                    start = i + 1;
                    tank = 0;
                }
            }
            if (sumGas < sumCost) {
                return -1;
            } else {
                return start;
            }
}

int main()
{
	int N;
	cin>>N;
	int arr1[N];
	int arr2[N];
	for(int i=0;i<N;i++)
	{
		cin>>arr1[i];
	}
	for(int i=0;i<N;i++)
	{
		cin>>arr2[i];
	}
	vector<int> v1;
	vector<int>v2;
	v1.assign(arr1, arr1+N);
	v2.assign(arr2, arr2+N);
	int ans = gas_st(v1, v2);
	cout<<ans;

}
