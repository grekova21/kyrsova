

#ifndef __2_PERSON_H
#define __2_PERSON_H


#pragma once
#include<string>
#include<stdexcept>
#include<vector>
#include<iostream>
using namespace std;

class Person
{
private:
    string Full_Name;
    unsigned int age;
    unsigned int height;

public:
    Person(const string &c_Full_name, const unsigned int &c_age, const unsigned int &c_height, string basicString);
    virtual ~Person()
    {
    }
    virtual string getFull_Name() const
    {
        return Full_Name;
    }
    virtual int getAge() const
    {
        return age;
    }
    virtual int getHeight() const
    {
        return height ;
    }
    virtual void Info() const;


};


#endif //__2_PERSON_H
