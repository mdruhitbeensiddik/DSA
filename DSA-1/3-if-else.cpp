#include<bits/stdc++.h>
using namespace std;

////////part-1
// int main(){
//     int n;
//     cin>>n;

//     if(n>=18){
//         cout<<"Yes,You are adult";
//     }
//     else{
//         cout<<"No, you are not";
//     }
//     return 0;
// }


////////part-2
// int main(){
//     int n;
//     cin>>n;

//     if(n>=18){
//         cout<<"Yes,You are adult";
//     }
//     else if(n<=10){
//         cout<<"No, you are not in 10";
//     }
//     else{
//         cout<<"11 to 17";
//     }
//     return 0;
// }




//part-3
// 1. If age < 18,
// print->not eligible for job

// 2. If age >= 18 and age <= 54,
// print->eligible for job

// 3.If age >= 55 and age <=57,
// print-> eligible for job,but retirement soon.

// 4.If age > 57,
// print-> retirement


// int main(){

//     int age;
//     cin>>age;

//     if(age < 18){
//         cout<<"not eligible for job";
//     }
//     else if(age >= 18 && age <= 54){
//         cout<<"eligible for job";
//     }
//     else if(age >= 55 && age <= 57){
//         cout<<"eligible for job,but retirement soon";
//     }
        // else{
        //     cout<<"retirement";
        // }

//     return 0;
// }




//better code-1

// int main(){

//     int age;
//     cin>>age;

//     if(age < 18){
//         cout<<"not eligible for job";
//     }
//     else if(age <= 54){
//         cout<<"eligible for job";
//     }
//     else if(age <= 57){
//         cout<<"eligible for job,but retirement soon";
//     }
//     else{
//         cout<<"retirement";
//     }

//     return 0;
// }


// better code - 2

int main(){

    int age;
    cin>>age;

    if(age < 18){
        cout<<"not eligible for job";
    }
    else if(age <= 57){
        cout<<"eligible for job";
        if(age >= 55){
        cout<<",but retirement soon";
    }
    }
    else{
        cout<<"retirement";
    }

    return 0;
}