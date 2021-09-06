#include<iostream>
#include "Person.hh"
#include "Node.hh"

int main()
{
    Person* person1{new Person(2, "Jesus", "Developer", new job("Developer", 15000.f, IT),  none)};

    Node* node1{new Node(new person(2, "Jesus", "Developer", new job("Developer", 15000.f, IT),  none))};
    Node* node2{new Node(new person(2, "Daniel", "Developer", new job("Developer", 19000.f, IT),  male))};
    Node* node3{new Node(new person(2, "Alma", "Developer", new job("Media", 10000.f, Media),  female))};
    Node* node4{new Node(new person(2, "Izzi", "Developer", new job("Sales", 16000.f, Sales),  female))};
    node1->nextNode = node2;
    node2->nextNode = node3;
    node3->nextNode = node4;

    //std::cout << node1->Getperson()->GetName() << std::endl;
    //std::cout << node1->nextNode->Getperson()->GetName() << std::endl;
    //std::cout << node1->nextNode->nextNode->Getperson()->GetName() << std::endl;
    //std::cout << node1->nextNode->nextnode->NextNode->Getperson()->GetName() << std::endl;

    Node* currentnode{node1};
    std::cout << "Person list" << std::endl;

    while (currentnode)//Tiene aldgo adentro? Existe? No esta vacio?
    {
        std::cout << "Person Name:" << currentnode->Getperson()->GetName() << std::endl;
        std::cout << "Person Job:" << currentnode->Getperson()->GetJob() << std::endl;
        std::cout << "Person Gender:" << currentnode->Getperson()->GetGenderStr() << std::endl;
        std::cout << "Person Salary:" << currentnode->Getperson()->GetJob()->GetSalary() << std::endl;
        std::cout << "Person Job Area:" << currentnode->Getperson()->GetJob()->GetjobAreaStr() << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
        currentnode = currentnode->nextNode;
    }
    

    //std:: cout << person1->GetName() << std:: endl;
    //std:: cout << person1->GetArmsCount() << std:: endl;
    //std:: cout << person1->GetGenderStr() << std:: endl;
    //std:: cout << "Job Details:" << std::endl;
    //std:: cout << person1->GetJob()->GetName() << std:: endl;
    //std:: cout << person1->GetJob()->GetJobAreaStr() << std:: endl;
    //std:: cout << person1->GetJob()->GetSalary() << std:: endl;

    delete person1;
    std:: cin.get();
    return 0;
}
