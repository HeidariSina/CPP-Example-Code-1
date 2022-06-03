#ifndef Q2_H
#define Q2_H

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <regex>
#include <vector>

namespace q2
{
    struct Patient
    {
        std::string name;
        size_t age;
        size_t smokes;
        size_t area_q;
        size_t alkhol;
    };

    static std::vector<Patient> read_file(std::string filename)
    {
        std::vector<Patient> data{};
        std::stringstream filestream{};
        std::ifstream file(filename);
        filestream << file.rdbuf();
        std::string filetxt = filestream.str();
        std::regex pattern(R"((\w+)\ ?,(\w+)\ ?,(\d+)\,(\d+)\,(\d+)\,(\d+))");
        std::smatch match;
        while (std::regex_search(filetxt, match, pattern))
        {
            Patient pan{};
            std::string fname{match[1]}, lname{match[2]};
            pan.name = fname + " " + lname;
            pan.age = static_cast<size_t>(std::stoi(match[3]));
            pan.smokes = static_cast<size_t>(std::stoi(match[4]));
            pan.area_q = static_cast<size_t>(std::stoi(match[5]));
            pan.alkhol = static_cast<size_t>(std::stoi(match[6]));
            data.push_back(pan);
            filetxt = match.suffix().str();
        }

        return data;
    }
    static void sort(std::vector<Patient> &patients)
    {
        std::sort(patients.begin(), patients.end(),
                  [](Patient a, Patient b)
                  { return (3 * a.age) + (5 * a.smokes) + (2 * a.area_q) + (4 * a.alkhol) > (3 * b.age) + (5 * b.smokes) + (2 * b.area_q) + (4 * b.alkhol); });
    }
}

#endif // Q2_H