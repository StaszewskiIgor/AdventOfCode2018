//
//  day1problem1.cpp
//  day1
//
//  Created by Igor Staszewski on 01/12/2018.
//  Copyright © 2018 Igor Staszewski. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int sum = 0;
    int loadedNumber;
    while (std::cin >> loadedNumber) {
        sum += loadedNumber;
    }
    std::cout << sum;
    return 0;
}
