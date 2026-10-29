#include <iostream>
using namespace std;
int    main(){

    int x=3;
    //the value f x is increased before the value pf x is assigned  y
    //hence the value assigned  to y is the value of x after being  increased 
    int y=x++;
    cout<<"X :" <<x<<endl;//x will be 4
    cout<<"y :"<<y<<endl; //y will be 3




    return 0;
}