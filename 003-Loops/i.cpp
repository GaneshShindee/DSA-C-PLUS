#include<iostream>
using namespace std;
                  
int main(){


    //**************addition of first 5 numbers******************


    // int n=5;
    // int i=0;
    // int sum =0;
    // while (i<=n)
    // {
    //     sum=sum+i;
    //     i++;
        
    // }
    // cout<<sum<<endl;


    //**************addition of first n numbers******************
    int n;

    cout<<"Enter Number:-";
    cin>>n;


    int i=0;
    int sum =0;
    while (i<=n)
    {
        sum=sum+i;
        i++;
        
    }
    cout<<"Addition of 1 to n numbers is :- "<<sum<<endl;
    
    return 0;
}