#include <iostream>;

int main()
{
	// ex. 1

	int x, y, sum = 0;

	std::cout << "Podaj a: ";
	std::cin >> x;

	std::cout << "Podaj b: ";
	std::cin >> y;

	if (x % 2 == 0)
		x++;

	for (int i = x; i <= y; i += 2)
		sum += i;

	printf("Suma <%d,%d> = %d", x, y, sum);

	return 0;
}