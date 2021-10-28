#define _USE_MATH_DEFINES // for C++
#include <cmath>
#include <iostream>

/**
\brief Рассчитывает объем конуса, вписанного в шар, радиусом R
\param angle Угол при вершине в осевом сечении конуса
\param radius Радиус шара
\return объем конуса
*/
double getVolume(double angle, double radius);

/**
\brief Рассчитывает полную поверхность конуса, вписанного в шар, радиусом R
\param angle Угол при вершине в осевом сечении конуса
\param radius Радиус шара
\return полную поверхность конуса
*/
double getSurface(double angle, double radius);

/** 
\brief Точка входа в программу 
\return В случае успеха возвращаем 0
*/
int main()
{
    std::cout << "Введите радиус шара = ";
    double radius;
    std::cin >> radius;

    std::cout << "Введите угол при вершине в осевом сечении конуса = ";
    double angle;
    std::cin >> angle;

    const double volume = getVolume(angle, radius);
    const double surface = getSurface(angle, radius);
    std::cout << "объем конуса, вписанного в шар " << volume;
    std::cout << "\nполную поверхность конуса, вписанного в шар " << surface << std::endl;
    return 0;
}

double getVolume(const double angle, const double radius)
{
    return 0.0;
}

double getSurface(const double angle, const double radius)
{
    return 0.0;
}
