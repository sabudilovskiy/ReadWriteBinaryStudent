#include <iostream>
#include "Support.h"
#include "Student.h"
int main() {
    std::fstream file;
    file.open("generate.txt", std::ios::binary|std::ios::out);
    std::cout << "generate.txt:\n";
    for (int i = 0; i < 50; i++){
        Student temp(my_random_family(), my_random_double(2.0, 5.0));
        file << temp;
        std::cout << temp.get_fio() << ' ' << temp.get_average_mark() << '\n';
        file.flush();
    }
    file.close();
    file.open("in.txt", std::ios::binary|std::ios::in);
    std::cout << "in.txt:\n";
    while (!file.eof()){
        Student temp;
        file >> temp;
        if (!file.fail()) std::cout << temp.get_fio() << ' ' << temp.get_average_mark() << '\n';
    }
    std::cout << '\n';
    file.close();
    for (int i = 0; i < 5; i++){
        file.close();
        file.open(std::to_string(i) + ".txt", std::ios::binary|std::ios::in);
        if (file.is_open()){
            std::cout << std::to_string(i) + ".txt" << ":\n";
            while (!file.eof()){
                Student temp;
                file >> temp;
                if (!file.fail()) std::cout << temp.get_fio() << ' ' << temp.get_average_mark() << '\n';
            }
            std::cout << '\n';
        }
    }
}
