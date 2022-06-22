#include "Student.h"

Student::Student(const string &c_Full_name, const unsigned int &c_age, const unsigned int &c_height, const string& c_grade)
{
    grade = c_grade;
}

void setSubject(const string& c_sub)
{
    subject = c_sub;
}
void Pupil::AddEval(const Eval& e)
{
    evals.push_back(e);
}

vector<Eval> Pupil::GetEvals()
{
    return evals;
}


}