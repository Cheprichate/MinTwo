#include <iostream>
int a;
int b;

int main()
{
    setlocale(LC_ALL, "Russian");
    std::cout << "Введите первое число : ";
    std::cin >> a ;
    std::cout << "Введите второе число : ";
    std::cin >> b ;
    if (a < b) {
        std::cout << " Минимальное число : " << a;
} else if (a > b) {
        std::cout << " Минимальное число : " << b;
} else {
        std::cout << " Числа равны ";
    }
}