#include <iostream>
#include <cmath>
bool primeChecker(int num);
// Prime data sets: 809, 199, 577, 691, 919,
// 331, 941, 467, 383, 631,
// 449, 443, 617, 227, 557, 397, 743, 257, 569, 719.

int main()
{   int num {0};
    bool result;
    std::cout << "Enter a number: ";
    std::cin >> num;

    result = primeChecker(num);
    if (result)
    {
        std::cout << num << " is a prime number!\n";
    } else
    {
        std::cout << num << " is not a prime number!\n";
    }

    return 0;
}

bool primeChecker(int num)
{   int sqrt_num = sqrt(num);
    std::cout << "The input num's square root is: " <<sqrt_num << "\n";
    if (num < 2)
         return false;
     else if (num == 2)
         return true;
     else if (num % 2 == 0)
         return false;
    for (int i {3}; i <= sqrt_num; i += 2 )
    {
        if (num % i == 0)
         return false;
    }
    return true;
}
