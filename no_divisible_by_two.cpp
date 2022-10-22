#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Number: "<<endl;
    cin>>n;
    if(n%2==0){
        cout<<n<<" is divisible by 2 \n";
    }
    else{
        cout<<n<<" is not divisible by 2 \n";
    }
    return 0;
    
}