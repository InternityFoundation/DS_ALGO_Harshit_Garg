/*
Given n Positive integers A1,A2,A3 ....
An, where each integer represents a point at coordinate (i, Ai).
n vertical lines are drawn such that the two endpoints of line i is at (i, Ai) and (i, 0). Find two lines, which together with x-axis forms a container,
such that the container contains the most water.
*/
#include<iostream>
#include<vector>
using namespace std;


int maxArea(vector<int> &height) {
        int res = 0;
        int left = 0, right = height.size() - 1;
        while (left < right) {
            res = max(res, (right - left) * min(height[left], height[right]));
            if (height[left] <= height[right])
                left++;
            else
                right--;
        }
        return res;
    }

int main()
{
	int n;
	cin>>n;
	int arr[n];
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		v.push_back(arr[i]);
	}
	int ans= maxArea(v);
	cout<<ans;
}
