#include <iostream>
#include "functions.h"

// Test for Questions 1 to 8
int enterYear = 0;
int palindromeNum = 0;
int primeNum = 0;
int binary = 0;

int main()
{
	std::cout << "Enter a year to check if it's a leap year\n";
	std::cin >> enterYear;

	if (leapYearChecker(enterYear))
	{
		std::cout << enterYear << " is a leap year\n";
	}
	else
	{
		std::cout << enterYear << " is not a leap year\n";
	}
	
	std::cout << "Enter a number to check if its a palindrome number\n";
	std::cin >> palindromeNum;

	if (checkPalindrome(palindromeNum))
	{
		std::cout << palindromeNum << " is a palindrome numeber\n";
	}
	else
	{
		std::cout << palindromeNum << " is not a palindrome numeber\n";
	}
	
	std::cout << "Enter a number to check if its a prime number\n";
	std::cin >> primeNum;

	if (isAPrimeNumber(primeNum))
	{
		std::cout << primeNum << " is a prime numeber\n";
	}
	else
	{
		std::cout << primeNum << " is not a prime numeber\n";
	}


	std::cout << "Enter a binary number\n";
	std::cin >> binary;

	std::cout << "Decimal value is: " << binaryToDecimal(binary) << "\n";
	

	



	system("Pause");
	return 0;



}