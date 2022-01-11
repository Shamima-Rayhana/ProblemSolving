#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[100],Max=0;
    int num_of_elements;
    cout<<"enter the num of elements:"<<endl;
    cin>>num_of_elements;
    cout<<"enter the sequence of elements: "<<endl;

    for(int i=0;i<num_of_elements;i++)
    {
        cin>>a[i];
        if(a[i]>Max)
        {
            Max=a[i];
        }
    }
    cout<<"the maximum element is ";
    cout<<Max;
    return 0;
}
