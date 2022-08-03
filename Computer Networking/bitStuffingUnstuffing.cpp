/*
    Name: Shamima Rayhana Rumi
    Topic: Bit stuffing
    Language: C++
    Date: 01-08-2022
*/

#include<bits/stdc++.h>


using  namespace  std;


void bitStuffing(string s)
{
    int i=0;
    string stuffData;
    while(i<s.size())
    {
        if(s[i]=='1')
        {
            int cnt=0;
            while(cnt<5 && i<s.size() && s[i]=='1')
            {
                stuffData+='1';
                cnt++;
                i++;
            }
            if(cnt==5)stuffData+='0';
        }
        else{
            stuffData+=s[i];
            i++;
        }
    }
    cout<<"\n\nThe Bit stuffed Data is : "<<endl;
    cout<<stuffData<<endl;

    string unstuffData;
    int ct=0;
    for(int i=0;i<stuffData.size();i++)
    {
        if(ct==5)
        {
            i++;
            ct=0;
        }

        if(stuffData[i]=='1')
        {
            ct++;
        }
        else {
            ct=0;
        }
        unstuffData.push_back(stuffData[i]);
    }

    cout<<"\n\nThe Bit unstuffed data is : "<<endl;
    cout<<unstuffData<<endl;


}
int main()
{
    int n;
    cout<<"Enter the Data length : "<<endl;
    cin>>n;

    string s;
    cout<<"Enter the Data  : "<<endl;
    cin>>s;
    bitStuffing(s);
    return 0;
}
