# 📇 Contact Management System

A simple C++ application to manage contacts. This program allows users to add new contacts and view the list of existing contacts.

## Features ✨

- **Add Contact**: Allows the user to add a new contact by entering the name, phone number, and email. 📱💻
- **View Contacts**: Displays a list of all stored contacts. 👀
- **Exit**: Exits the program. 🚪

## Prerequisites ⚙️

- C++ compiler (e.g., GCC, Clang, MSVC) to compile the program.

## Files 📂

- `TASK_3.CPP`: The main C++ file containing the `Contact` and `ContactManager` classes and the logic for adding/viewing contacts.
- `README.md`: This readme file.

## Compilation and Execution 🏗️

1. **Compilation**:
   To compile the program, run the following command in your terminal (assuming you're using GCC):

   ```bash
   g++ TASK_3.CPP -o contact_manager
   ```

2. **Execution**:
   After compiling, execute the program using the following command:

   ```bash
   ./contact_manager
   ```

## How to Use 📝

1. **Add Contact**:
   - Select option `1` from the menu.
   - Enter the name, phone number, and email of the contact when prompted. 📲

2. **View Contacts**:
   - Select option `2` from the menu to view all stored contacts. 📋

3. **Exit**:
   - Select option `3` to exit the program. 🚪

## Example Interaction 💬

```
Menu:
1. Add Contact
2. View Contacts
3. Exit
Select an option: 1
Enter name: John Doe
Enter phone number: 1234567890
Enter email: john.doe@example.com

Contact added successfully! ✅

Menu:
1. Add Contact
2. View Contacts
3. Exit
Select an option: 2
Contacts List:
Name: John Doe
Phone: 1234567890
Email: john.doe@example.com
```



