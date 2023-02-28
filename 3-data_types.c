#include <stdio.h>
#include <stdlib.h>
/**
 * C built in data types are: int(4bytes), char(1 byte), short(atleast 2 bytes), long(4 bytes), float(4 bytes), double(8 bytes), long double(8 bytes).
 * So one can say short <= int <= long.
 * Unsigned - is used to prepend other data types.
 * unsigned char ranges from 0 to 255
 * unsigned int ranges from 0 to 65,535
 * unsigned short ranges from 0 65,535
 * unsigned long ranges from 0 to 4,294,967,295
 */
int main()
{

	int age = 40;
	double gpa = 3.6;
	char grade = 'A';
	char phrase[] = "Learning C code";
	printf("she is %d years old, she scored a mean grade of %c while %s.\n", age, grade, phrase);
	//FLOATING NUMBERS
	/**
	 * they doo represent much larger set of values than integers,
	 * also can represent fractions
	 * they represent no. as decimals times powers of 10. eg (1.29e-3 or -2.3e+5)
	 * float, double and long double are used to represent decimal points(floating point types)
	 * all can represent both -ve and +ve no.
	 * float represents range btwn 10^-37 to 10^+37 and its implemented basically using 32bits.
	 * double rep bigger set o no while long double reps much more.
	 * on Mac float is rep by 32 bit where 24 are significant bits while 8 are used to encode exponent
	 * double is rep by 64bits where 53 significant while 11 are exponent
	 * long double is rep by 80 bits where 64 are significant while 15 are exponent
	 */
	{
		printf("char size: %lu bytes\n", sizeof(char));
		printf("int size: %lu bytes\n", sizeof(int));
		printf("short size: %lu bytes\n", sizeof(short));
		printf("long size: %lu bytes\n", sizeof(long));
		printf("float size: %lu bytes\n", sizeof(float));
		printf("double size: %lu bytes\n",
				sizeof(double));
		printf("long double size: %lu bytes\n"
				sizeof(long double));
	}
	return (0);
}

