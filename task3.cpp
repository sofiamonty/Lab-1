#define STOP 50 //Macro for number 50

#include <iostream>
#include <cstdint> //Since uint8_t is used below, this header is included
using namespace std;

//Main function is as per PDF sheet, with integer modification
int main(){
    for (uint8_t i=2; i<=STOP; i +=2){
        cout<<static_cast<int>(i)<<" "; //Static_cast used so that i prints as an integer
    }
    return 0;
}