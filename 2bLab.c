/*Shayne Wadle
	Lab 2 part 2*/

#include <stdio.h>
#include <math.h>

void arith( unsigned short );
void bitwise( unsigned short );

int main( void )
{
	unsigned int num = 0;
	char oper;
	do {
		printf( "Please enter a number [0,65535]: " );
		scanf( "%u", &num );
	} while( 0 > num || num > 65535 );

	do {
		printf( "\nChoose from the following:\n" );
		printf( "1: Arithmatic\n" );
		printf( "2: Bitwise\n" );
		scanf( " %c", &oper );
	} while( oper != '1' && oper != '2' );

	switch( oper )
	{
	case '1':
		arith( num );
		break;
	case '2':
		bitwise( num );
		break;
	default: // do nothing since erro check earlier
		break;
	}
	return 0;
}

/*Calculates bits with arithmatic ops*/
void arith( unsigned short one )
{
	long bin = 0;
	int i = 0;
	printf( "%hu in binary is:\n", one );
	while( one != 0 )
	{
		bin += ( one % 2 ) * pow(10, i);
		one /= 2;
		i++;
	}
	printf( "%016ld\n", bin );
	return;
}

/*Calculates bits with bitwise ops*/
void bitwise( unsigned short two )
{
	long bin = 0;
	int i = 15;
	printf( "%hu in binary is:\n", two );
	while( i >= 0 )
	{
		bin *= 10;
		bin += ( two >> i ) & 01;
		i--;
	}
	printf( "%016ld\n", bin );
	return;
}