#include <iostream>

int main() 
{
    int sugar;
    std::cin >> sugar;
    int fiveKg, threeKg;
    fiveKg = sugar / 5;
    while (1)
    {
        if (fiveKg < 0)
        {
            std::cout << "-1";
            return 0;
        }
        if ((sugar - (5 * fiveKg)) % 3 == 0)
        {
            threeKg = (sugar - (5 * fiveKg)) / 3;
            break;
        }
        fiveKg--;
    }
    std::cout << fiveKg + threeKg;
    return 0;
}