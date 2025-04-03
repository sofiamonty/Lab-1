#include <iostream>
using namespace std;

int main(){
    int x=0, num; //Two int variables: x for summing and num for the user-inputted number

    cout<<"Please type in a number: ";
    cin>>num;

    /*The loop is initialized with the value of num. It will stop when there are
    no more digits greater than 0 to divide by */
    for(int i=num; i>0; i = i/10){
    
        //In the loop, the new x value will be itself summed with the remainder of num/10
        x = x + (i % 10);
   
    }

    cout<<"The sum of the individual digits of your number is: "<<x<<endl;

    return 0;
}