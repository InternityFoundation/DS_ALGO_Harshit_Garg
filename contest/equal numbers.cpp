/* Given a binary array of length n, find the maximum length of a contiguous subarray with equal number of 0 and 1.
*/

#include <bits/stdc++.h>
using namespace std;
int arrayfind(int arr[], int n)
{
    int sum = 0;
    int m = -1, si;
    for (int i = 0; i < n - 1; i++) {
        sum = (arr[i] == 0) ? -1 : 1;
        for (int j = i + 1; j < n; j++) {
            (arr[j] == 0) ? (sum += -1) : (sum += 1);
            if (sum == 0 && m < j - i + 1) {
                m = j - i + 1;
                si = i;
            }
        }
    }
    return m;
}

int main()
{
    int N;
    cin>>N;
    int arr[N] ;
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }

    cout<<arrayfind(arr, N);
    return 0;
}
