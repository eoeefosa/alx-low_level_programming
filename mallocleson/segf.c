/**
 * segf -Let's segfault\o/
 *
 * Return: nothing.
 */
void segf(void)
{
	char *str;
	str="Alxsw";
	str[0]='s';
}

/**
 * main - concept introdution
 *
 * Return: 0.
 */
int main(void)
{
	segf();
	return (0);
}
