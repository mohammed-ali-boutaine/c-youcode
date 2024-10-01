
#include <stdio.h>

/*

Structures (also called structs) are a way to group several related variables into one place. Each variable in the structure is known as a member of the structure.
Unlike an array, a structure can contain many different data types (int, float, char, etc.).

syntax:
struct StructName {

};

*/
// struct MyStructure {   // Structure declaration
    // int myNum;           // Member (int variable)
    // char myLetter;       // Member (char variable)
// }; // End the structure with a semicolon

/*
*/



struct Car {
    char name[20];
    int year;
    char model[20];
};

struct Car bmw = {"BMW ALPA",1990,"Parrot"};

// access to value
void printInfo(){

printf("Name: %s\n",bmw.name);
printf("Year: %d\n",bmw.year);

}


//array of structs:
struct Student{
    char name[20];
    int age;
};

void studentTest(){

// what if i want 100 student
struct Student s1 = { "ali" , 20 };
struct Student s2 = { "ahmed", 22 };
struct Student s3 = { "test" , 20 };
struct Student s4 = { "tset2", 22 };

// type_return name[size] = {values...};
struct Student students[] = { s1,s2,s3,s4};

int len = sizeof(students) / sizeof(students[0]);

printf("--------------------------------\n");

for (int i = 0; i < len; i++) {
    printf("| Name: %-12s | Age: %d |\n", students[i].name, students[i].age);
    printf("--------------------------------\n");
}

}


int main(){

studentTest();
    printf("%s\n",bmw.name);

    return 0;
}

