#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,a,b;
        cin>>x>>y>>a>>b;
        if(x==a)
        {
            if(abs(y-b)==2 ||abs(y-b)==4)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
        else if(y==b)
        {
            if(abs(x-a)==2 ||abs(x-a)==4)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
        else
        {
            if((x==1 && y==1)||(a==1 && b==1))
            {
                if((x==2 && y==2)||(a==2 && b==2))
                {
                    cout<<"No"<<endl;
                    continue;
                }
            }
            if((x==7 && y==7)||(a==7 && b==7))
            {
                if((x==8 && y==8)||(a==8 && b==8))
                {
                    cout<<"No"<<endl;
                    continue;
                }
            }
            if((x==1 && y==8)||(a==1 && b==8))
            {
                if((x==2 && y==7)||(a==2 && b==7))
                {
                    cout<<"No"<<endl;
                    continue;
                }
            }
            if((x==8 && y==1)||(a==8 && b==1))
            {
                if((x==7 && y==2)||(a==7 && b==2))
                {
                    cout<<"No"<<endl;
                    continue;
                }
            }
            if((abs(x-a)==1 && abs(y-b)==1) || (abs(x-a)==3 && abs(y-b)==1)||(abs(x-a)==4 && abs(y-b)==2) || (abs(x-a)==1 && abs(y-b)==3) || (abs(x-a)==2 && abs(y-b)==4) || (abs(x-a)==3 && abs(y-b)==3))
            {
                cout<<"Yes"<<endl;
                continue;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
    }
    return 0;
}