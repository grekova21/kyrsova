#include "School.h"

School::School() {
    pupils = {};
    teachers = {};
}

School::School(std::vector<Person*> pupils, std::vector<Teacher*> teachers) {
    this->pupils = pupils;
    this->teachers = teachers;
}

void School::AddPupil(int *p)  {
    pupils.push_back(p);
}

void School::AddTeacher(Teacher* t) {
    teachers.push_back(t);
}

std::vector<Person*> School::GetPupilsList() const {
    return pupils;
}

std::vector<Teacher*> School::GetTeachersList() const {
    return teachers;
}

void School::DeletePupil(Person* p) {
    delete p;
    p = nullptr;
}

