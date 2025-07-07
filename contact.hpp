#pragma once
#include<string>
#include<vector>
struct contact
{
    std::string name;
    std::string phone;
    std::string email;
};

class ContactBook { 
public:
    void add_contact();
    void delete_contact();
    void search_contact();
    void view_contact();
    void save_to_file(const std::string& filename);
    void load_from_file(const std::string& filename);
};
