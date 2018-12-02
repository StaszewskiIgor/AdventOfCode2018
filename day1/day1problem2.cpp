//
//  day1problem2.cpp
//  day1
//
//  Created by Igor Staszewski on 01/12/2018.
//  Copyright © 2018 Igor Staszewski. All rights reserved.
//

#include <iostream>
#include <climits>
#include <vector>

int reachedFrequencies[UINT_MAX];

int main(int argc, const char * argv[]) {
    long long sum = 0;
    int counter = 0;
    int loadedNumber;
    std::vector<int> numbers;
    
    while (std::cin >> loadedNumber) {
        numbers.push_back(loadedNumber);
    }
    
    do {
        if (counter == numbers.size()) counter = 0;
        sum += numbers[counter];
        if (reachedFrequencies[sum + INT_MAX] == 1) {
            std::cout << sum;
            break;
        } else {
            reachedFrequencies[sum + INT_MAX]++;
        }
        counter++;
    } while (true);
    return 0;
}
