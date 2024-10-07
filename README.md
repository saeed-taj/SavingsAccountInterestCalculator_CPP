# Savings Account Interest Calculator

### Description
This program simulates a basic savings account where users can calculate monthly interest on their deposits based on an adjustable annual interest rate. It allows for setting different interest rates, calculating monthly interest, and displaying the updated balance for each saver. This program is useful for understanding interest calculation over time in a savings account scenario.

### Features
- **Savings Account Class**: Each object stores a user’s savings balance.
- **Static Annual Interest Rate**: A shared annual interest rate for all accounts, adjustable via a static method.
- **Monthly Interest Calculation**: Automatically adds monthly interest to the balance based on the current interest rate.
- **Modify Interest Rate**: Modify the interest rate for all accounts dynamically.

### Class Overview
1. **`SavingsAccount` Class**:
   - `savingsBalance`: Stores the current balance for the account.
   - `annualInterestRate` (static): Stores the interest rate shared across all accounts.
   - `calculateMonthlyInterest()`: Calculates the monthly interest and updates the balance.
   - `displayBalance()`: Displays the current balance.
   - `modifyInterestRate()`: A static method to modify the interest rate for all accounts.

### How It Works
1. **Initialize the Accounts**: Create instances of `SavingsAccount` for each saver with their initial balances.
2. **Set the Annual Interest Rate**: Use `modifyInterestRate()` to set or update the interest rate.
3. **Calculate Monthly Interest**: Call `calculateMonthlyInterest()` to add interest to the balance.
4. **Display the Balances**: Use `displayBalance()` to print the updated balance for each account.

### Example Output
```bash
Initial balances:
Saver 1: $2000
Saver 2: $3000

Balances after 1 month with 3% annual interest:
Saver 1: $2005
Saver 2: $3007.5

Balances after 1 month with 4% annual interest:
Saver 1: $2011.68
Saver 2: $3014.52
