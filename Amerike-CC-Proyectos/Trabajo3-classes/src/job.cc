#include "job.hh"
#include<iostream>

job::job(const char* name, float salary, JobArea jobArea)
{
    this->name=name;
    this->salary=salary;
    this->jobArea=jobArea;
}

job::~job()
{
    std::cout << "Job Deleted" << std::endl;
}

const char* job::GetName() const
{
    return name;
}
float job::GetSalary() const
{
    return salary;
}
JobArea job::GetJobArea() const
{
    return jobArea;
}
const char* job::GetJobAreaStr() const
{
    return jobArea == IT ? "IT" : jobArea == HR  ? "HR" : jobArea == Sales ? "Sales" : jobArea == Desing ? "Desing" : "Media";
}