/* Shayne Wadle
	Lab 2 part 1
*/

#include <stdio.h>

void factorial( void );
void leapYear( void );
void maximum( void );
void division( void );

/* Outputs menu then calls proper function
	based on menu choice */
int main( void )
{
	char choice = 0;
	while( choice != 'e' )
	{
		do
		{
			printf( "\nPlease input a valid option\n" );
			printf( "Choose from the following:\n" );
			printf( "a: Factorial of a number\n" );
			printf( "b: Leap year check\n" );
			printf( "c: Maximum\n" );
			printf( "d: Division\n" );
			printf( "e: Exit\n" );
			fflush( stdout );
			scanf( " %c", &choice );
		}while( choice < 97 || choice > 102 );

		switch( choice )
		{
		case 'a':
			factorial( );
			break;
		case 'b':
			leapYear( );
			break;
		case 'c':
			maximum( );
			break;
		case 'd':
			division( );
			break;
		case 'e': // do nothing since goodbye is later.
			break;
		default:// do nothing since error check already happened.
			break;
		}
	}

	printf( "Alright, goodbye.\n" );
	return 0;
}

/* computes the factorial of inputted number */
void factorial( void )
{
	unsigned short num = 0;
	unsigned long fact = 1;

	do
	{
		printf( "\nPlease enter an integer [0,20]: " );
		scanf( "%hu", &num );
	} while( num < 0 || num > 20);

	for( num = num; 0 < num; num-- )
	{
		fact *= (long) num;
	}

	printf( "The factorial is %lu\n", fact );
	return;
}

/*Determines if inputted year is a leap year*/
void leapYear( void )
{
	unsigned int year = 0;
	do
	{
		printf( "\nPlease enter the year to be checked\n[0, 30000]: " );
		scanf( "%u", &year );
	}while( 0 > year || year > 30000);


	if( year % 4 != 0 )
		printf( "The year is NOT a leap year.\n" );
	else if( year % 100 != 0 )
		printf( "The year IS a leap year.\n" );
	else if( year % 400 != 0 )
		printf( "The year is NOT a leap year.\n" );
	else
		printf( "The year IS a leap year.\n" );

	return;
}

/*Determines the maximum of 2 inputted numbers*/
void maximum( void )
{
	float one = 0, two = 0;
	printf( "\nPlease enter first number: " );
	scanf( "%f", &one );
	printf( "Please enter second number: " );
	scanf( "%f", &two );
	printf( "The max is %.5f\n", ( one > two ) ? one : two );
	printf( "Please enter a third number:" );
	printf( "This is a test comment" );
	return;
}

/*Determines the divison between two numbers*/
void division( void )
{
	int one, two;
	printf( "\nPlease enter first integer: " );
	scanf( "%d", &one );
	printf( "Please enter second integer: " );
	scanf( "%d", &two );
	if( two != 0 )
		printf( "Result: %f\n", (float) one / (float) two );
	else
		printf( "Should not divide by zero now\n" );

	return;
}
