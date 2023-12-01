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

    //pattern-8
    void pattern8(int n){
     for(int i=0; i<n; i++ ){
        //space
        for(int j=0; j<i; j++){
            cout<<" ";    
        }
        for(int star=0; star<2*n-(2*i+1); star++){
                cout<<"*";
            }
            //space
        for(int j=0; j<i; j++){
            cout<<" ";    
        }
        cout<<endl;
     }   
    }

    //pattern-10 
    void pattern10(int n){
        for(int i=1; i<=2*n-1; i++){
            int star = i;
            if(i>n) {
                star = 2*n-i;
            }
            for(int j=1; j<=star; j++){
                cout<<"*";
            }
            cout<<endl;
        }
    }

    //pattern-11 
    void pattern11(int n){
        
        for(int i=0; i<n; i++){
         int start = 1;   
            if(i%2==0) start =1;
            else start = 0;
            for(int j=0; j<=i; j++){
                cout<<start;
                start=1-start;
            }
            cout<<endl;
        }
    }   


    //pattern-12 
    void pattern12(int n){
        int space = 2 * (n-1);
        for(int i=1; i<=n; i++){
            //number
            for(int j=1; j<=i; j++){
                cout<<j;
            }
            //space
            for(int j = 1; j<=space; j++){
                cout<<" ";
            }

            //number
            for(int j=i; j>=1; j--){
                cout<<j;
                
            }
            cout<<endl;
            space-=2;
        }
    }  


    //pattern-13 
    void pattern13(int n){
        int count = 1;
        for(int i=1; i<=n; i++){
             
            for(int j=1; j<=i; j++){

                cout<<count<<" ";
                count++;
            }
            cout<<endl;
        }
    }  
    //pattern-14 
    void pattern14(int n){
        for(int i=0; i<n; i++){
           for(char ch='A'; ch<='A'+i; ch++){
            cout<<ch<<" ";
           }
            cout<<endl;
        }
    }  
    //pattern-15 
    void pattern15(int n){
        for(int i=n-1; i>=0; i--){
           for(char ch='A'; ch<='A'+i; ch++){
            cout<<ch<<" ";
           }
            cout<<endl;
        }
    } 

    //pattern-16 
    void pattern16(int n){
        for(int i=0; i<n; i++){
            char ch = 'A'+i;
           for(int j=0; j<=i; j++){
            cout<<ch;
           }
            cout<<endl;
        }
    }    

int main(){ 


        int n;
        cin>>n;
     //   pattern1(n);
     //   pattern2(n);
     //   pattern3(n);
    //    pattern4(n);
      //  pattern5(n);
      //  pattern6(n);
      //  pattern7(n);
      //  pattern8(n);
      //  pattern7(n);//9
     //   pattern8(n);//9
      //  pattern10(n);
      //  pattern11(n);
       // pattern12(n);
       // pattern13(n);
       // pattern14(n);
       // pattern15(n);
        pattern16(n);
     
     

    return 0;
}