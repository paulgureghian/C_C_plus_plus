#include <iostream>
#include <string>
#include "csv.hpp"

int main() {

    csv::CSVReader reader("../test.csv");
    for (csv::CSVRow &row : reader) {

        auto const name = row["name"].get<std::string>();
        auto const height = row["height"].get<float>();
        std::cout << "Name: " << name << ", Height: " << height << " (cm) " << std::endl;
    }

    return 0;
}
