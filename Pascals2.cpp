#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>ans;
        rowIndex++;
        ans.push_back(1);
        long long v = 1;
        for(int i=1; i<rowIndex; i++){
            v = v * (rowIndex-i);
            v = v/i;
            ans.push_back(v);
        }

        return ans;
    }
};