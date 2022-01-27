int global;

int inc_global(void)
{
	return ++global;
}

int sum(int a, int b)
{
	return a + b;
}

int main()
{
	return sum(2, (inc_global(), global));
}
