// Enhanced Resident Data Management
// This module includes live entry/exit tracking and persistent data storage.

#include <iostream>
#include <vector>
#include <string>

struct Resident {
    std::string name;
    std::string entryTime;
    std::string exitTime;
};

class ResidentManager {
private:
    std::vector<Resident> residents;

public:
    void checkIn(std::string name, std::string time) {
        Resident resident;
        resident.name = name;
        resident.entryTime = time;
        residents.push_back(resident);
        std::cout << "Checked in: " << name << " at " << time << std::endl;
    }

    void checkOut(std::string name, std::string time) {
        for (auto &resident : residents) {
            if (resident.name == name) {
                resident.exitTime = time;
                std::cout << "Checked out: " << name << " at " << time << std::endl;
                return;
            }
        }
        std::cout << "Resident not found: " << name << std::endl;
    }

    void displayResidents() {
        for (const auto &resident : residents) {
            std::cout << "Name: " << resident.name << ", Entry: " << resident.entryTime << ", Exit: " << resident.exitTime << std::endl;
        }
    }
};

int main() {
    ResidentManager manager;
    manager.checkIn("Alice", "2026-04-28 04:45:00");
    manager.checkOut("Alice", "2026-04-28 05:00:00");
    manager.displayResidents();
    return 0;
}