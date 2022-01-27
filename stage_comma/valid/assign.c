int main()
{
	int y = 0;
	int x = (y = 1, 3);
	return x - y;
}
