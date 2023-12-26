#include<iostream>
using namespace std;
                  
int main(){

    // *********comparision betn a and b***************
    int a,b;
    cout<<"Enter first Number:-"<<endl;
    cin>>a;
    cout<<"Enter Second Number:-"<<endl;
    cin>>b;

    if (a>b){
        cout<<a<<" is greater than " <<b<<endl;
    }
    else if(a<b){
        cout<<"A is lesser tha b"<<endl;
    }
    else{
        cout<<"A is equal to B"<<endl;
    }
    return 0;
}