#include<iostream>
using namespace std;
int main()
{   
    int a,b,c;
    cout<<"Take value a, b & c :";
    cin>>a>>b>>c;

    if(a>b)
    {
        if(a>c)
        {
            cout<< a <<" is larger than all"<<endl;
        }
        else{
            cout<< c <<" is larger than all"<<endl;
        }
    }
    else{
        if(b>c)
        {
            cout<< b <<" is larger than all"<<endl;
        }
        else{
            cout<< c <<" is larger than all"<<endl;
        }
    }

    return 0;
}