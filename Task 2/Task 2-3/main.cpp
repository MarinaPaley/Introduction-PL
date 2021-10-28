#include <iostream>

/**
 * \brief Считывает натуральное число из консоли.
 * \param message Мотивационное сообщение для пользователя.
 * \return Натуральное число.
 */
int read_number(const std::string& message);

/**
 * \brief Вспомогательная функция, определяющая четное ли число.
 * \param number натуральное число.
 * \return true, если число четное.
 */
bool is_odd(const int number);

/**
 * \brief Определяет является ли среднее арифметическое двух чисел целым числом.
 * \param first_number первое число.
 * \param second_number второе число.
 * \return true, если результат целое число.
 */
bool is_average_integer(const int first_number, const int second_number);

/**
 * \brief Точка входа в программу.
 * \return 0 в случае успеха.
 */
int main()
{
    const auto first = read_number("Введите первое натуральное число ");

    const auto second = read_number("Введите второе натуральное число ");

    const auto result = is_average_integer(first, second)
        ? "Является"
        : "Не является";

    std::cout << result << std::endl;

    return 0;
}

int read_number(const std::string& message)
{
    std::cout << message;
    int number = 0;
    std::cin >> number;
    return number;
}


bool is_average_integer(const int first_number, const int second_number)
{
    return true;
}
