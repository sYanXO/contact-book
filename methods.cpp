#include "contact.hpp"
#include <algorithm>
#include <fstream>
#include <iostream>




void ContactBook :: add_contact(){
    Contact c;

    std::cout<<"Enter name"<<std::endl;
    std::getline(std::cin,c.name);

    std::cout<<"Enter phone"<<std::endl;
    std::getline(std::cin,c.phone);

    std::cout<<"Enter email"<<std::endl;
    std::getline(std::cin,c.email);

    contacts.push_back(c);

    std::cout<<"Contact Added"<<std::endl;


}

void ContactBook :: delete_contact(){

}

void ContactBook :: search_contact(){

}

void ContactBook :: view_contact(){
    if(contacts.empty()){
        std::cout<<"\nNo Contacts to show.\n";
    }
    int index = 1;

    std::cout << "\n--- Contact List ---\n";

    for(const auto& c: contacts){
        std::cout<<index++<<"  "<<c.name<<std::endl;
        std::cout<<"Phone : "<<c.phone<<std::endl;
        std::cout<<"Email : "<<c.email<<std::endl;
        std::cout<<"---------------------\n";
    }

}

void ContactBook :: save_to_file(const std::string& filename){

}

void ContactBook :: load_from_file(const std::string& filename){

}