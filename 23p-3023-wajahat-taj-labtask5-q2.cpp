#include <iostream>
using namespace std;

class SavingsAccount {
   private:
    
    double savingsBalance; 
    static double annualInterestRate; 

public:
   
      SavingsAccount(double balance) {
        savingsBalance = balance;
   
    }

   
    void calculateMonthlyInterest() {
       
        double monthlyInterest = (savingsBalance * annualInterestRate) / 12;
        savingsBalance += monthlyInterest;
    
    }

    
    void displayBalance() const {
        cout << "Current balance: $" << savingsBalance << endl;
    
    }

    
    static void modifyInterestRate(double newRate) {
        annualInterestRate = newRate;
    }

};


double SavingsAccount::annualInterestRate = 0.03; // Default to 3%

int main() {

 
    SavingsAccount saver1(2000.00);
    SavingsAccount saver2(3000.00);

    // Display initial balances
    cout << "Initial balances:" << endl;
    saver1.displayBalance();
    saver2.displayBalance();

    // Set the annual interest rate to 3% and calculate monthly interest
    SavingsAccount::modifyInterestRate(0.03);
    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();

    // Display balances after first month
    cout << "\nBalances after 1 month with 3% annual interest:" << endl;
    saver1.displayBalance();
    saver2.displayBalance();

    // Modify the interest rate to 4% for the next month
    SavingsAccount::modifyInterestRate(0.04);
    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();

    // Display balances after second month
    cout << "\nBalances after 1 month with 4% annual interest:" << endl;
    saver1.displayBalance();
    saver2.displayBalance();

    return 0;
}
