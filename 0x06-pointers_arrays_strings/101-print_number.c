
void print_number(int n)
{
	unsigned int number_traitement;
	0 > n ? number_traitement = -n; _putchar('-'); : number_traitement = n;


	if (number_traitement / 10)
		print_number(n1 / 10);

	_putchar((number_traitement % 10) + '0');
}
