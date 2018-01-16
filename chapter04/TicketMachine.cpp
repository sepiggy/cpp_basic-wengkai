#include "TicketMachine.h"
#include <iostream>

using namespace std;

TicketMachine::TicketMachine() : PRICE(0) {
    this->balance = 0;
    this->total = 0;
}


void TicketMachine::showPrompt() {
    cout << "something";
}

void TicketMachine::insertMoney(int money) {
    balance += money;
}

void TicketMachine::showBalance() {
    cout << balance;
}