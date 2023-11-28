#include<iostream>
using namespace std;

int main()
{   
    int a,b;
    cout<<"input two number: ";
    cin>>a>>b;

    char op;
    cout<<"what you want: ";
    cin>>op;

    switch (op)
    {
    case '+' :
    cout<<a+b<<endl;
        break;

        case '-' :
    cout<<a-b<<endl;
        break;

        case '*' :
    cout<<a*b<<endl;
        break;

        case '/+' :
    cout<<a/b<<endl;
        break;
    
    default:
    cout<<"sorry"<<endl;
        break;
    }

    return 0;
}