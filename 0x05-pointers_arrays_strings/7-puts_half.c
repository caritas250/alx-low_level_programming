void puts_half(char *str)
{
	int length = 0, start, i;

	while (*(str + length) != '\0')
		length++;

	if (length % 2 == 0)
		start = length / 2;
	else
		start = (length - 1) / 2 + 1;

	for (i = start; i < length; i++)
		_putchar(*(str + i));

	_putchar('\n');
}
