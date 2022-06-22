//
// Created by Admin on 20.06.2022.
//

#ifndef __2_STUDENT_H
#define __2_STUDENT_H


#pragma once

#include <vector>
#include <iostream>
#include "Person.h"
#include "Eval.h"

class Eval;
class Student : public Person
{
private:
    std::vector<Eval> evals;
    std::string grade;
public:
    Student (const string& c_Full_name, const unsigned int& c_age, const unsigned int& c_height, const std::string grade );
    ~Student()
    {
    }
    unsigned int getGrade()
    {
        return grade;
    }

    std::vector<Eval> GetEvals()
    {
        return evals;
    };
    void AddEval(const Eval& e);
};




#endif //__2_STUDENT_H
