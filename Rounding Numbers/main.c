/*Luc Gremillion
  February 26, 2023
  C Programming
  Rebecca Dewitt*/

/*5.11 - (Rounding Numbers) 
Function floor is used to round a
number to a specific decimal place*/
#include <stdio.h>
#include <math.h>

//Function Prototypes
int roundToInteger(double number);
double roundToTenths(double number);
double roundToHundredths(double number);
double roundToThousandths(double number);
void displayCurrent(double number);

int main(){
	//Declare variable
	double number;

	//Do-While loop, continues untill sentinel is triggered
	do {
		//Prompt user to enter a number to a number to round
		printf("\nPlease enter a number to round (Or enter -1 to exit): ");
		//Intakes number from input
		scanf_s("%lf", &number);

		//statement to test if the input was the sentinel value
		if(number != -1
) {
			//call to functions and will return into the printf statemnt
			displayCurrent(number);
			printf("closet whole integer is: %d", roundToInteger(number));
			displayCurrent(number);
			printf("to the Tenths %.1f", roundToTenths(number));
			displayCurrent(number);
			printf("to the Hundredths %.2f", roundToHundredths(number));
			displayCurrent(number);
			printf("to the Thousandths %.3f\n", roundToThousandths(number));
		}
	}while (number != -1);
}
//Function to round number into an integer
int roundToInteger(double number) {
	return (int)floor(number + .5);
}

//Function rounds to the nearest Tenths spot
double roundToTenths(double number) {
	return floor(number*10 +.5)/10;
}

//Fuction rounds to the nearest Hundredths spot
double roundToHundredths(double number) {
	return floor(number*100 +.5)/100;
}

//Function rounds to the nearest Thousandths spot
double roundToThousandths(double number) {
	return floor(number*1000 + .5)/1000;
}

//Function prints a partial statement to have “less” code
void displayCurrent(double number) {
	printf("\nThe number %.5lf rounded to the ",number);
}