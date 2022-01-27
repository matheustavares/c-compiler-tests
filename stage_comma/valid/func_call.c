int v;

int func(int new_val)
{
	v = new_val;
}

int main()
{
	return func(1), 2 + v;
}
