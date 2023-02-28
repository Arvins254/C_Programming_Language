#include <stdio.h>
/**
 * there are 2 ways in which you can use conditions in when you program
 * use of "if" statemensts together with "else" helper, and the other one is "switch".
 * "if statement" help check if the condition is true and then execute block in {}curly braces.
 * ensure you use "==" instead of "=".
 * "if" condition will always be true as much the argument is not 0.(0 equate to false value)
 * with "=" condition check will look for a boolean result(result if a comparison).
 */
int main()
{
	int a = 5;

	if (a == 5);
	{
		printf("the value of 'a'is: %d\n", a);
	}
	/**
	 * "else"
	 * you can append an else block if the original condition was false.
	 */
	{
		int a = 5;
		if(a == 10)
		{
			printf("the value of 'a'is: %d\n", a);
		}
		else
		{
			printf("10 is greater than 5\n");
		}
	}
	/**
	 * "else if"
	 * this help have multiple if statements
	 */
	{
		int a = 5;
		if(a == 10)
		{
			printf("the value of 'a'is: %d\n", a);
		}
		else if
		{
			//do something//
		}
		else if
		{
			//do someting//
		}
		else
		{
			printf("10 is greater than 5\n");
		}
	}
	/**
	 * "switch"
	 * can be used instead of multiple if/else/ blocks to check the value of exact variable.
	 * to avoid execution of another case before the previous ends we use a "break"
	 * at the end you can add a 'catch-all' case at the end, labeled "default"
	 */
	{
		//int a = 5;

		//switch (a)
		//{
			//case 0:
				/* do something */
				//break;
			//case 1:
				/* do something */
				//break;
			//case 2:
				/* do something */
				//break;
			//default:
				/* do something else */
				//break;
		//}
	}

	return (0);
}
