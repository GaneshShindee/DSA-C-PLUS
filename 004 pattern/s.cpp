#include<iostream>
using namespace std;
                  
int main(){
    //********************pattterns ***************************
    
    /*
    a
    bc
    cde
    defg
    */

    int n;
    cin>>n;

    int i =1;
    while(i<=n){
        int j = 1;
        while(j<=i){
            char ab = i+'a'-1+j-1;
            cout<<ab;
            ab=ab+1;
            j++;
        }
        cout<<endl;
        i++;
    }

    cout<<endl<<endl;


    int row =1;

    while(row<=n){
        
        int col = 1;
        int value = row;
        while(col<=row){
            cout<<char(value+'a'-1);
            value++;
            col++;
        }
        cout<<endl;
        row++;
    }

    return 0;
}