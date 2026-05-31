#include<stdio.h>
int main()
{
	int a=5,b=4;
	printf("\n %d",a&b);
	printf("\n %d",a|b);
	printf("\n %d",a^b);
	printf("\n %d",~5);
	printf("\n %d",~-3);
	printf("\n %d",10<<2);
	printf("\n %d",10<<3);
	printf("\n %d",10>>2);
	return 0;
}

//a+b=binary
//i++=unary operator
//()?():()
//
//
//Arithmetic operator -(+,-,/,*)=binary operator
//Relational Operator-(<,>,<=,>=,==,!==binary opertaor,booean
//Logical=(&&,||,!)-binary and unary=>boolean
//Bitwise operator-&,|,^,<<,>>,~,=>bi and unary=
//5&4=4
//101
//&
//100
//====
//100=4
//5|4=5
//101
//|
//100
//====
//101=5
//5^4=1
//101
//100
//===
//001=1
//=====
//
//
//~value=-(value+1)
//~5=-6
//~-3=2
//
//<<
//value<<shift=value*2^shift
//10<<2=10*2 pow 2=40
//
//>>
//value>>shift=value*2*-shift
//
//>>>
//
//Assignment -(=,+=,-=,*=,/=)
//a=a+5
//a+=5
//ternary?:
