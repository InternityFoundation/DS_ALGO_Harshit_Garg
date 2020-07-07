/*
Given two sequences (or strings) s1 and s2, return the length of longest subsequence present in both of them.

A subsequence is a sequence that appears in the same relative order, but not necessarily contiguous.
For example, “abc”, “abg”, “bdf”, “aeg”, ‘”acefg”, .. etc are subsequences of “abcdefg” but "acb" is not.

A common subsequence of two strings is a subsequence that is common to both strings.

If there is no common subsequence, return 0.
*/
#include<iostream>
#include<algorithm>
using namespace std;

int longest( string s1, string s2, int len1, int len2 )
{
int dp[len1 + 1][len2 + 1];
    int i, j;
    for (i = 0; i <= len1; i++)
    {
        for (j = 0; j <= len2; j++)
        {
        if (i == 0 || j == 0)
            dp[i][j] = 0;

        else if (s1[i - 1] == s2[j - 1])
            dp[i][j] = dp[i - 1][j - 1] + 1;

        else
            dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    return dp[len1][len2];
}

int main()
{
	string s1, s2;
	cin>>s1>>s2;
	int len1= s1.length();
	int len2= s2.length();
	cout<<longest(s1,s2,len1, len2);
}
