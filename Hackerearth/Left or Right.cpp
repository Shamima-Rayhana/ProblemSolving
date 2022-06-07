#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,q;
    cin>>n>>q;
    long long int A[n+1];
    for(long long int i=0; i<n; i++)
    {
        cin>>A[i];
    }
    long long int start,destination,cnt,check,X;
    char direction;
    while(q--)
    {
        cnt=0;
        X=0;
        check=0;
        cin>>start>>destination>>direction;
        for(long long int i=0; i<n; i++)
        {
            if(A[i]==destination)
            {
                X++;

            }
        }
        //cout<<X<<endl;

        if(start>n-1 || X==0)
        {
            cnt=-1;
            check=1;
            //cout<<-1<<endl;
        }
        else if(X!=0 && A[start]==destination)
        {
            //cout<<"SHamima"<<endl;
            cnt=0;
            check=1;
        }

        //L

        else if(X!=0 && direction=='L')
        {
            //cout<<"Rayhana"<<endl;
            long long int i;
            for(i=(start-1+n)%n; i>=0; i--)
            {
                cnt++;
                if(A[i]==destination)
                {
                    check=1;
                    break;
                }
            }
            i++;

            if(i==0 && check==0)
            {

                for(long long int i=n-1; i>=start+1; i--)
                {
                    cnt++;
                    if(A[i]==destination)
                    {
                        check=1;
                        break;
                    }
                }
            }

        }

        //R

        else if(X!=0 && direction=='R')
        {
            //cout<<"Rumi"<<endl;
            //cout<<"C "<<check<<endl;
            long long int i;
            for(i=(start+1)%n; i<=(start-1); i++)
            {
                //cout<<"R"<<endl;
                cnt++;
                if(A[i]==destination)
                {
                    check=1;
                    break;
                }
            }
            i--;
            //cout<<"C "<<check<<endl;

            if(i==0 && check==0)
            {
                //cout<<"RR"<<endl;

                for(int j=0; j<=start-1; j++)
                {
                    cnt++;
                    if(A[j]==destination)
                    {
                        check=1;
                        break;
                    }
                }
            }


        }
        if(check==1)
            cout<<cnt<<endl;
        else
            cout<<-1<<endl;
    }



    return 0;
}
