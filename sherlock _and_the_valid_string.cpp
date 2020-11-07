string isValid(string s) {

    map<char, int> counted;
    int l = s.length();
    for(int i=0; i<l; i++) {
        counted[s[i]]++;
    }

    map<char,int>::iterator itr;
    itr=counted.begin();
    int a=itr->second;
    if(l>1)
    {


    itr++;
    int b=itr->second;
    int maxim;
    maxim=max(a,b);
    int flag=0;

    for(itr=counted.begin();itr!=counted.end();itr++)
    {
        if(itr->second!=maxim)
        {
            flag++;
            if(flag>1)
           {
               break;
           }

        }

    }
    if(flag<=1)
    {
        return ("YES");
    }
    else
    {
        return("NO");
    }


    }
    return ("YES");

}
