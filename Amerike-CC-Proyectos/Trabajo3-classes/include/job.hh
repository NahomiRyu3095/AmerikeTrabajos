#pragma once
#include "JobArea.hh"

class job
{
private:
    const char* name;
    float salary;
    JobArea jobArea{IT};
    const char* JobAreaStr;
public:
    job(const char* name, float salary, JobArea jobArea);
    ~job();
    const char* GetName() const;
    float GetSalary() const;
    JobArea GetJobArea() const;
    const char* GetJobAreaStr() const;
};

