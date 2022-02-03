#include<bits/stdc++.h>

using namespace std;

int main()
{
    char s[1001];
    int cnt=0;
    gets(s);
    int l=strlen(s);
    sort(s,s+l);
    for(int i=0;i<l;i++)
    {
        if(s[i]>96 && s[i]<123)
        {
            cnt++;
            if(s[i]==s[i+1])
                cnt--;
        }

    }
    cout<<cnt<<endl;
    return 0;
}
