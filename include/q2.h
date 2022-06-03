// #ifndef Q2_H
// #define Q2_H

// #include <iostream>
// #include <fstream>
// #include <string>
// #include <vector>
// #include <sstream>

// namespace q2
// {
//     struct Patient
//     {
//         Patient(std::string name,
//                 size_t age,
//                 size_t smokes,
//                 size_t area_q,
//                 size_t alkhol) : name{name},
//                                  age{age},
//                                  smokes{smokes},
//                                  area_q{area_q},
//                                  alkhol{alkhol} {}
//         std::string name;
//         size_t age;
//         size_t smokes;
//         size_t area_q;
//         size_t alkhol;
//     };

//     std::vector<Patient> read_file(std::string filename)
//     {
//         std::vector<Patient> data;
//         std::fstream fin;
//         fin.open(filename, std::ios::in);
//         std::vector<std::string> row;
//         std::vector<std::vector<std::string>> alldata;
//         std::string line, word, temp;
//         getline(fin, line);
//         getline(fin, line);

//         while (fin >> temp)
//         {
//             row.clear();
//             getline(fin, line);

//             std::stringstream s(line);
//             while (getline(s, word, ','))
//             {
//                 row.push_back(word);
//             }
//             alldata.push_back(row);
//         }
//         for (auto i : alldata)
//         {

//             Patient pa;
//             if (isspace(i[0].back()))
//             {
//                 pa.name = i[0] + i[1];
//             }
//             else
//             {
//                 pa.name = i[0] + " " + i[1];
//             }
//             pa.age = stoi(i[2]);
//             pa.smokes = stoi(i[3]);
//             pa.area_q = stoi(i[4]);
//             data.push_back(pa);
//         }
//         return data;
//     }
// }
// #endif // Q2_H