#include <stdio.h>

int main() {

    // Data types:
    int num = 20;
    float pi = 3.141592;//
    double gpe = 3.5;//
    char littre = 'A';
    char name[50] = "Mohammed Ali Boutaine";  // Assign an initial name

    // Output initial values:
    printf("Initial values:\n");
    printf("Integer: %d\n", num);// d decimal
    printf("Float: %.6f\n", pi);// float
    printf("gpe: %lf\n", gpe);// long foalt
    printf("Character: %c\n", littre);//caracter
    printf("Name: %s\n\n", name);//string

    // Get user input:
    printf("Enter a new integer: ");
    scanf("%d", &num);

    printf("Enter a new float: ");
    scanf("%f", &pi);

    printf("Enter a new character: ");
    scanf(" %c", &littre);  // Notice the space before %c to skip newline from previous input

    // Clear the newline character in the input buffer
    getchar();  // Consume leftover newline from previous scanf

    // Get a new name with spaces
    printf("Enter a new name: ");
    fgets(name, sizeof(name), stdin);

    // Output new values after user input:
    printf("\nUpdated values:\n");
    printf("Integer: %d , Float: %.6f \n", num,pi);
    printf("Character: %c\n", littre);
    printf("Name: %s\n", name);
    /*
    escape sequence =  cha
        \n : new line
        \t : tab
        \b : backspace
        \" : double quote
        \' : single quote
        \\ : backslash
    */

    //  ==================================================

    // multi ple variables:
    int x = 2 , y = 4 , z = 6 ;
    printf("%d", x + y + z);
    x = y = z = 50;
    printf("%d", x + y + z);  // 150

    // =================================================

    // constant:
    const float pi = 3.1415 ;

    // basic data type:
/*
    int	2 or 4      bytes	Stores whole numbers, without decimals	1
    float	4       bytes	Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits	1.99
    double	8       bytes	Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits	1.99
    char	1       byte	Stores a single character/letter/number, or ASCII values	'A'
*/

    // format specifiers:
/*
    %d or %i	int	
    %f or %F	float	
    %lf	        double	
    %c	        char	
    %s	        Used for strings (text), which you will learn more about in a later chapter
 */

    // memory size:
/*
    int	2 or 4 bytes
    float	4 bytes
    double	8 bytes
    char	1 byte
*/

    // math function:
    // #include <math.h>

    // Square root of 16
    double sqrt_result = sqrt(16.0);
    printf("Square root of 16: %.2f\n", sqrt_result);

    // 2 raised to the power of 3
    double pow_result = pow(2.0, 3.0);
    printf("2 raised to the power of 3: %.2f\n", pow_result);

    // Absolute value of -5 (integer)
    int abs_result = abs(-5);
    printf("Absolute value of -5: %d\n", abs_result);

    // Absolute value of -5.5 (floating-point)
    double fabs_result = fabs(-5.5);
    printf("Absolute value of -5.5: %.2f\n", fabs_result);

    // Ceiling of 4.3 (smallest integer >= 4.3)
    double ceil_result = ceil(4.3);
    printf("Ceiling of 4.3: %.2f\n", ceil_result);

    // Floor of 4.7 (largest integer <= 4.7)
    double floor_result = floor(4.7);
    printf("Floor of 4.7: %.2f\n", floor_result);

    // Remainder of 5.3 divided by 2.0
    double fmod_result = fmod(5.3, 2.0);
    printf("Remainder of 5.3 divided by 2.0: %.2f\n", fmod_result);


{

      /*
    arithmetic operators:
    + : addition
    - : subtraction
    * : multiplication
    / : division
    % : modulus

    relational operators:
    == : equal to
    != : not equal to
    > : greater than
    < : less than
    >= : greater than or equal to
    <= : less than or equal to

    logical operators:  add logic table
    && : and
    || : or
    ! : not

    assignment operators:
    = : assignment
    += : addition assignment
    -= : subtraction assignment
    *= : multiplication assignment
    /= : division assignment
    %= : modulus assignment

    increment and decrement operators:
    ++ : increment
    -- : decrement
   */

}
    // short hand if:
    // variable = (condition) ? expressionTrue : expressionFalse;
    (time < 18) ? printf("Good day.") : printf("Good evening.");

    int getMax(int x , int y){
        return (x>y) ? x : y ;
    }


    // switch syntax:
    switch (expression) {
        case x:
            // code block
            break;
        case y:
            // code block
            break;
        default:
            // code block
    }

    //### while syntax:
    while (condition) {
    // Code to be executed while the condition is true
    }
    int i = 0;
    while (i < 5) {
        printf("%d\n", i);
        i++;
    }

    //## do while syntax:
    do {
    // Code to be executed at least once, then while condition is true
    } while (condition);

    do {
    // Code to be executed at least once, then while condition is true
    } while (condition);

    //## 3. for Loop Syntax:
    for (initialization; condition; increment/decrement) {
        // Code to be executed for each iteration
    }
    for (int i = 0; i < 5; i++) {
        printf("%d\n", i);
    }





    return 0;
}
