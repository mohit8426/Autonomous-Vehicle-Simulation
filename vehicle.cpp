// vehicleDynamics.cpp
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

class Point {
public:
    int x, y;
    Point(int x, int y) : x(x), y(y) {}
};

std::vector<Point> readPathFromFile(const std::string& filePath) {
    // ... (same as before)
}

void writeVehicleDataToFile(const std::vector<Point>& vehicleData) {
    std::ofstream file("vehicleData.txt");
    for (const auto& point : vehicleData) {
        file << point.x << "," << point.y << std::endl;
    }
}

int main() {
    auto path = readPathFromFile("path.txt");
    std::vector<Point> vehicleData;

    for (const auto& point : path) {
        // Simulate vehicle movement
        vehicleData.push_back(point); // Example: push back the current position
    }

    writeVehicleDataToFile(vehicleData);
    return 0;
}
