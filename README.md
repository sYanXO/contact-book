# Contact Book

A simple command-line Contact Book application written in C++.

## Features
- Add, view, search, and delete contacts
- Save contacts to a file
- Load contacts from a file

## Usage

### Build

Ensure you have `g++` installed. Then run:

```bash
make
```

This will generate an executable named `contact-book`.

### Run

```bash
./contact-book
```

### Menu Options
1. **Add Contact**: Add a new contact by entering name, phone, and email.
2. **Delete Contact**: Delete a contact by name.
3. **View Contacts**: Display all saved contacts.
4. **Search Contact**: Search for a contact by name.
5. **Save to File**: Save all contacts to `contacts.txt`.
6. **Load from File**: Load contacts from `contacts.txt`.
7. **Exit**: Exit the application.

## File Structure
- `main.cpp` - Main program and menu logic
- `contact.hpp` - Contact and ContactBook class definitions
- `methods.cpp` - Implementation of ContactBook methods
- `Makefile` - Build instructions

## Notes
- Contacts are saved in plain text, one contact per three lines (name, phone, email).
- No input validation is currently performed.
- File operations use `contacts.txt` by default.

## License
MIT License
