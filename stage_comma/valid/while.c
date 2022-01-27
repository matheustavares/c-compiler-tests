int x;

void inc_x()
{
	x++;
}

int main()
{
	int y = 0;
	while (inc_x(), x < 10)
		y++;
	return y;
}
