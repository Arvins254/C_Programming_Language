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
	return (0);
}

