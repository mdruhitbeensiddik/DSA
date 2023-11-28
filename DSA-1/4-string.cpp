#include<bits/stdc++.h>
using namespace std;


int main(){

    string name = "Ruhit";
    cout<<name[0];

    int length = name.size();
    cout<<length;

    cout<<name[length-1];

    name[length-1]="z";
    cout<<name[length-1];


    return 0;
}