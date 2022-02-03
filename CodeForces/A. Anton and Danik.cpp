#include<bits/stdc++.h>

using namespace std;

int main()
{
    int no_game,Anton=0,Danik=0;
    string result;
    cin>>no_game>>result;
    for(int i=0; i<no_game; i++)
    {
        if(result[i]=='A')
            Anton++;
        else if(result[i]=='D')
            Danik++;
    }
    if(Anton > Danik)
        cout<<"Anton"<<endl;
    else if(Danik > Anton)
        cout<<"Danik"<<endl;
    else
        cout<<"Friendship"<<endl;
    return 0;
}
