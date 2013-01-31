//
//  main.cpp
//  Prime
//
//  Created by Zahid Hussain on 31/01/2013.
//  Copyright (c) 2013 maxxsol. All rights reserved.
//

#include <iostream>

bool isPrime(long num);

int main(int argc, const char * argv[])
{

    // insert code here...
    std::cout << "Hello, World!\n";
    long twoM = 2000000;
    long sum = 2;
    long counter = 3;
    while (sum < twoM) {
        
        if (isPrime(counter)) {
            
            if (sum + counter > twoM) {
                break;
            }
            else
                sum = sum + counter;
            std::cout << " Prime : "<<counter<<" Sum : "<<sum <<"\n";            
        }
        counter++;
    }
    
    return 0;
}

bool isPrime(long num)
{
    bool result = true;
    
    for (long i = 2 ; i < num/2 + 1; ++i) {
        
        if (num % i == 0) {
            result = false;
            break;
        }
    }
    
    return result;
}