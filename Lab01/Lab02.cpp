#include <iostream>;

int main()
{
	// ex. 1
	/*
	int x, y, sum = 0;

	std::cout << "Podaj x: ";
	std::cin >> x;

	std::cout << "Podaj y: ";
	std::cin >> y;

	if (x % 2 == 0)
		x++;

	for (int i = x; i <= y; i += 2)
		sum += i;

	printf("Suma <%d,%d> = %d", x, y, sum);
	*/

	// ex. 2
	/*
	int k;

	std::cout << "Podaj k: ";
	std::cin >> k;

	for (int i = 50; i <= 100; i++)
	{
		if (i % k == 0)
			std::cout << i << ' ';
	}
	*/

	// ex. 3
	/*
	int x;

	std::cout << "Podaj x: ";
	std::cin >> x;

	int s = x;

	for (int i = x - 1; i > 0; i--)
		s *= i;

	printf("%d! = %d", x, s);
	*/

	// ex. 4
	/*
	int x;

	std::cout << "Podaj x: ";
	std::cin >> x;

	for (int i = 0; i <= (x / 2) + 1; i++)
	{
		if (i * i == x)
		{
			std::cout << "Tak";
			return 0;
		}
	}
	std::cout << "Nie";
	*/

	// ex. 5
	/*
	int x;

	std::cout << "Podaj x: ";
	std::cin >> x;

	for (int i = 2; i < x; i++)
	{
		if (x % i == 0)
		{
			std::cout << "Nie";
			return 0;
		}
	}
	std::cout << "Tak";
	*/

	// ex. 6
	int x, y, nwd = 1;

	std::cout << "Podaj x: ";
	std::cin >> x;

	std::cout << "Podaj y: ";
	std::cin >> y;

	for (int i = (x < y) ? x : y; i > 1; i--)
	{
		if (x % i == 0 && y % i == 0)
		{
			nwd = i;
			break;
		}
	}

	printf("NWD(%d,%d) = %d", x, y, nwd);

	return 0;
}