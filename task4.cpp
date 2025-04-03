#define SQUARE(x) ((x)*(x))

#include <iostream>
using namespace std;

int main(){
    int num;

    cout<<"Please type in a number: ";
    cin>>num;

    cout<<"The square of the number you typed in is: "<<SQUARE(num)<<endl;

    return 0;

}