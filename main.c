#include <stdio.h>
#include <stdlib.h>

/**
 * Program should take 3 arguments:
 * Lowest Temprature
 * Highest Temprature
 * The amount to step
 */
int main(int argc, char *argv[]){

    // First Check all arguments filled
    if (argc != 4){
        printf("Please enter 3 arguments\n");
        return 1;
    }
    
    // Read the arguments into a local variable
    // 0. Start Temp, 1. End Temp, 2. Step 
    double argumentsArray[3];
    
    for (int i = 1; i != 4; i++){
         argumentsArray[i-1]= atof(argv[i]);
    }

    // Check that lower limit is not greater than the uper limit
    if (argumentsArray[0] > argumentsArray[1]){
        printf("Check that the lower limit is not greater than the upper limit\n");
        return 1;
    }

    // Check that the step size is not greater than the difference in tempratures
    if ((argumentsArray[1] - argumentsArray[0]) < argumentsArray[2]){
        printf("Check that the step is not greater than the temprature difference\n");
        return 1;
    }

    // Print the identifiers
    printf("Celsius             Fahrenheit\n");
    printf("---------           ----------\n");
    
    for (double celsius = argumentsArray[0];celsius <= argumentsArray[1];celsius += argumentsArray[2]){
        // Print Celsius temprature
        printf("%f           ", celsius);

        // Convert to fahrenheit and print
        double fahrenheit = (celsius * 1.8) + 32;
        printf("%f\n", fahrenheit);
    }
    return 0;
}