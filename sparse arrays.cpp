#include <bits/stdc++.h>

using namespace std;

vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
    int count,k=0;
    vector<int> result;
    for(int i=0;i<queries.size();i++)
    {
        int count=0;
        for(int j=0;j<strings.size();j++)
        {
            if(queries[i]==strings[j])
            {
                count++;
            }
        }
        result.push_back(count);
    }

return(result);
