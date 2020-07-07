/*
Given an array of non-negative integers, you are initially positioned at the first index of the array.

Each element in the array represents your maximum jump length at that position.

Your goal is to reach the last index in the minimum number of jumps.

Input Format:

First Line contains an integer N, the length of array.

Second Line contains N space-separated integers.

Output Format:

Contains number of steps to reach last index.
*/

#include<iostream>
#include<limits.h>
#include <bits/stdc++.h>
using namespace std;

int max(int x, int y)
 {
  return (x > y)? x: y;
 }
int minJumps(int arr[], int n)
{
    if (n <= 1)
        return 0;
    if (arr[0] == 0)
        return -1;
    int maxReach = arr[0];
    int step = arr[0];
    int jump =1;
    int i=1;
    for (i = 1; i < n; i++)
    {
        if (i == n-1)
            return jump;
        maxReach = max(maxReach, i+arr[i]);
        step--;
        if (step == 0)
        {
            jump++;
            if(i >= maxReach)
                return -1;
            step = maxReach - i;
        }
    }

    return -1;
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
    cout <<minJumps(arr, N);
    return 0;
}
