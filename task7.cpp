//Including necessary headers; cctype is used for finding upper and lowercase letters and digits
#include <iostream> 
#include <string>
#include <cctype>

//Defining the required macro
#define MIN_LENGTH 8

//A boolean for the length at this point makes it easier to insert the result later
bool passLength(std::string password){
    return password.length()>=MIN_LENGTH;
}

//The following booleans are initialized as false and later checked
bool hasUpper=false, hasLower=false, hasDigit=false, hasSpecial=false;

//The FOR loop checks if the previously defined boolean values should be changed to true
bool StrongPass(std::string password){
    for(char c:password){
        if(std::isupper(c)) hasUpper=true;
        else if(std::islower(c)) hasLower=true;
        else if(std::isdigit(c)) hasDigit=true;
        else if(password.find("!@#$%^&*")) hasSpecial=true;
    }
    return hasUpper&&hasLower&&hasDigit&&hasSpecial;
}

int main(){
    //Defining the string which will store the password chosen by the user
    std::string userPass;

    //Message greetings and instructions + password storage
    std::cout<<"Welcome to MyPassword, where we work to create the best passwords possible!"<<std::endl;
    std::cout<<"To be absolutely perfect, your password needs to be a minimum of 8 charachers. ";
    std::cout<<"In addition, it will have to contain the following:\nOne uppercase letter."<<std::endl;
    std::cout<<"One lowercase letter.\nOne digit.\nOne special character."<<std::endl;
    std::cout<<"Now that we've covered the basics, please type in your password: ";
    std::cin>>userPass;

    //Checks if the passLength boolean is true or false and prints results accordingly
    if(passLength(userPass)){
        std::cout<<"\nYour password meets the required length."<<std::endl;
        std::cout<<"Here's an evaluation of your password: ";

    //If previous boolean was true, the StrongPass boolean is checked for a true/false value
        if(StrongPass(userPass)){
            std::cout<<"Strong password.";
        }
    /*If not all conditions are met, the program checks which ones are missing
    and prints results accordingly*/
        else{
            std::cout<<"Weak password. Here's what you're missing: "<<std::endl;
            if(!hasUpper){
                std::cout<<"An uppercase letter."<<std::endl;
            }
            if(!hasLower){
                std::cout<<"A lowercase letter."<<std::endl;
            }
            if(!hasDigit){
                std::cout<<"A digit."<<std::endl;
            }
            if(!hasSpecial){
                std::cout<<"A special character."<<std::endl;
            }
        }
    }

    else{
        std::cout<<"Your password does not meet the required length. Please run the program again."<<std::endl;
    }

    return 0;

}
