#include<iostream>
using namespace std;
                  
int main(){
    //********** for loop***********************

    //print counting using for loop till number n

    int n ;
    cout<<"enter number of n :-"<<endl;
    cin>>n;
     
    int  i = 1; // initilization 
    for( ;  ;){            // this for dont know when to stop
        if(i<=n){
        cout<<i<<endl;
        }
        else{
            break;         // this will break the for loop 
        }
        i++;      
    }
    return 0;
}