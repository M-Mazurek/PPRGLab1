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

int zad4_get_power(int x, unsigned int y)
{
    if (y == 0)
        return 1;

    return x * zad4_get_power(x, --y);
}

unsigned int zad5_get_digit_sum(unsigned int x)
{
    if (x < 10)
        return x;

    return (x % 10) + zad5_get_digit_sum(x / 10);
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
    //printf("%d %d\n\n", zad3_is_prime(23), zad3_is_prime(33));
    //zad3_show_primes_to(500);

    // ex. 4
    //printf("%d %d", zad4_get_power(2, 8), zad4_get_power(3, 0));

    // ex. 5
    printf("%d", zad5_get_digit_sum(123456));

    return 0;
}