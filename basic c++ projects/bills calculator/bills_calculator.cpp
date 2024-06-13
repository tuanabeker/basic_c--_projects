#include <iostream>
#include <string>

int main()
{
    string user;
    double minutes;
    double minutepr;
    double callbill;
    double internet;
    double internetpr;
    double internetbill;
    double sms;
    double smspr;
    double smsbill;
    double total;
    double totbill;
    double tax;

    cout << "This program calculates the bill of your telephone usage, according to the price of call per minute, minutes talked, price of internet usage per MB, MBs of internet used, price of one SMS and number of SMSs sent.\n";

    cout << "\nPlease enter your name: ";
    cin >> user;
    cout << "\n";

    cout << user << ", please enter the price for call per minute: ";
    cin >> minutepr;

    cout << user << ", please enter how many minutes you have talked: ";
    cin >> minutes;

    callbill = (minutes * minutepr) / 100;
    cout << user << ", you have spent " << callbill << "TL for the calls.\n\n";

    cout << user << ", please enter the price for internet usage per MB: ";
    cin >> internetpr;

    cout << user << ", please enter how many MB you have used: ";
    cin >> internet;

    internetbill = (internet * internetpr) / 100;
    cout << user << ", you have spent " << internetbill << "TL for the internet.\n\n";

    cout << user << ", please enter the price for one SMS: ";
    cin >> smspr;

    cout << user << ", please enter the number of SMS you have sent: ";
    cin >> sms;

    smsbill = (sms * smspr) / 100;
    cout << user << ", you have spent " << smsbill << "TL for the SMS.\n\n";

    total = callbill + smsbill + internetbill;
    tax = (callbill * 0.18) + (internetbill * 0.18) + (smsbill * 0.18);
    totbill = total + tax;

    cout << user << ", total cost for all services is " << total << "TL.\n";
    cout << user << ", tax is " << tax << "TL.\n";
    cout << user << ", total bill fee with tax is " << totbill << "TL.\n";
}