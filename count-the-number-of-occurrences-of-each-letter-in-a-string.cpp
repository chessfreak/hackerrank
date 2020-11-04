#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str="hello  world";
    map<char, int> counted;
    int l = str.length();
    for(int i=0; i<l; i++) {
        counted[str[i]]++;
    }
    map<char,int>::iterator itr;
    for(itr=counted.begin();itr!=counted.end();itr++)
    {
        cout<<itr->first<<"   "<<itr->second<<endl;

    }
    int i=0;

    //for(const auto kvp : counted)
    {
      //  cout<<i++;
        //cout<< kvp.first << " occurs " << kvp.second << " times\n";
    }
    return 0;

}

