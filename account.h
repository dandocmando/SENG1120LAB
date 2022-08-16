// This defines a class that represents an
// account object for double numbers of a currency.
// Programmer: Alex Mendes
// Last modified:  14 Dec 2017
// This file should be used in conjunction with Lab 1 for SENG1120
#ifndef MGaccount
#define MGaccount
#include <string>
class account
{
public:
    // Members that are externally visible

    // These are member functions

    // Constructor
    // Precondition: none
    // Postcondition: A new instance of account is created 
    // and its instance data initialsed to either zero or a 
    // parameter-provided value
    account(std::string name, const double initialValue);

    // Members that mutate data

    // Precondition: acct_balance has been initialised
    // Postcondition: amount is added to the acct_balance
    void deposit(const double amount);

    // Precondition: acct_balance has been initialised
    // Postcondition: amount is subtracted from the acct_balance
    void withdraw(const double amount);

    // Members that query data

    // Precondition: acct_balance has been initialised
    // Postcondition: The value of acct_balance is returned
    double balance() const;

    // Precondition: acct_balance has been initialised
    // Postcondition: Returns true if acct_balance is greater 
    //                 than zero, false otherwise
    bool has_funds() const;

    std::string get_name() const;

private:

    double acc_balance;
    std::string name;
};

#endif