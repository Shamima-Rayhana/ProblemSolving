/*
    Name: Shamima Rayhana Rumi
    Topic: Bit stuffing
    Language: C++
    Date: 01-08-2022
*/

#include<bits/stdc++.h>


using  namespace  std;


void byteStuffing(int length, string str, char flag, char ESC)
{
    string stuffData;
    for(int i=0;i<length;i++)
    {
        if(str[i]==flag)
        {
            stuffData+=ESC;
            stuffData+=str[i];
        }
        else if(str[i]==ESC)
        {
            stuffData+=ESC;
            stuffData+=str[i];
        }
        else{
            stuffData+=str[i];
        }
    }
    cout<<"\n\nThe byte stuffed data is : "<<endl;
    cout<<stuffData<<endl;

    string unstuffData;
    for(int i=0;i<stuffData.size();i++)
    {
        if(stuffData[i]==ESC)i++;

        unstuffData.push_back(stuffData[i]);
        //cout<<"RUMI"<<endl;


    }

    cout<<"\n\nThe Byte unstuffed data is : "<<endl;
    cout<<unstuffData<<endl;


}

int main()
{
    int n;
    cout<<"Enter Flag and ESC character respectively : "<<endl;
    char flag, ESC;
    cin>>flag>>ESC;
    cout<<"Enter the data length : "<<endl;
    cin>>n;
    string s;
    cout<<"Enter the data : "<<endl;
    cin>>s;

    byteStuffing(n, s, flag, ESC);
    return 0;
}
