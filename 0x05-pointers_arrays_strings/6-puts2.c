void print_rev(char *s)
{
	int len = 0;
	char *p = s;

	while (*p != '\0')
	{
		len++;
		p++;
	}

	while (len > 0)
	{
		p--;
		putchar(*p);
		len--;
	}

	putchar('\n');
}
