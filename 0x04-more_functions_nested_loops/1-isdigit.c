
/**
 * _isdigit - a function that checks for single digit
 *
 *   * @c: input
 *
 *    * Return: 1 if c is single digit, 0 otherwise
 */
int _isdigit(int c)
{

	if (c>= 48 && c<=57)
		return(1);
	else
		return(0);
}
