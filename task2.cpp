#include <iostream> //Enables input-output operations
#include <string> //Includes string class
#include <algorithm> //Used for std::transform
#include <cctype> //For converting characters to upper-case

int main() {
    std::string str; //Defining string to be used
    
    //Ask user input and store into string variable
    std::cout<<"Please type in a word: ";
    std::cin>>str;

    //Using std::transform function to convert all characters to upper-case
    std::transform(str.begin(), str.end(), str.begin(), ::toupper);
    std::cout<<"This is your word in upper-case letters: "<<str<<std::endl;
    
    //count_if checks the number of vowels and stores them in the vowels integer
    int vowels = std::count_if(str.begin(), str.end(), [] (char c){
        return c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    });
    std::cout<<"The number of vowels in your word is: "<<vowels<<std::endl;
    
    //std::reverse reverses the string from beginning to end
    std::reverse(str.begin(), str.end());
    std::cout<<"And this is your word in reverse: "<<str<<std::endl;
    
    return 0;
}