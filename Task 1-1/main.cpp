#define _USE_MATH_DEFINES // for C++
#include <cmath>
#include <iomanip>
#include <iostream>

//using namespace std;

/**
 * \brief Это функция выполняет вычисление по заданной формуле
 * \param x параметр х
 * \param y параметр y
 * \return значение функции
 */
double getA(const double x, const double y);
/**
 * \brief Это функция выполняет вычисление по заданной формуле
 * \param x параметр х
 * \param y параметр y
 * \param z параметр z
 * \return 0  значение функции
 */
double getB(const double x, const double y, const double z);

/**
 * \brief Точка входа в программу
 * \return 0  в случае успеха
 */
int main()
{
    const double x = 1.7;
    const double y = 2.5;
    const double z = 3;

    const double a = getA(x, y);
    const double b = getB(x, y, z);


    std::cout << std::setprecision(9) << "x = " << x << " y = " << y << " z = " << z 
        << " a = " << a << " b = " << b  << std::endl;
    return 0;
}



double getA(const double x, const double y)
{
    return 2 * sin(y - M_PI / 4) / (1.0 / 3 + tan(x) * tan(x));
}

double getB(const double x, const double y, const double z)
{
    return exp(-x * z) + sqrt(abs(y - z));
}
