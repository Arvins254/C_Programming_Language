#include <stdio.h>
#include <stdlib.h>
/**
 * OPERATORS
 */
int main()
{
	/**
	 * ARITHMETIC OPERATORS
	 * There are two types of this ie binary and unary.
	 * binary operators work using two operands eg
	 * = Assignment a = b, + Addition a + b, - Substraction a - b, * Multiplication a * b, / Division a / b, % Modulo a % b
	 * % produces a remainder for the integer division.
	 * unary operators work using one operand eg
	 * + Unary plus +a, - Unary minus -a, ++ increment a++ or ++a, -- Decrement a-- or --a
	 * a++ increments the variable after using it while ++a increments variable before use
	 */
	{
		int a = 90;
		int b = 257;
		
		printf("the sum of a and b is: %d + %d", a, b);
	}
	{
		int a = 5;
		int b;

		b = a++;
		printf(a = "%d"; a <= b; b++);
	}
	/**
	 * COMPARISON OPERATORS
	 * == Equal a == b, != Not equal a != b, > Bigger than a > b, < Less than a < b, >= Bigger than or Equal to a >= b, <= Less than or Equal to a<=b.
	 */
	{
		int a = 3;
		int b = 5;

		printf("a = 3, b = 5\n");
		printf("a is less than b\n");
		printf("a is not equal to b\n");
		printf("b is bigger than a\n");
	}
	/**
	 * COMPUND ASSIGNMENT OPERATORS
	 * help perform an assingment and at the same time perform arithmetic operation.
	 * += Addition assignment a += b, -= Subs assignment, *= multiplication ass, /= div ass, % modulo ass
	 *
	 * LOGICAL OPERATORS
	 * usually are of great use when working witn boolean values
	 * ! NOT (!a), && AND (a && b), || OR (a || b)
	 *
	 * TERNARY OPERATOR
	 * works with 3 operands and its the short way to express conditionals
	 * it does function just like if.....else except here its shorter
	 * <condition> ? <expression> : <expression> eg a ? b : c
	 * If "a" is evaluated to "true", then "b" statement is executed, otherwise "c" will be executed
	 *
	 * SIZEOF
	 * this returns the size of the operand you have pass, it can be either variable or even a type
	 */
	{
		int age = 37;

		printf("%ld\n", sizeof(age));
		printf("%ld\n", sizeof(int));
	}
	return (0);
}
