#ifndef PDS2_SAVINGS_H
#define PDS2_SAVINGS_H

class SavingsAccount {
    private:
        float savingsBalance;

    public:    
        SavingsAccount(float balance);
        float calculate_monthly_balance();
        // Definindo como static e public para ser alterado por qualquer chamada à função
        static float annual_savings_rate;
};


#endif