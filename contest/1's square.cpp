/*Given a 2 dimenstional matrix whose elements are 0 and 1 only. Find the largest square that contain only 1's and return the area of that square.
*/


#include<bits/stdc++.h>
using namespace std;

int find_one_square(vector<vector<int> >& matrix) {
        if(matrix.empty()) return 0;

        int len = 0,
		n = matrix.size(),
		 m = matrix[0].size();
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(matrix[i][j] && i>0 && j>0)
                    matrix[i][j] += min(matrix[i-1][j-1], min(matrix[i][j-1], matrix[i-1][j]));
                len = max(len, (int) matrix[i][j]);
            }
        }
        return len*len;
    }

int main(){
    int r;
    int c;
    cin>>r>>c;

    vector<vector<int> > vec;
    int num;
    for (int i = 0; i < r; i++) {
        vector<int> v1;

        for (int j = 0; j < c; j++) {
                cin>>num;
            v1.push_back(num);

        }
        vec.push_back(v1);

    }
    cout<<find_one_square(vec);
}

