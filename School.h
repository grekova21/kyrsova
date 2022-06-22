//
// Created by Admin on 20.06.2022.
//

#ifndef __2_SCHOOL_H
#define __2_SCHOOL_H


#pragma once

#include "Person.h"
#include "Teacher.h"

class School {
private:
    std::vector<*> pupils;
    std::vector<Teacher*> teachers;
public:
    School();
    School(std::vector<Pupil*> pupils, std::vector<Teacher*> teachers);
    void AddPupil(Pupil* p);
    void AddTeacher(Teacher* t);
    std::vector<Pupil*> GetPupilsList() const ;
    std::vector<Teacher*> GetTeachersList() const;
    void DeletePupil(Pupil* p);
};




#endif //__2_SCHOOL_H
