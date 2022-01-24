int f(int v)
{
	if (v == 1)
		return v;
	{
		int f = v - 1;
		v = f;
	}
	return f(v);
}

int main()
{
	return f(2);
}
