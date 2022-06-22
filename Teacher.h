
#ifndef __2_TEACHER_H
#define __2_TEACHER_H


#pragma once
#include "Person.h"
#include "Student.h"
#include "Eval.h"
#include <string>
#include <vector>

class Teacher: public Person {
private:
    string subject;
    vector<Person *> pupils;
public:
    Teacher(const string &Full_Name, const unsigned int &age, const unsigned int &c_height, const string &c_sub);

    ~Teacher() {
    }

    string getSubject() const {
        return subject;
    }

    void setSubject(const string &c_sub) {
        subject = c_sub;
    }

    string GetSubject() const;



};


#endif//; //__2_TEACHER_H;
