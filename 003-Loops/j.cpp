#include<iostream>
using namespace std;
                  
int main(){

    // addition of 1 to n even numbers


    int n =5;
    int i=0;
    int sum =0;
    while (i<=n)
    {
        sum=sum+i;
        i=i+2;
    }
    cout<<sum;

    
    return 0;
}