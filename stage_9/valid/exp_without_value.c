void f()
{
}

int main()
{
	for(f(); 0; f())
		f();
	1 ? f() : f();
	f();
	return 0;
}
