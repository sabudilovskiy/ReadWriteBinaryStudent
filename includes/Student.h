//
// Created by MRV on 5/17/2022.
//

#ifndef READWRITEBINARYSTUDENT_STUDENT_H
#define READWRITEBINARYSTUDENT_STUDENT_H
#include <string>
#include <fstream>

class Student{
    char FIO[20];
    double average_mark;
public:
    Student(){

    }
    Student(std::string fio, double average_mark):average_mark(average_mark){
        strcpy_s(FIO, fio.data());
    }
    const char *get_fio() const;
    double get_average_mark() const;
    void set_average_mark(double average_mark);
    friend std::fstream &operator>>(std::fstream &file, Student &student);
    friend std::fstream &operator<<(std::fstream &file, Student &student);
};
#endif //READWRITEBINARYSTUDENT_STUDENT_H
