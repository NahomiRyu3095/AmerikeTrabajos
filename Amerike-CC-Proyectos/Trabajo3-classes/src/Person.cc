#include "Person.hh"

Person::Person(unsigned int armsCount, std::string name, job* Job, Gender gender);
{
    this->armsCount = armsCount;
    this->name = name;
    this->Job = Job;
    this->gender = gender;
}

Person::Person()
{
    std::cout << "Person deleted" << std::endl;
    delete job;
}

unsigned int Person::GetArmsCount() const;//Solo lectura
{
    return armsCount;
}
std:: string Person::GetName() const;
{
    return name;
}
job* Person::GetJob()  const;
{
    return Job;
}
Gender Person::GetGender() const;
{
    return gender;
}
const char* Person::GetGenderStr() const;
{
    return gender ==0? "Male" : gender== 1 ? "Female" : "None";
}