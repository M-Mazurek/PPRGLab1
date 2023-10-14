#include <iostream>

int _main()
{
	// ex. 1
	/*
	int a,b,c;

	std::cout << "Podaj a: ";
	std::cin >> a;

	std::cout << "Podaj b: ";
	std::cin >> b;

	std::cout << "Podaj c: ";
	std::cin >> c;

	system("cls");

	if (a < b + c && b < a + c && c < a + b)
		printf("Boki %d, %d, %d tworza trojkat.", a, b, c);
	else
		printf("Boki %d, %d, %d nie tworza trojkatu.", a, b, c);
	
	std::cout << std::endl;
	*/
	// ex. 2
	
	srand((unsigned)time(NULL));
	const int max = INT32_MAX;
	int val = rand() % max + 1;
	int chunkSize = max;
	int guess = max / 2;
	int attempts = 0;

	std::cout << "Looking for " << val << std::endl << std::endl;
	
	while (true)
	{
		attempts++;
		chunkSize = ceil(static_cast<float>(chunkSize) / 2.0);

		if (chunkSize / 2 < 1)
			chunkSize = 2;
		
		std::cout << "Guessing " << guess << std::endl;
		if (guess == val)
		{
			std::cout << "Correct, attempts: " << attempts << std::endl << std::endl;
			break;
		}
		else if (guess > val)
		{
			std::cout << "Lower" << std::endl << std::endl;
			guess -= chunkSize / 2;
		}
		else
		{
			std::cout << "Higher" << std::endl << std::endl;
			guess += chunkSize / 2;
		}
	}

	return 0;
}