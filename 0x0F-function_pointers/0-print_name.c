/**
*print_name - print a name
*@name: name
*@f: function
*Return: nothing
**/

void print_name(char *name, void (*f)(char *))
{
	void (*dc)(char *);

	if (name == 0 || f == 0)
	{
		return;
	}
	dc = f;
	dc(name);
}
