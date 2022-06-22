//
// Created by Admin on 20.06.2022.
//

#ifndef __2_EVAL_H
#define __2_EVAL_H



#pragma once
#include "Teacher.h"
#include <string>
#include <iostream>

enum EvalType {
    EVAL_UNKNOWN = 0,
    EVAL_HOMEWORK = 1,
    EVAL_TEST = 2,
    EVAL_INDEPENDENT = 3,
    EVAL_EXAM = 4,
    EVAL_FINAL = 5
};

class Eval {
    //friend class Pupil;
protected:
    std::string subject;
    int eval;
    EvalType e_type;
public:
    Eval();
    Eval(std::string subject, EvalType e_type, int eval);
    std::string GetSubject()const;
    EvalType GetType()const;
    int GetEval()const;
};

std::ostream& operator<<(std::ostream& o, const Eval& eval);

std::string EvalTo_String(EvalType type);








#endif //__2_EVAL_H
