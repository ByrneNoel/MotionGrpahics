#include "functions.h"

bool leapYearChecker(int year)
{
	if (year < 0)
	{
		return false;
	}

	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		return true;
	}
	

	return false;
}


bool checkPalindrome(int num)
{
	if (num < 0)
	{
		return false;
	}

	int tempNum = num;
	int reversed = 0;

	while (num != 0)
	{
		int digit = num % 10;
		reversed = reversed * 10 + digit;
		num /= 10;
	}

	return tempNum == reversed;

}

bool isAPrimeNumber(int primeNum)
{
	int counter = 0;

	if (primeNum <= 1)
	{
		return false;
	}

	for (int index = 1; index <= primeNum; index++)
	{
		if (primeNum % index == 0)
		{
			counter++;
		}
	}

	if (counter > 2)
	{
		return false;
	}

	else
	{
		return true;
	}


	

}

int binaryToDecimal(int binaryNum)
{
	int decimal = 0;
	int power = 1;
	
	while (binaryNum > 0)
	{
		int digit = binaryNum % 10;
		decimal += digit * power;
		power = power * 2;
		binaryNum /= 10;
	}


	return decimal;
}
