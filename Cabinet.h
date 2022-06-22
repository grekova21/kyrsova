//
// Created by Admin on 20.06.2022.
//

#ifndef __2_CABINET_H
#define __2_CABINET_H

#pragma once

#include <string>
#include <iostream>
#include <vector>
#include "Pupil.h"
#include "Teacher.h"

enum CabType {
    CAB_UNKNOWN = 0,
    CAB_DEFAULT = 1,
    CAB_COMP = 2,
    CAB_ACT = 3,
    CAB_GYM = 4
};

class Cabinet {
protected:
    CabType type;
    int cabNo;
    std::vector<Pupil*> p_already;
    std::vector<Teacher*> t_already;
public:
    Cabinet();
    Cabinet(CabType type, int cabNo);
    //void SetNo(int cabNo);
    CabType GetType()const;
    int GetCabNo()const;
    void AddPupil(Pupil* p);
    void AddTeacher(Teacher* t);
};




#endif //__2_CABINET_H
