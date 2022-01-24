int func();
int func(int a)
{
	return a;
}
int func();

int main()
{
	return func(2);
}
