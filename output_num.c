int output_num(long num, int i)
{
	if (num < 0)
	{
		_putshar('-');
		i++;
		num = num * -1;
	}
	if (num / 10)
	{
		i = output_num(num / 10, i);
	}
	_putshar(num % 10 + '0');
	return (i + 1);
}
