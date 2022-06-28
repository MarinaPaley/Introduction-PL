#include <iostream>

/**
 * \brief Сравнивает в нулем аргумент функции
 * \param x аргумент
 * \param epsilon погрешность расчета
 * \return true в случае равенства нулю
 */
bool isZero(double x, double epsilon = std::numeric_limits<double>::epsilon());

/**
 * \brief Сравнивает два аргумента
 * \param lha аргумент
 * \param rha аргумент
 * \param epsilon погрешность расчета
 * \return true в случае равенства
 */
bool areEqual(double lha, double rha, double epsilon = DBL_EPSILON);
    //double epsilon = std::numeric_limits<double>::epsilon());

/**
 * \brief Вычисление тангенса
 * \param x аргумент
 * \return танген
 */
double tg(double x);

/**
 * \brief Вычисление котангенса
 * \param x аргумент
 * \return танген
 */
double cotg(double x);

/**
 * \brief Проверяет возможность расчета функции тангенса
 * \param x аргумент
 * \param epsilon погрешность расчета
 * \return true в случае существования ответа
 */
bool canCalculateTg(double x, double epsilon = std::numeric_limits<double>::epsilon());

/**
 * \brief Проверяет возможность расчета функции котангенса
 * \param x аргумент
 * \param epsilon погрешность расчета
 * \return true в случае существования ответа
 */
bool canCalculateCtg(double x, double epsilon = std::numeric_limits<double>::epsilon());

/**
 * \brief Точка входа в программу
 * \return 0  в случае успеха
 */
int main() 
{
    std::cout << "Введите значение аргумента = ";
    double x;
    std::cin >> x;
    std::cout << "\nВведите точность = ";
    double epsilon;
    std::cin >> epsilon;

    if (canCalculateTg(x, epsilon)) 
    {
        const auto y = tg(x);
        std::cout << "x = " << x << " tg = " << y << std::endl;
    }
    else
    {
        std::cout << "Функция тангенса не существует"<< std::endl;
    }

    if (canCalculateCtg(x, epsilon))
    {
        const auto y = cotg(x);
        std::cout << "x = " << x << " ctg = " << y << std::endl;
    }
    else
    {
        std::cout << "Функция котангенса не существует" << std::endl;
    }

    return 0;
}

bool isZero(const double x, const double epsilon)
{
    return areEqual(x, 0, epsilon);
}

bool areEqual(const double lha, const double rha, const double epsilon)
{
    return abs(lha - rha) <= epsilon;
}

double tg(const double x)
{
    return sin(x)/cos(x);
}

double cotg(const double x)
{
    return cos(x) / sin(x);
}

bool canCalculateTg(const double x, const double epsilon)
{
    return !isZero(cos(x), epsilon);
}

bool canCalculateCtg(const double x, const double epsilon)
{
    return !isZero(sin(x), epsilon);
}
