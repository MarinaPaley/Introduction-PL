#include <iostream>

/**
 * \brief Рассчитывает третью сторону треугольника
 * \param a первая сторона
 * \param b вторая сторона
 * \param angle угол между двумя сторонами в радианах
 * \return третья сторона
 */
double getSide(double a, double b, double angle);

/**
 * \brief Вычисляет площадь треугольника
 * \param a первая сторона
 * \param b вторая сторона
 * \param c третья сторона
 * \return площадь треугольника
 */
double getArea(double a, double b, double c);

/**
 * \brief Вычисляет радиус описанной окружности
 * \param a первая сторона
 * \param b вторая сторона
 * \param c третья сторона
 * \return радиус описанной окружности
 */
double getCircumscribedRadius(double a, double b, double c);


/**
 * \brief Точка входа в программу
 * \return 0 в случае успеха
 */
int main()
{
    std::cout << "Введите первую сторону треугольника = ";
    double sideA;
    std::cin >> sideA;
    std::cout << "\nВведите вторую сторону треугольника = ";
    double sideB;
    std::cin >> sideB;
    std::cout << "Введите угол между двумя сторонами = ";
    double angle;
    std::cin >> angle;

    const double sideC = getSide(sideA, sideB, angle);
    const double area = getArea(sideA, sideB, sideC);
    const double radius = getCircumscribedRadius(sideA, sideB, sideC);

    std::cout << "Третья сторона = " << sideC << "\n";
    std::cout << "Площадь треугольника  " << area << "\n";
    std::cout << "Радиус описанной окружности " << radius << "\n";

    return 0;
}

double getSide(const double a, const double b, const double angle)
{
    return 42;
}

double getArea(const double a, const double b, const double c)
{
    return 42;
}

double getCircumscribedRadius(double a, double b, double c)
{
    return 42;
}