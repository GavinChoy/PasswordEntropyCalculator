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

double calculate_entropy(bool lower_alpha, bool upper_alpha, bool numbers, bool special, int length){
    /**
    * Returns the bits of entropy given the password properties.
    * @param lower_alpha Boolean whether there exists a lower case alphabet in the password.
    * @param upper_alpha Boolean whether there exists an uppper case alphabet in the password.
    * @param numbers Boolean whether there exists a numeric character in the password.
    * @param special Boolean whether there exists a special character in the password.
    * @param length The length of the password.
    * @return The bits of entropy of the password.
    */

    // If all the properties are false, then log2 will return -inf
    // Instead require return of 0.0 is all false
    if ((lower_alpha == false) && (upper_alpha == false) && (numbers == false) && (special == false)) {
        return 0.0;
    }

    // The size of the pool of characters
    int pool_size = 0;

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

    // entropy = log base 2 (pool_size ^ length)
    double entropy = log2(pool_size) * length;

    return entropy;
}
