/**
* Password Entropy Calculator
* Copyright (C) 2021  Gavin Choy
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#include <iostream>
#include <cmath>
#include "calc-helper.cc"
using namespace std;

double calculate_entropy(bool lower_alpha, bool upper_alpha, bool numbers, bool special, int length);

int main(){

    cout << endl;
    cout << "Password Entropy Calculator  Copyright (C) 2021  Gavin Choy\n";
    cout << "This program comes with ABSOLUTELY NO WARRANTY.\n";
    cout << "This is free software, and you are welcome to redistribute it\n";
    cout << "under certain conditions.\n\n";

    // Properties of the password
    bool lower_alpha = false;
    bool upper_alpha = false;
    bool numbers = false;
    bool special = false;
    int length = 0;

    // Prepares the while loops
    string response = "default";

    while ((response != "y") && (response != "n")){
        cout << "Does your password have lower case alphabetic characters? (y/n)" << endl;
        cin >> response;
        cout << endl;

        if (response == "y"){
            lower_alpha = true;
        }
    }
    response = "default";

    while ((response != "y") && (response != "n")){
        cout << "Does your password have upper case alphabetic characters? (y/n)" << endl;
        cin >> response;
        cout << endl;

        if (response     == "y"){
            upper_alpha = true;
        }
    }
    response = "default";

    while ((response != "y") && (response != "n")){
        cout << "Does your password have numeric characters? (y/n)" << endl;
        cin >> response;
        cout << endl;

        if (response == "y"){
            numbers = true;
        }
    }
    response = "default";

    while ((response != "y") && (response != "n")){
        cout << "Does your password have special characters? (y/n)" << endl;
        cin >> response;
        cout << endl;

        if (response == "y"){
            special = true;
        }
    }

    cout << "How many characters are in your password?" << endl;
    cin >> length;
    cout << endl;

    cout << "The estimated entropy of your password is " << calculate_entropy(lower_alpha, upper_alpha, numbers, special, length) << " bits." << endl;
    return 0;
}
