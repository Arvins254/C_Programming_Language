#include <stdio.h>
#include <stdlib.h>
/**
 * A variable name can contain any uppercase or lowercase letter, can contain digits and the underscore character, but it can't start with a digit and Uppercase.[a-zA-Z] OR [a-zA-Z_0-9].
 * unlike other programming languages, in C you to specify type of a variable at the declaration.
 * eg variable age is iniatiated with int age = 80
 * After variable declarations you can use it in your code by assigning a value to it. eg int age = 25.6;
 */
int main()
{
	char charactername[] = "Marvin Ogik";
	int characterage = 26;

	printf("am Marvin Ogik.\n");
	printf("am 26 years of age.\n");
	printf("Am %s.\n", charactername);
	printf("Am %d years old.\n", characterage);
	/**
	 * variables can be modified as well in the same code.
	 */
	characterage = 84;
	printf("Am %d years old.\n", characterage);
	{

		/**
		 * STACK OVERFLOW - this is what happens if we do exceed the limit of the numbers within data types. 
		 * If you have an unsigned char number at 255, and you increment it, you'll get 0 in return.
		 * If you have a unsigned char number at 255 and you add 10 to it, you'll get the number 9.
		 */
		unsigned char j = 255;

		j = j + 10;
		printf("%u\n", j); 
		printf("the value returns as 9 instead of 265; it simply started over.\n");
	}
	{
		/**
		 * If you don't have a signed value, the behavior is undefined.
		 * It will basically give you a huge number which can vary, like in this case
		 * In other words, C does not protect you from going over the limits of a type. You need to take care of this yourself
		 */
		char j = 127;

		j = j + 10;
		printf("%u\n", j);
		printf("the returned value will be 4294967177\n");
	}
	{
		/**
		 * Warnings when declaring the wrong type -
		 * When you declare the variable and initialize it with the wrong value, the gcc compiler should warn you
		 * char j = 1000;
		 * and it also warns you in direct assignments
		 */
		char j;
		//j = 1000;
		printf("wrong assignment\n");
		//unless you correct it by adding another operator
		//char j = 0;

		j += 1000; //+= makes the cource code executable
		printf("thats the right assignment\n");
	}

	return (0);
}
