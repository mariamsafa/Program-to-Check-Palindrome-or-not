//Program to Check Palindrome
#include<stdio.h>
int main()
{
	int reverse=0, remainder, n,original;
	printf("Enter a number : ");
	scanf_s("%d", &n);
	original = n;
	while (n != 0)
	{
		remainder = n % 10;
		reverse = reverse * 10 + remainder;
		n = n / 10;
	}
	if (original == reverse)
	{
		printf("%d is a palindrome", original);
	}
	else
	{
		printf("%d is not palindrome", original);
	}
}


