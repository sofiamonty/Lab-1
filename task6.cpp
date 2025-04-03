#include <iostream>
using namespace std;

int main(){
    int num;

    cout<<"Please type in a number: ";
    cin>>num;

    cout<<"Your number in reverse is: ";

    for(int i=num; i>0; i = i/10){
        cout<<i%10;
    }

    return 0;
}