#include<bits/stdc++.h>
using namespace std;

//pass by value

void number(int num){
    cout<<num<<endl;

    num+=5;
    cout<<num<<endl;

    num+=10;
    cout<<num<<endl;

}

int main(){
    int num = 10;
    number(num);
    cout<<num;
}


//pass by reference

void number(int num){
    cout<<num<<endl;

    num+=5;
    cout<<num<<endl;

    num+=10;
    cout<<num<<endl;

}

int main(){
    int num = 10;
    number(num);
    cout<<num;
}