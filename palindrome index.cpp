#include<bits/stdc++.h>

using namespace std;
int main() {

    int flag=0;
    string s="abac";
    int n=s.length();
    string copy;
    for(int i=0;i<n/2;i++)
    {
        if(s[i]==s[n-1-i])
        {

        }
        else
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<-1;
    }

    for(int i=0;i<n;i++)
    {
        copy=s;
        //cout<<copy<<" ";
        copy.erase(i,1);
        //cout<<i<<" ";
        //cout<<copy<<" ";
        int k=n-1;
        flag=0;
        string copy2=copy;
        reverse(copy2.begin(),copy2.end());
        //if(copy2==copy)
        {
          //  cout<<copy<<" "<<i;

        }
        if( equal(copy2.begin(), copy2.begin() + copy2.size()/2, copy2.rbegin()) )
            cout <<i;


        //for(int j=0;j<k/2;j++)
        {
            //if(copy[j]==copy[k-1-j])
            {

            }
            //else
            {
                //flag=1;
                //break;
            }

        }
        //cout<<flag<<endl;

        if(flag==0)
        {
            //cout<<copy<<" "<<i<<endl;
        }

    }
    cout<<-1;

    }


