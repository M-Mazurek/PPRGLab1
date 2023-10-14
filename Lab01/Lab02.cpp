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

	int x;

	std::cout << "Podaj x: ";
	std::cin >> x;

	int s = x;

	for (int i = x - 1; i > 0; i--)
		s *= i;

	printf("%d! = %d", x, s);

	return 0;
}