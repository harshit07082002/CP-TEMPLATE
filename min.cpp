#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"Enter 1st number: "<<endl;
    cin>>a;
    cout<<"Enter 2nd number: "<<endl;
    cin>>b;
    if(a<b){
        cout<<a<<" is minimum number \n";
    }
    else if(a>b){
        cout<<b<<" is minimum number \n";
    }
    else{
        cout<<a<<" and "<<b<<" both are equal number\n";
    }
    return 0;
}