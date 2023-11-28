#include<iostream>
using namespace std;
int main()
{   char button;
    cout<<"take a latter: ";
    cin>>button;

    switch (button)
    {
        case 'a':
        cout<<"its a";
        break;

        case 'b':
        cout<<"its b";
        break;

        case 'c':
        cout<<"its c";
        break;

        case 'd':
        cout<<"its d";
        break;
    
    default:
    cout<<"i'm still learning";
        break;
    }

    return 0;
}