#include <iostream>
#include "logger.h"

int main() {
    ActivityLogger logger;
    while (true) {
        std::cout << "\n1. Shto aktivitet\n2. Shfaq aktivitete\n3. Dil\nZgjedhja: ";
        int ch; if (!(std::cin >> ch)) break;
        if (ch == 1) {
            std::cin.ignore();
            std::string name; int dur;
            std::cout << "Emri i aktivitetit: "; std::getline(std::cin, name);
            std::cout << "Kohëzgjatja (min): ";  std::cin >> dur;
            if (dur < 0) {
                std::cout << " Kohëzgjatja nuk mund të jetë negative!\n";
                continue;
            }
            logger.addActivity(name, dur);
        } else if (ch == 2) {
            logger.displayActivities();
        } else if (ch == 3) break;
        else std::cout << " Zgjedhje e pavlefshme!\n";
    }
    std::cout << "\033[1;32m✅ Aktiviteti u shtua me sukses!\033[0m\n";
    return 0;
    //test

   

}