#include <iostream>
#include <cmath>
using namespace std;

int main(){
    bool lower_alpha = false;
    bool upper_alpha = false;
    bool numbers = false;
    bool special = false;
    int pool_size = 0;
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

        if (response == "y"){
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
    response = "default";

    cout << "How many characters are in your password?" << endl;
    cin >> length;

    if (lower_alpha){
        pool_size += 26;
    }

    if (upper_alpha){
        pool_size += 26;
    }

    if (numbers){
        pool_size += 10;
    }

    if (special){
        pool_size += 33;
    }

    double entropy = log2(pool_size) * length;

    cout << "The estimated entropy of your password is " << entropy << " bits." << endl;
    return 0;
}
