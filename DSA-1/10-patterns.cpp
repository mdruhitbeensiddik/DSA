#include<bits/stdc++.h>
using namespace std;

//pattern-1
    void pattern1(int n){
     for(int i=1; i<=n; i++ ){
        for(int j=1; j<=n; j++){
            cout<<"* ";
        }
        cout<<endl;
     }   
    }
//pattern-2    
    void pattern2(int n){
     for(int i=1; i<=n; i++ ){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
     }   
    }

    //pattern-3    
    void pattern3(int n){
     for(int i=1; i<=n; i++ ){
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
     }   
    }

    //pattern-4    
    void pattern4(int n){
        int count = 1;
     for(int i=1; i<=n; i++ ){
        for(int j=1; j<=i; j++){
            cout<<count<<" ";
        }
        count++;
        cout<<endl;
     }   
    }

    //pattern-5    
    void pattern5(int n){
     for(int i=1; i<=n; i++ ){
        for(int j=n; j>=i; j--){
            cout<<"* ";
        }
        cout<<endl;
     }   
    }

    //pattern-6    
    void pattern6(int n){
     for(int i=n; i>=1; i-- ){
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
     }   
    }

    //pattern-7    
    void pattern7(int n){
     for(int i=1; i<=n; i++ ){
        //space
        for(int j=1; j<=n-i; j++){
            cout<<" ";    
        }
        for(int star=1; star<=2*i-1; star++){
                cout<<"*";
            }
            //space
        for(int j=1; j<=n-i; j++){
            cout<<" ";    
        }
        cout<<endl;
     }   
    }

    //pattern-8   unsolve 
    void pattern8(int n){
     for(int i=1; i<=n; i++ ){
        //space
        for(int j=1; j<=i-1; j++){
            cout<<" ";    
        }
        for(int star=1; star<=2*n-i; star++){
                cout<<"*";
            }
            //space
        for(int j=1; j<=i-1; j++){
            cout<<" ";    
        }
        cout<<endl;
     }   
    }
int main(){ 


        int n;
        cin>>n;
      //  pattern1(n);
      //  pattern2(n);
      //  pattern3(n);
      //  pattern4(n);
       // pattern5(n);
      //  pattern6(n);
      //  pattern7(n);
        pattern8(n);
     
     

    return 0;
}