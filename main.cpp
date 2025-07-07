#include "contact.hpp"
#include<iostream>

void show_menu(){
    std::cout << "\n--- Contact Book ---\n";
    std::cout << "1. Add Contact\n";
    std::cout << "2. Delete Contact\n";
    std::cout << "3. View Contacts\n";
    std::cout << "4. Search Contact\n";
    std::cout << "5. Save to File\n";
    std::cout << "6. Load from File\n";
    std::cout << "7. Exit\n";
    std::cout << "Choose an option: ";
}

int main(){
    ContactBook book;
    int choice;

    while (true)
    {
        show_menu();
        std::cin>>choice;
        std::cin.ignore();

        switch(choice){
            case 1:
                    book.add_contact();
                    break;
            case 2:
                    book.delete_contact();
                    break;
            case 3:
                    book.view_contact();
                    break;
            case 4:
                    book.search_contact();
                    break;
            case 5:
                    book.save_to_file("contacts.txt");
                    break;
            case 6:
                    book.load_from_file("contacts.txt");
                    break;
            case 7:
                    std::cout<<"\n Exiting.......\n";
                    return 0;
            default:
                    std::cout<<"Invalid Choice\n";
        }
    }
    
}
