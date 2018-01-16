#ifndef CPP_BASIC_WENGKAI_TICKETMACHINE_H
#define CPP_BASIC_WENGKAI_TICKETMACHINE_H

class TicketMachine {
public:
    TicketMachine();

    void showPrompt();

    void insertMoney(int money);

    void showBalance();

    void printTicket();

    void showTotal();

private:
    const int PRICE;
    int balance;
    int total;
};


#endif //CPP_BASIC_WENGKAI_TICKETMACHINE_H
