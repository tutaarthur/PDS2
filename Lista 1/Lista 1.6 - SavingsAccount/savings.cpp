#include "savings.h"

float SavingsAccount::annual_savings_rate = 0;

SavingsAccount::SavingsAccount(float balance){
    savingsBalance = balance;
}
float SavingsAccount::calculate_monthly_balance(){
    savingsBalance = savingsBalance*(annual_savings_rate/12);
    return savingsBalance;
}