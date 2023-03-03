#include <iostream>
#include <string>

using namespace std;

struct Contact {
    string firstName;
    string lastName;
    string phoneNumber;
    string email;
    string streetAddress;
    string city;
    string state;
    string postalCode;
};

void displayContactInfo(Contact contact) {
    cout << "Name: " << contact.firstName << " " << contact.lastName << endl;
    cout << "Phone: " << contact.phoneNumber << endl;
    cout << "Email: " << contact.email << endl;
    cout << "Address: " << contact.streetAddress << endl;
    cout << "City: " << contact.city << endl;
    cout << "State: " << contact.state << endl;
    cout << "Postal Code: " << contact.postalCode << endl;
    cout << endl;
}

int main() {
    // Create a Contact struct and initialize it with values
    Contact colleague = { "John", "Doe", "555-1234", "johndoe@email.com",
                         "123 Main St", "Anytown", "CA", "12345" };

    // Display the contact info
    displayContactInfo(colleague);

    return 0;
}
