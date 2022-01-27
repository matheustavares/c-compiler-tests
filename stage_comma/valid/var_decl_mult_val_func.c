int global = 0;

int func()
{
	global++;
	return 2;
}

int main()
{
	int x = func(), y = func();
	return x + y + global;
}
