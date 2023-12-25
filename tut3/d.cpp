#include<iostream>
using namespace std;
                  
int main(){
    int a= 2;
    int b= a+1;

    if ((a=3)==b)
    {
        cout<<"print ths"<<endl;
        cout<<a;
        /* code */
    }
    else{
        cout<<"print this"<<endl;
        cout<<a+1;
    }
    
    return 0;
}