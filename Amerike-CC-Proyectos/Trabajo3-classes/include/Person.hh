#pragma once
#include <string>
#include<iostream>
#include "Gender.hh"
#include "job.hh"

class Person
{
    private:
        unsigned int armsCount;
        std::string name;
        job* job;
        Gender gender{male};

    public:
        Person(unsigned int armsCount, std::string name, job* job, Gender gender);
        ~Person();

        unsigned int GetArmsCount() const;
        std::string GetName() const;
        job* GetJob() const;
        Gender GetGender() const;
        const char* GetGenderStr() const;
};

