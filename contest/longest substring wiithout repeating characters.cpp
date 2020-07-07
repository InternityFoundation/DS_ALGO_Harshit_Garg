/*
Given a string, find the length of the longest substring without repeating characters

Input Format:

Contains a String s.

Output Format:

Contains the length of the longest substring without repeating characters.
*/

#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

#define NO_OF_CHARS 256

int substr_without_rpt(string str)
{
    int n = str.size();

    int res = 0; // result
    vector<int> lastIndex(NO_OF_CHARS, -1);
    int i = 0;
    for (int j = 0; j < n; j++) {
        i = max(i, lastIndex[str[j]] + 1);
        res = max(res, j - i + 1);
        lastIndex[str[j]] = j;
    }
    return res;
}

int main()
{
    string str;
    cin>>str;
    int len = substr_without_rpt(str);
    cout<< len;
    return 0;
}
