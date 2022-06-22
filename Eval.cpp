#include "Eval.h"

enum EvalType;
Eval::Eval() {
    subject = "Unknown";
    eval = 0;
    e_type = EVAL_UNKNOWN;
}
Eval::Eval(std::string subject, EvalType e_type, int eval) {
    this->subject = subject;
    this->e_type = e_type;
    this->eval = eval;
}
std::string Eval::GetSubject()const {
    return subject;
}
EvalType Eval::GetType()const {
    return e_type;
}
int Eval::GetEval()const {
    return eval;
}

std::ostream& operator<<(std::ostream& o, const Eval& eval) {
    o << "Subject: " << eval.GetSubject() << "  Type of work: ";
    o << EvalTo_String(eval.GetType());
    o << " Eval: " << eval.GetEval() << std::endl;
    return o;
}

std::string EvalTo_String(EvalType type) {
    switch (type) {
        case EVAL_HOMEWORK:
            return "Homework";
            break;
        case EVAL_TEST:
            return "Test";
            break;
        case EVAL_INDEPENDENT:
            return "Independent";
            break;
        case EVAL_EXAM:
            return "Exam";
            break;
        case EVAL_FINAL:
            return "Final";
            break;
    }
}
