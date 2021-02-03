#include <iostream>
#include <cmath>
#include "calc-helper.cc"
using namespace std;

double calculate_entropy(bool lower_alpha, bool upper_alpha, bool numbers, bool special, int length);

int main(){
    bool lower_alpha = false;
    bool upper_alpha = false;
    bool numbers = false;
    bool special = false;
    int length = 0;

    string response = "default";

    while ((response != "y") && (response != "n")){
        cout << "Does your password have lower case alphabetic characters? (y/n)" << endl;
        cin >> response;

        if (response == "y"){
            lower_alpha = true;
        }
    }
    response = "default";

    while ((response != "y") && (response != "n")){
        cout << "Does your password have upper case alphabetic characters? (y/n)" << endl;
        cin >> response;

        if (response     == "y"){
            upper_alpha = true;
        }
    }
    response = "default";

    while ((response != "y") && (response != "n")){
        cout << "Does your password have numeric characters? (y/n)" << endl;
        cin >> response;

        if (response == "y"){
            numbers = true;
        }
    }
    response = "default";

    while ((response != "y") && (response != "n")){
        cout << "Does your password have special characters? (y/n)" << endl;
        cin >> response;

        if (response == "y"){
            special = true;
        }
    }

    cout << "How many characters are in your password?" << endl;
    cin >> length;

    cout << "The estimated entropy of your password is " << calculate_entropy(lower_alpha, upper_alpha, numbers, special, length) << " bits." << endl;
    return 0;
}
