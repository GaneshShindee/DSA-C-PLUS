#include<iostream>
using namespace std;
                  
int main(){
    char user;

    cout<<"enter what you want to check"<<endl;
    cin>> user;

    if ( user >= 'A' && user <='Z')
    {
        cout<<"Capital Number"<<endl;
    }
    else if (user >= 'a' && user <='z')
    {
        cout<<"Small Number"<<endl;
    }
    else if (user >= '0' && user<='9')
    {
        cout<<"It's a digit"<<endl;
    }
    else{
        cout<<"non of these"<<endl;
    }
    
    
    
    return 0;
}