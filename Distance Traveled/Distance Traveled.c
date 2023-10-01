// Programmer:		Thecanniestbadge
// Date:			06/14/2023
// Program Name:	Distance Traveled
// Chapter:			Repetition
// Description:		This program asks the users to input the speed of a vehicle in milese per hour and the time of the travel in hours and validates the inputs that the user gave.
//					The program generates and displays a table based on the valid inputs the console is given.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
	// Constant and Variable Declarations
    // Defines the parameters for minimum and maximum speeds and the parameters for minimum hours.
    // No max hours due to the fact there is no need for max hours
	const int min_speed = 1;
	const int max_speed = 100;
	const int min_hours = 1;
    // *** Input variables ***
    // both of these variables stores the users input
	int speed           = 0;
	int hours           = 0;
	    // *** Your program goes here ***
        // Asks the user for their input of speed and then leads into validation
        printf("What is the speed of the vehicle in MPH? ");
        scanf("%d", &speed);
    while (1) {
    // Validation of the input variables
    // if the input is valid it breaks off of the if else statement
    // if the input is not valid it will display an error message then ask the user to re-input a valid speed
        if (speed >= min_speed && speed <= max_speed){
           break;
        }
        else {
            printf("    The speed entered must be between %d and %d inclusive.\n", min_speed, max_speed);
            printf("    Please re-enter the speed of the vehicle in MPH: ");
            scanf("%d", &speed);
        }
    }
    // Asks the user for their input of hours traveled and then leads into validation
    printf("How many hours has it traveled? ");
    scanf("%d", &hours);
    while (1) {
      // Validation of the input variables
     // if the input is valid it breaks off of the if else statement
    // if the input is not valid it will display an error message then ask the user to re-input a valid hours traveled
        if (hours >= min_hours) {
            break;
        }
        else {
            printf("    The hours traveled must be greater than or equal to %d.\n", min_hours);
            printf("    Please re-enter the number of hours traveled: ");
            scanf("%d", &hours);
        }
    }
    // *** OUTPUT ***
    // this section outputs and generates a table based on the users inputs of speed and hours traveled
    printf("\n"); // Blank line
    // *** HEADER ***
    printf("Hour\tDistance Traveled\n");
    // *** TABLE ***
    for (int i = 1; i <= hours; i++) {
        printf("%d\t%d miles\n", i, i * speed);
    }
    printf("\n"); // Blank line
	return 0;
} // end main()
