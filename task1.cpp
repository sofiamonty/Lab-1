#include <iostream> //Header inclusions
#include <string>

//Defining MathOperations namespace
namespace MathOperations{
    int add(int a, int b){
        return a + b;
    }
}

//Defining TextOperations namespace
namespace TextOperations{
    std::string concat(std::string str1, std::string str2){
        return str1+ " " + str2;
    }
}

//User input is asked for in the main function to perform the tasks
int main(){
    int x, y;
    std::string s1, s2;

    std::cout<<"Please type in one number: ";
    std::cin>>x;
    std::cout<<"Now, please type in a second number: ";
    std::cin>>y;

    std::cout<<"The sum of "<<x<<" and "<<y<<" is: "<<MathOperations::add(x,y)<<std::endl;
    
    std::cout<<"\nNow, please type in a word: ";
    std::cin>>s1;
    std::cout<<"And one last word, please: ";
    std::cin>>s2;
   
    std::cout<<"Putting the two typed words together gives: "<<TextOperations::concat(s1, s2);

    return 0;
}