#include<iostream>
using namespace std;
                  
int main(){
    int a= 24;

    if (a>20)
    {
        cout<<"love"<<endl;  //this will print because it check what will come first then it will break the lefted if statement
    }
    else if (a==24)
    {
        cout<<"lovely"<<endl;
    }
    else{
        cout<<"Babber"<<endl;
    }
    cout<<a;
    return 0;
}