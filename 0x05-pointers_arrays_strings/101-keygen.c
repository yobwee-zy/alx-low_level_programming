#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random passwords for 101-crackme
 * Return: zero
 */
int main(void)
{
	int i, sum, n;
	int pass[100];

	sum = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)


