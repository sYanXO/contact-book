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

void ContactBook::delete_contact() {
    if (contacts.empty()) {
        std::cout << "No contacts to delete.\n";
        return;
    }

    std::string query;
    std::cout << "Enter name of contact to delete: ";
    std::cin.ignore();
    std::getline(std::cin, query);

    auto it = std::remove_if(contacts.begin(), contacts.end(),
        [&query](const Contact& c) {
            return c.name == query;
        });

    if (it != contacts.end()) {
        contacts.erase(it, contacts.end());
        std::cout << "Contact deleted.\n";
    } else {
        std::cout << "No contact found with that name.\n";
    }
}


void ContactBook::search_contact() {
    if (contacts.empty()) {
        std::cout << "No contacts to search.\n";
        return;
    }

    std::string query;
    std::cout << "Enter name to search: ";
    std::cin.ignore();
    std::getline(std::cin, query);

    bool found = false;

    for (const auto& c : contacts) {
        if (c.name == query) {
            std::cout << "\nContact found:\n";
            std::cout << "Name : " << c.name << "\n";
            std::cout << "Phone: " << c.phone << "\n";
            std::cout << "Email: " << c.email << "\n";
            found = true;
        }
    }

    if (!found) {
        std::cout << "No contact found with that name.\n";
    }
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
    std::ofstream out(filename);
    if(!out){
        std::cout<<"Error opening file for writing.\n";
        return;
    }
    for(const auto& c: contacts){
        out <<c.name<<"\n"
            <<c.phone<<"\n"
            <<c.email<<"\n";
    }
    std::cout << "Contacts saved to file.\n";

}

void ContactBook::load_from_file(const std::string& filename) {
    std::ifstream in(filename);
    if (!in) {
        std::cerr << "Error opening file for reading.\n";
        return;
    }

    contacts.clear(); 

    Contact c;
    while (std::getline(in, c.name) &&
           std::getline(in, c.phone) &&
           std::getline(in, c.email)) {
        contacts.push_back(c);
    }

    std::cout << "Contacts loaded from file.\n";
}
