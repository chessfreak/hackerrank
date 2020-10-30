#include <bits/stdc++.h>

using namespace std;

// Complete the caesarCipher function below.


int main()
{


    int i=0;
    string s="abcdef";
    int k=27;
    k=k%26;
    while(i<s.length())
    {
        if(s[i]>=65 && s[i]<=90)
        {
            if(s[i]+k>90)
            {
                s[i]=s[i]+k-26;
            }
            else
            {
                s[i]=s[i]+k;
            }
        }
        else if(s[i]>=97 && s[i]<=122)
        {
            if(s[i]+k>122)
            {
                s[i]=s[i]+k-26;
            }
            else
            {
                s[i]=s[i]+k;
            }

        }
        else
        {
            //let it be
        }
        i++;
    }
    cout<<s;
    return 0;


}
