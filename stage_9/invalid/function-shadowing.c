int f(int f)
{
	if (f)
		return f;
	return f(f-1);
}

int main()
{
	return f(2);
}
