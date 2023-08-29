
#include <iostream>
/**
 * \brief Константы состояния светофора.
 */
enum class TRAFFIC_LIGHT
{
    /**
     * \brief Запрещающий сигнал.
     */
    RED,

    /**
     * \brief 
     */
    YELLOW,

    /**
     * \brief 
     */
    GREEN
};

/**
 * \brief Точка входа в программу.
 * \return Возвращает 0 в случае успеха.
 */
int main()
{
    std::cout << "Введите цвет светофора "
        << "Стой - " << static_cast<int>(TRAFFIC_LIGHT::RED)
        << " Жди - " << static_cast<int>(TRAFFIC_LIGHT::YELLOW)
        << " Иди - " << static_cast<int>(TRAFFIC_LIGHT::GREEN)
        << " ";

    int color;
    std::cin >> color;


    const auto traffic_light = static_cast<TRAFFIC_LIGHT>(color);
    switch (traffic_light)
    {
        case TRAFFIC_LIGHT::RED:
            std::cout << "Стой\n";
            break;
        case TRAFFIC_LIGHT::YELLOW:
            std::cout << "Жди\n";
            break;
        case TRAFFIC_LIGHT::GREEN:
            std::cout << "Иди\n";
            break;
    }

    return 0;
}
