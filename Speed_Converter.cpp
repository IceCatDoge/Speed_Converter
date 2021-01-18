#include <iostream>
#include <string>
#include <cmath>

int main()
{
    //By IceCat (2021)
    std::string choice;
    double number;
    while (true) {
        std::cout << "*Speed Converter*\n\n";
        std::cout << "1 - Convert meters per sec\n2 - Convert kilometers per hour\n3 - Convert miles per hour\n4 - Convert knots\n5 - Convert Mach\n6 - Info\n0 - Quit\n";
        std::cin >> choice;
        if (choice == "0" || choice == "quit" || choice == "Quit") {
            return 0;
        }
        else if (choice == "1") {
            std::cout << "(m/s)\nFigure to convert: ";
            std::cin >> number;
            if (std::cin.fail()) {
                std::cout << "Wrong input!\n";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
            else if (number >= 0) {
                std::cout << "Kilometers per hour: " << fma(number, 3.6, 0) << std::endl;
                std::cout << "Miles per hour: " << fma(number, 2.23693629, 0) << std::endl;
                std::cout << "Knots: " << fma(number, 1.94384449, 0) << std::endl;
                std::cout << "Machs: " << fma(number, 0.00293867, 0) << std::endl << std::endl;
            }
            else { std::cout << "Wrong input!\n"; }

        }
        else if (choice == "2") {
            std::cout << "(kph)\nFigure to convert: ";
            std::cin >> number;
            if (std::cin.fail()) {
                std::cout << "Wrong input!\n";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
            else if (number >= 0) {
                std::cout << "Meters per second: " << fma(number, 0.27777778, 0) << std::endl;
                std::cout << "Miles per hour: " << fma(number, 0.62137119, 0) << std::endl;
                std::cout << "Knots: " << fma(number, 0.53995680, 0) << std::endl;
                std::cout << "Machs: " << fma(number, 0.00081629721, 0) << std::endl << std::endl;
            }
            else { std::cout << "Wrong input!\n"; }
        }
        else if (choice == "3") {
            std::cout << "(mph)\nFigure to convert: ";
            std::cin >> number;
            if (std::cin.fail()) {
                std::cout << "Wrong input!\n";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
            else if (number >= 0) {
                std::cout << "Meters per second: " << fma(number, 0.44704000, 0) << std::endl;
                std::cout << "Kilometers per hour: " << fma(number, 1.6093440, 0) << std::endl;
                std::cout << "Knots: " << fma(number, 0.86897624, 0) << std::endl;
                std::cout << "Machs: " << fma(number, 0.0013137030, 0) << std::endl << std::endl;
            }
            else { std::cout << "Wrong input!\n"; }
        }
        else if (choice == "4") {
            std::cout << "(knots)\nFigure to convert: ";
            std::cin >> number;
            if (std::cin.fail()) {
                std::cout << "Wrong input!\n";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
            else if (number >= 0) {
                std::cout << "Meters per second: " << fma(number, 0.51444445, 0) << std::endl;
                std::cout << "Kilometers per hour: " << fma(number, 1.8520000, 0) << std::endl;
                std::cout << "Miles per hour: " << fma(number, 1.1507795, 0) << std::endl;
                std::cout << "Machs: " << fma(number, 0.0015117824, 0) << std::endl << std::endl;
            }
            else { std::cout << "Wrong input!\n"; }
        }
        else if (choice == "5") {
            std::cout << "(Mach)\nFigure to convert: ";
            std::cin >> number;
            if (std::cin.fail()) {
                std::cout << "Wrong input!\n";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
            else if (number >= 0) {
                std::cout << "Meters per second: " << fma(number, 340.29000, 0) << std::endl;
                std::cout << "Kilometers per hour: " << fma(number, 1225.0440, 0) << std::endl;
                std::cout << "Miles per hour: " << fma(number, 761.20705, 0) << std::endl;
                std::cout << "Knots: " << fma(number, 661.47084, 0) << std::endl << std::endl;
            }
        }
        else if (choice == "6") {
            std::cout << "\nWarning: Program calculation precision is not perfect!\nOne meter per second is: 3.6 kph, ~2.23693629 mph, ~1.94384449 knots, ~0.00293867 Machs.\nOne kilometer per hour is: ~0.27777778 m/s, ~0.62137119 mph, ~0.53995680 knots, ~0.00081629721 Machs.\n";
            std::cout << "One mile per hour is: ~0.44704000 m/s, ~1.6093440 kph, ~0.86897624 knots, ~0.0013137030 Machs.\nOne knot is: ~0.51444445 m/s, ~1.8520000 kph, ~1.1507795 mph, ~0.0015117824 Machs.\nMach one is: ~340.29000 m/s, ~1225.0440 kph, ~761.20705 mph, 661.47084 knots.\n\n";
        }
        else { std::cout << "Wrong input!\n"; }
    }
    return 0;
}