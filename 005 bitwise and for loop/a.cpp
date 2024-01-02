#include<iostream>
using namespace std;
                  
int main(){

    //**************** bitwise operator*****************
    int a =4;
    int b = 6;

    cout<< "a&b "<<(a & b) << endl;
    cout<< "a|b "<<(a | b) << endl;
    cout<< "a^b "<<(a ^ b )<< endl;
    cout<< "~b "<< (~b) <<   endl;
    cout<< "~a "<< (~a) <<endl;
    

    //*************** left shift(<<) and right (>>)shift

    cout<<(17>>1)<<endl;       // divide by 1 one time by  2 for right shift
    cout<<(17>>2)<<endl;       // divide by 2  time by  2 for right shift
    cout<<(19<<1)<<endl;       // multiply by  one time by 2 for left shift
    cout<<(21<<2)<<endl;       // multiply by  two time by 2 for left shift


    //************* Increment and Decrement *****************

    int sum = 5;

    // below is same 
    sum =sum +1;
    sum++;

    //below is same 
    sum = sum -1;
    sum--;


    //************pre - incremnet and post - increment
    int i = 7;
    cout<<(i++)<<endl; 
    // print 7 but incremented value so int i = 8;
    cout<<(++i)<<endl; 
    // print should 8 but above value is incremented by 1 so print will be 9
    cout<<(i--)<<endl; 
    // print is 9 and now int i = 8 now i value is 8
    cout<<(--i)<<endl; 
    //print should be 6 but now i should be  7





    return 0;
}