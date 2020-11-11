#include<bits/stdc++.h>
using namespace std;
int main()
{

vector<int> a={1,2,3,4};
int n=a.size();
    cout<<n;
    vector<int> b(n);
    int j=0;

    for(int i=n-1;i>=0;i--)
    {
        b[j]=a[i];
        j++;

    }
    for(int i=0;i<n;i++)
        cout<<b[i]<<" ";
    return (0);

}
