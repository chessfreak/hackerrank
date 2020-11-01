#include <bits/stdc++.h>

using namespace std;

// Complete the pangrams function below.
string pangrams(string s) {
    int counter[26]={0};
    int temp;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            temp=s[i]-65;
            counter[temp]=1;
        }
        else if(s[i]>=97 && s[i]<=122)
        {
            temp=s[i]-97;
            counter[temp]=1;

        }
    }
    int flag=0;
    for(int i=0;i<26;i++)
    {
        if(counter[i]==0)
        {
            flag=1;
            break;
        }
    }

    if(flag==1)
    {
        return ("not pangram");
    }
    else
    {
        return ("pangram");
    }




}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
