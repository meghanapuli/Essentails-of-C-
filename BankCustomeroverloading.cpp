#include <iostream>
#include <string>

class BankCustomer {
private:
    std::string name;
    std::string adharNumber;
    std::string panNumber;
    std::string phoneNumber;

public:
    // Constructor
    BankCustomer(const std::string& nameArg, const std::string& adharNumberArg,
                 const std::string& panNumberArg, const std::string& phoneArg)
        : name(nameArg), adharNumber(adharNumberArg), panNumber(panNumberArg), phoneNumber(phoneArg) {}

    // Overload << operator
    friend std::ostream& operator<<(std::ostream& os, const BankCustomer& customer) {
        os << "Name: " << customer.name << "\n"
           << "Adhar Number: " << customer.adharNumber << "\n"
           << "PAN Number: " << customer.panNumber << "\n"
           << "Phone Number: " << customer.phoneNumber;
        return os;
    }
};

int main() {
    BankCustomer customer("John Doe", "1234-5678-9123", "ABCDE1234F", "9876543210");

    // Using overloaded << to print BankCustomer object
    std::cout << customer << std::endl;  // This will print using the overloaded operator

    return 0;
}
