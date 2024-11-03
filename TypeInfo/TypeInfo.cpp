#include <iostream>

int main() {
    setlocale(LC_ALL, "RU");
    double distance;
    double time;

    std::cout << "Введите расстояние до аэропорта (в км): ";
    std::cin >> distance;

    std::cout << "Введите время, за которое нужно доехать (в часах): ";
    std::cin >> time;

    if (time <= 0) {
        std::cout << "Ошибка: время должно быть больше нуля." << std::endl;
        return 1;
    }

    double speed = distance / time;

    std::cout << "Необходимая скорость: " << speed << " км/ч." << std::endl;

    return 0;
}
//--------------------------------------------------------------------------------------------------------------


#include <iostream>

int main() {
    setlocale(LC_ALL, "RU");
    int startHour, startMinute, startSecond;
    int endHour, endMinute, endSecond;

    std::cout << "Введите время начала использования скутера (часы, минуты, секунды):\n";
    std::cout << "Часы: ";
    std::cin >> startHour;
    std::cout << "Минуты: ";
    std::cin >> startMinute;
    std::cout << "Секунды: ";
    std::cin >> startSecond;

    std::cout << "Введите время завершения использования скутера (часы, минуты, секунды):\n";
    std::cout << "Часы: ";
    std::cin >> endHour;
    std::cout << "Минуты: ";
    std::cin >> endMinute;
    std::cout << "Секунды: ";
    std::cin >> endSecond;

    long startTimeInSeconds = startHour * 3600 + startMinute * 60 + startSecond;
    long endTimeInSeconds = endHour * 3600 + endMinute * 60 + endSecond;

    long durationInSeconds = endTimeInSeconds - startTimeInSeconds;

    if (durationInSeconds < 0) {
        std::cout << "Ошибка: Время завершения должно быть позже времени начала." << std::endl;
        return 1;
    }

    long durationInMinutes = durationInSeconds / 60;

    const double costPerMinute = 2.0;
    double totalCost = durationInMinutes * costPerMinute;

    std::cout << "Стоимость поездки: " << totalCost << " гривен." << std::endl;

    return 0;
}

//-----------------------------------------------------------------------------------------------------------------------------


#include <iostream>
#include <iomanip>

int main() {
    setlocale(LC_ALL, "RU");
    double distance;
    double fuelConsumption;
    double fuelPrice1, fuelPrice2, fuelPrice3;

    std::cout << "Введите расстояние в километрах: ";
    std::cin >> distance;

    std::cout << "Введите расход бензина на 100 км (в литрах): ";
    std::cin >> fuelConsumption;

    std::cout << "Введите стоимость первого вида бензина (в рублях за литр): ";
    std::cin >> fuelPrice1;

    std::cout << "Введите стоимость второго вида бензина (в рублях за литр): ";
    std::cin >> fuelPrice2;

    std::cout << "Введите стоимость третьего вида бензина (в рублях за литр): ";
    std::cin >> fuelPrice3;

    double totalFuelUsed = (fuelConsumption / 100) * distance;

    double cost1 = totalFuelUsed * fuelPrice1;
    double cost2 = totalFuelUsed * fuelPrice2;
    double cost3 = totalFuelUsed * fuelPrice3;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\nСравнительная таблица стоимости поездки:\n";
    std::cout << "-------------------------------------------------\n";
    std::cout << "| Вид бензина | Стоимость поездки (руб)        |\n";
    std::cout << "-------------------------------------------------\n";
    std::cout << "| 1           | " << cost1 << "                      |\n";
    std::cout << "| 2           | " << cost2 << "                      |\n";
    std::cout << "| 3           | " << cost3 << "                      |\n";
    std::cout << "-------------------------------------------------\n";

    return 0;
}