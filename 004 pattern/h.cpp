#include<iostream>
using namespace std;
                  
int main(){
    //********************pattterns ***************************
    
    //practice
    /*
    1
    23
    456
    */

    int n;
    cin>>n;
    
    int count = 1;
    int i =1;
    while(i<=n){
        int j = 1;
        while(j<=i){
            cout<<count;
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
    


    
    return 0;
}