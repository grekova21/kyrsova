#include "Cabinet.h"

enum CabType;
Cabinet::Cabinet() {
    type = CAB_UNKNOWN;
    cabNo = 0;
}
void Cabinet::AddPupil(Person *p) {
    p_already.push_back(p);
}
void Cabinet::AddTeacher(Teacher* t) {
    t_already.push_back(t);
}
Cabinet::Cabinet(CabType type, int cabNo) {
    this->type = type;
    this->cabNo = cabNo;
}
CabType Cabinet::GetType()const {
    return type;
}
int Cabinet::GetCabNo()const {
    return cabNo;
}

std::ostream& operator<<(std::ostream& o, const Cabinet& type) {
    o << "Cabinet �: " << type.GetCabNo() << "  Type of work: ";
    if (type.GetType() == 1) {
        o << "Default cabinet";
    }
    else if (type.GetType() == 2) {
        o << "Computer cabinet";
    }
    else if (type.GetType() == 3) {
        o << "Act cabinet";
    }
    else if (type.GetType() == 4) {
        o << "Gym class";
    }
    return o;
}
