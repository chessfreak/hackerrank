#include <bits/stdc++.h>
#include<iostream>
#include<algorithm>

using namespace std;
int main()
{

    std::string::iterator it;
    int temp,check[26]={0},maxim=0;
    string alpha,s="aacdbddbeefa";
    for(it=s.begin();it!=s.end();it++)
    {
        temp=*it-97;
        if(check[temp]!=1)
        {
            alpha.push_back(*it);
            check[temp]=1;

        }


    }


    cout<<alpha;
    for(int i=0;i<alpha.length();i++)
    {

        for(int j=1;j<alpha.length();j++)
        {
            int k=0;
            string temp=s;
            while(k<temp.length())
            {
                if(temp[k]!=alpha[i] && temp[k]!=alpha[j] )
                {
                    temp.erase(k,k);

                }
                k++;
            }
            //checking for alternating characters

             int flag1=0,flag2=0;

            for( i=0;i<temp.length();i++)
            {
                if(i%2 == 0)
                {
                    if(s[i]!=s[0])
                    {
                        flag1=1;
                        break;
                    }
                }
                else
                {
                    if(s[i]!=s[1])
                    {
                        flag2=1;
                        break;
                    }

                }

            }
            if(flag1==0 && flag2==0)
            {

                int siz;
                siz=temp.length();
                maxim=max(siz,maxim);
            }


                }


            }


    cout<<maxim;



    return 0;

}
