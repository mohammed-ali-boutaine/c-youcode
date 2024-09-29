
#include <stdio.h>

/*

Structures (also called structs) are a way to group several related variables into one place. Each variable in the structure is known as a member of the structure.
Unlike an array, a structure can contain many different data types (int, float, char, etc.).

syntax:
struct StructName {

};

*/
struct MyStructure {   // Structure declaration
    int myNum;           // Member (int variable)
    char myLetter;       // Member (char variable)
}; // End the structure with a semicolon

/*
*/



struct car{
    char name[20];
    int year;
    char model[20];
};

struct car bmw = {"BMW ALPA",1990,"Parrot"};




int main(){

    printf("%s",bmw.name);

    return 0;
}

