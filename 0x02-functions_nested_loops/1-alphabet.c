/*
 * File: 1-print_alphabets.c
 * Auth: Ntsatsi Monoto
 */

#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowercase
 *
 * Description: 'Print the alphabets in lowercase'
 *
 * Return: Always void
 */
void print_alphabet(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
