#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Row Number: ";
    cin>>n;
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        int count =1;
        for(int j=1; j<=i; j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    return 0;
}