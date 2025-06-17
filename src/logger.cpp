#include "logger.h"
#include <fstream>
#include <iostream>
#include <sstream>

void ActivityLogger::addActivity(const std::string& name, int duration) {
    std::ofstream f(filePath, std::ios::app);
    if (!f) {
        std::cerr << "Nuk u hap skedari!\n";
        return;
    }
    f << name << ';' << duration << '\n';
    std::cout << "\033[1;32m Aktiviteti u shtua me sukses!\033[0m\n";
}

std::vector<Activity> ActivityLogger::listActivities() const {
    std::vector<Activity> v;
    std::ifstream f(filePath);
    if (!f) return v;
    std::string line;
    while (std::getline(f, line)) {
        std::stringstream ss(line);
        std::string name, durStr;
        if (std::getline(ss, name, ';') && std::getline(ss, durStr)) {
            v.push_back({name, std::stoi(durStr)});
        }
    }
    return v;
}

void ActivityLogger::displayActivities() const {
    auto v = listActivities();
    if (v.empty()) {
        std::cout << "␀ S’ka të dhëna.\n";
        return;
    }
    std::cout << "\n Lista e aktiviteteve:\n";
    int total = 0;
    for (const auto& a : v) {
        std::cout << "- " << a.name << " — " << a.duration << " min\n";
        total += a.duration;
    }
    std::cout << "\n Koha totale: " << total << " minuta.\n";

    int total = 0;
    for (const auto& a : v) total += a.duration;
    std::cout << "\n⏱️ Koha totale: " << total << " minuta.\n";

}
void ActivityLogger::searchActivity(const std::string& keyword) const {
    auto v = listActivities();
    bool found = false;
    std::cout << "\n Rezultatet e kërkimit për \"" << keyword << "\":\n";
    for (const auto& a : v) {
        if (a.name.find(keyword) != std::string::npos) {
            std::cout << "- " << a.name << " — " << a.duration << " min\n";
            found = true;
        }
    }
    if (!found) {
        std::cout << " Nuk u gjet asnjë aktivitet që përputhet.\n";
    }
}

