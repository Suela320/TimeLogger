#ifndef LOGGER_H
#define LOGGER_H

#include <string>
#include <vector>

struct Activity {
    std::string name;
    int duration;
};

class ActivityLogger {
public:
    void addActivity(const std::string& name, int duration);
    std::vector<Activity> listActivities() const;
    void displayActivities() const;
    void searchActivity(const std::string& keyword) const;

private:
    const std::string filePath = "data/logs.txt";
    

};

#endif
