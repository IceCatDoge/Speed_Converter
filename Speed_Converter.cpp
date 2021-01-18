#include <iostream>
#include <string>
#include <cmath>

int main()
{
    //By IceCat (2021)
    std::string choice;
    double number;
    while (true) { //Main loop.
        std::cout << "*Speed Converter*\n\n";
        std::cout << "1 - Convert meters per sec\n2 - Convert kilometers per hour\n3 - Convert miles per hour\n4 - Convert knots\n5 - Convert Mach\n6 - Info\n0 - Quit\n";
        std::cin >> choice;
        if (choice == "0" || choice == "quit" || choice == "Quit") { //Ends program
            return 0;
        }
        else if (choice == "1") {   //Converts meters per second to other formats. Uses <cmath>.
            std::cout << "(m/s)\nFigure to convert: ";
            std::cin >> number;
            if (std::cin.fail()) {  //User input error handling.
                std::cout << "Wrong input!\n";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
            else if (number >= 0) {
                if (number == 1) {  //Checks if plural or singular.
                    std::cout << number << " meter per second is:" << std::endl << std::endl;
                }
                else {
                    std::cout << number << " m/s is:" << std::endl << std::endl;
                }
                std::cout << "Kilometers per hour: " << fma(number, 3.6, 0) << std::endl;
                std::cout << "Miles per hour: " << fma(number, 2.23693629, 0) << std::endl;
                std::cout << "Knots: " << fma(number, 1.94384449, 0) << std::endl;
                std::cout << "Machs: " << fma(number, 0.00293867, 0) << std::endl;
                std::cout << "\nPress enter to continue." << std::endl << std::endl;
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //Waits for user to hit enter before going back to while-loop.
                std::cin.get();
            }
            else { std::cout << "Wrong input!\n"; }

        }
        else if (choice == "2") {   //Converts kilometers per hour to other formats. Uses <cmath>.
            std::cout << "(kph)\nFigure to convert: ";
            std::cin >> number;
            if (std::cin.fail()) {  //User input error handling.
                std::cout << "Wrong input!\n";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
            else if (number >= 0) {
                if (number == 1) {
                    std::cout << number << " kilometer per hour is:" << std::endl << std::endl;
                }
                else {
                    std::cout << number << " kph is:" << std::endl << std::endl;
                }
                std::cout << "Meters per second: " << fma(number, 0.27777778, 0) << std::endl;
                std::cout << "Miles per hour: " << fma(number, 0.62137119, 0) << std::endl;
                std::cout << "Knots: " << fma(number, 0.53995680, 0) << std::endl;
                std::cout << "Machs: " << fma(number, 0.00081629721, 0) << std::endl;
                std::cout << "\nPress enter to continue." << std::endl << std::endl;
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cin.get();
            }
            else { std::cout << "Wrong input!\n"; }
        }
        else if (choice == "3") {   //Converts miles per hour to other formats. Uses <cmath>.
            std::cout << "(mph)\nFigure to convert: ";
            std::cin >> number;
            if (std::cin.fail()) {  //User input error handling.
                std::cout << "Wrong input!\n";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
            else if (number >= 0) {
                if (number == 1) {
                    std::cout << number << " mile per hour is:" << std::endl << std::endl;
                }
                else {
                    std::cout << number << " mph is:" << std::endl << std::endl;
                }
                std::cout << "Meters per second: " << fma(number, 0.44704000, 0) << std::endl;
                std::cout << "Kilometers per hour: " << fma(number, 1.6093440, 0) << std::endl;
                std::cout << "Knots: " << fma(number, 0.86897624, 0) << std::endl;
                std::cout << "Machs: " << fma(number, 0.0013137030, 0) << std::endl;
                std::cout << "\nPress enter to continue." << std::endl << std::endl;
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cin.get();
            }
            else { std::cout << "Wrong input!\n"; }
        }
        else if (choice == "4") {   //Converts knots to other formats. Uses <cmath>.
            std::cout << "(kts)\nFigure to convert: ";
            std::cin >> number;
            if (std::cin.fail()) {  //User input error handling.
                std::cout << "Wrong input!\n";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
            else if (number >= 0) {
                if (number == 1) {
                    std::cout << number << " knot is:" << std::endl << std::endl;
                }
                else {
                    std::cout << number << " kts is:" << std::endl << std::endl;
                }
                std::cout << "Meters per second: " << fma(number, 0.51444445, 0) << std::endl;
                std::cout << "Kilometers per hour: " << fma(number, 1.8520000, 0) << std::endl;
                std::cout << "Miles per hour: " << fma(number, 1.1507795, 0) << std::endl;
                std::cout << "Machs: " << fma(number, 0.0015117824, 0) << std::endl;
                std::cout << "\nPress enter to continue." << std::endl << std::endl;
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cin.get();
            }
            else { std::cout << "Wrong input!\n"; }
        }
        else if (choice == "5") {   //Converts Machs to other formats. Uses <cmath>.
            std::cout << "(Mach)\nFigure to convert: ";
            std::cin >> number;
            if (std::cin.fail()) {  //User input error handling.
                std::cout << "Wrong input!\n";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
            else if (number >= 0) {
                if (number == 1) {
                    std::cout << "Mach " << number << " is:" << std::endl << std::endl;
                }
                else {
                    std::cout << number << " Machs is:" << std::endl << std::endl;
                }
                std::cout << "Meters per second: " << fma(number, 340.29000, 0) << std::endl;
                std::cout << "Kilometers per hour: " << fma(number, 1225.0440, 0) << std::endl;
                std::cout << "Miles per hour: " << fma(number, 761.20705, 0) << std::endl;
                std::cout << "Knots: " << fma(number, 661.47084, 0) << std::endl;
                std::cout << "\nPress enter to continue." << std::endl << std::endl;
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cin.get();
            }
        }
        else if (choice == "6") {   //Displays program info and conversion chart.
            std::cout << "\nWarning: Program calculation precision is not perfect!\nProgram converts speeds of one format to others.\nOne meter per second is: 3.6 kph, ~2.23693629 mph, ~1.94384449 kts, ~0.00293867 Machs.\nOne kilometer per hour is: ~0.27777778 m/s, ~0.62137119 mph, ~0.53995680 kts, ~0.00081629721 Machs.\n";
            std::cout << "One mile per hour is: ~0.44704000 m/s, ~1.6093440 kph, ~0.86897624 kts, ~0.0013137030 Machs.\nOne knot is: ~0.51444445 m/s, ~1.8520000 kph, ~1.1507795 mph, ~0.0015117824 Machs.\nMach one is: ~340.29000 m/s, ~1225.0440 kph, ~761.20705 mph, 661.47084 kts.\n\n";
            std::cout << "\nPress enter to continue." << std::endl << std::endl;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cin.get();
        }
        else { std::cout << "Wrong input!\n"; }
    }
    return 0;
}