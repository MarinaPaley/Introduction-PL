#include <iostream>

/**
 * \brief Пользовательский ввод количества членов последовательности.
 * \param message Мотивационное сообщение.
 * \return Размер последовательности.
 * \exception std::invalid_argument В случае, если размер последовательности меньше 1.
 */
size_t get_sequence_size(const std::string& message);

/**
 * \brief Рассчитывает значение рекуррентного члена в зависимости от индекса (\a index).
 * \param index Индекс, номер итерации.
 * \return Значение рекуррентного члена.
 */
double get_recurrent_member(const size_t index) noexcept;

/**
 * \brief Точка входа в программу.
 * \return 0 – в случае успеха,<br/>1 – в противном случае.
 */
int main() noexcept
{
    try
    {
        const auto size = get_sequence_size("Введите количество членов последовательности ");

        return 0;
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
        return 1;
    }
}

size_t get_sequence_size(const std::string& message)
{
    std::cout << message;
    int size = 0;
    std::cin >> size;
    if (size < 1)
    {
        throw std::invalid_argument("Значение должно быть больше 1!");
    }

    return size;
}

double get_recurrent_member(const size_t index) noexcept
{
    return 42;
}
