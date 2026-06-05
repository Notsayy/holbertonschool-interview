/**
 * is_palindrome - checks whether an unsigned long is a palindrome
 * @n: the number to check
 *
 * Return: 1 if n is a palindrome, 0 otherwise
 */
int is_palindrome(unsigned long n)
{
    unsigned long original = n;
    unsigned long reversed = 0;

    while (n)
    {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }

    return (original == reversed);
}