#include<iostream>
using namespace std;
                  
int main(){
    //********************pattterns ***************************
    
    /*
    1111
     222
      33
       4
    */


    int n;
    cin>>n;

    int i =0;
    while(i<n){

         //spaces print
        int space = 1;
        while(space<=i){
            if (i == n) {
              break;
              }
            cout<<"_";
            space++;
        }

        int j = n-i;
        while(j){
            cout<<i+1;
            j--;
        }




        cout<<endl;
        i++;

    }

    return 0;
}