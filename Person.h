#pragma once

#include <string>


class Person {

private:             
    
    std::string myPrivateString = "Hello Private";  

public:
    Person(int myNum, std::string  myString, int hello = 1);

    ~Person() {
        std::cout << "End me";
        
    }

    int myNum;
    std::string myString;

    std::string getName() {
        //myPrivateString = "cHANGE ME";
        return myString;
    }

    std::string getPrivateName() {
        std::cout << myPrivateString;
        
        return myPrivateString;
    }

protected:

};