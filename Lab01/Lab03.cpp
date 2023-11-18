#include <iostream>

bool zad1_is_even(int x)
{
    return x % 2 == 0;
}

int a(1), b(2);

void zad2_swap_globals()
{
    int t = a;
    a = b;
    b = t;
}

int main()
{
    // ex. 1
    //std::cout << zad1_is_even(2) << std::endl;
    //std::cout << zad1_is_even(1) << std::endl;

    // ex. 2
    printf("%d %d\n", a, b);
    zad2_swap_globals();
    printf("%d %d\n", a, b);

    return 0;
}