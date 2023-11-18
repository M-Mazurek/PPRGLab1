#include <iostream>
#include <vector>

bool zad1_is_even(int x)
{
    return x % 2 == 0;
}

int g_a(1), g_b(2);

void zad2_swap_globals()
{
    int t = g_a;
    g_a = g_b;
    g_b = t;
}

bool zad3_is_prime(unsigned int x)
{
    for (int i = 2; i < x / 2; i++)
        if (x % i == 0)
            return false;

    return true;
}

void zad3_show_primes_to(unsigned int x)
{
    for (int i = 1; i <= x; i++)
        if (zad3_is_prime(i))
            printf("%d ", i);
}

int main()
{
    // ex. 1
    //std::cout << zad1_is_even(2) << std::endl;
    //std::cout << zad1_is_even(1) << std::endl;

    // ex. 2
    //printf("%d %d\n", a, g_b);
    //zad2_swap_globals();
    //printf("%d %d\n", a, g_b);

    // ex. 3
    printf("%d %d\n\n", zad3_is_prime(23), zad3_is_prime(33));
    zad3_show_primes_to(500);

    return 0;
}