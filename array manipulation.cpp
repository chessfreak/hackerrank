
#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the arrayManipulation function below.
long arrayManipulation(int n, vector<vector<int>> queries) {
    long max=0,i,j;
    long arr[n+1]={0};
    for(int i=0;i<queries.size();i++)
    {
        for(j=queries[i][0];j<=queries[i][1];j++)
        {
            arr[j]=arr[j]+queries[i][2];
            if(arr[j]>max)
                max=arr[j];

        }

    }

    return max;
}

}
