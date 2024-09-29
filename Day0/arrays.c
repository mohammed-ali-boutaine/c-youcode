#include <stdio.h>
#include <string.h>


int main(){

    // arrays : Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.
    // To create an array, define the data type (like int) and specify the name of the array followed by square brackets [].

    int myNumbers[] = {25, 50, 75, 100};
    int myapp1[4] ; // set array size
    // print element
    printf("%d", myNumbers[0]);

    // cange data
    myNumbers[0] = 33;

    int arr[] = {1,42,1,421,123,53,34,-3};

    // loop
    int length = sizeof(arr) / sizeof(arr[0]);
    for(int i=0 ; i<length ; i++){
        printf("%d \n",arr[i]);
    }


    //Get Array Size or Length
    printf("%lu", sizeof(myNumbers)); // Prints 20
    // the sizeof operator returns the size of a type in bytes.

    // to get the length
    int length = sizeof(myNumbers) / sizeof(myNumbers[0]);


  // example:
  // An array storing different ages
int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};

float avg, sum = 0;
int i;

// Get the length of the array
int length = sizeof(ages) / sizeof(ages[0]);

// Loop through the elements of the array
for (i = 0; i < length; i++) {
  sum += ages[i];
}

// Calculate the average by dividing the sum by the length
avg = sum / length;

// Print the average
printf("The average age is: %.2f", avg);


// aray of stings:


char cars[][10] = {"bmw","dodge","mustang"};

// cars[0] = "tesla"  // that wont work
strcopy(cars[0],"Tesla");// that will work

int lenght = sizeof(cars) / sizeof(cars[0])

for(int i=0 ; i< lenght ; i++){
    printf("car: %s \n",cars[i]);
}



//------------------------------------------
// Multidimensional Arrays
int matrix[2][3] = { 
    {1, 4, 2},
    {3, 6, 8} 
    };

    printf("%d", matrix[0][2]);  // Outputs 2
    matrix[0][0] = 9;  // change value

    // loop through it :
    
int i, j;
for (i = 0; i < 2; i++) {
  for (j = 0; j < 3; j++) {
    printf("%d\n", matrix[i][j]);
  }
}


void myFunction(int myNumbers[5]) {
  for (int i = 0; i < 5; i++) {
    printf("%d\n", myNumbers[i]);
  }
}

int main() {
  int myNumbers[5] = {10, 20, 30, 40, 50};
  myFunction(myNumbers);
  return 0;
}




    return 0;
}