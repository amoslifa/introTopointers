#include <iostream>
using namespace std;
int main(){

    int firstValue ;
    int secondValue;

    int *pPointer =nullptr;
//assign pointer with address of FirstValue
    pPointer=&firstValue;
    *pPointer = 10; // indirection

    //assign pointer with address of Secondvalue
    pPointer=&secondValue;
    *pPointer=20;//indirection
     cout<<"firstValue is "<<firstValue<<'\n';
    cout<<"secondValue is "<<secondValue<<'\n';

    return 0;
}