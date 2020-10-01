PrimeNumbers
============

A number is said to be prime if it is divisible by a number other than 1 and itself.
1 is not considered to be a prime number.

Primality Test is to determine whether the input integer is a prime number or not

For instance,

5: Prime Number
12: Not a prime number
7: Prime Number
14: Not a prime number

For instance, 12 is prime because it is divisible by 2,3 and 6.

 Approach
 =========
 
```

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

```

In this method, we traverse from 1 to n, hence the time complexity, in this case, is: `O(n).`                                                                                      
