#include "project/exercise.hpp"
#include <algorithm>
#include <cctype>
#include <string>

// Exercise 1: sum all values from 1 to 100
int sum_1_to_100() {
    int sum = 0;
    
    for(int x = 1; x < 101; x++){
        sum += x;
    }

    return sum;
}

// Exercise 2: factorial of n
int factorial(int n) {
    // TODO: Add the code to compute factorial.
    int result = 1;

    for(int x = 1; x <= n; x++){
        result *= x;
    }

    return result;
}

// Exercise 3: check if a number is even
bool is_even(int value) {
    // TODO: Add code to return true if value is even.

    if((value % 2) == 0){
        return true;
    }
    else{
        return false;
    }
}

// Exercise 4: maximum value in an array
int max_value(const int arr[], int size) {
    // TODO: Add code to find the maximum value.

    int max = arr[0];

    for(int x = 1; x < size; x++){
        if(arr[x] > max){
            max = arr[x];
        }
    }

    return max;
}

// Exercise 5: minimum value in an array
int min_value(const int arr[], int size) {
    // TODO: Add code to find the minimum value.

    int min = arr[0];

    for(int x = 1; x < size; x++){
        if(arr[x] < min){
            min = arr[x];
        }
    }

    return min;
}

// Exercise 6: average of array values
double average_of_array(const int arr[], int size) {
    // TODO: Add code to compute the average.

    int sum = 0;

    for(int x = 0; x < size; x++){
        sum += arr[x];
    }

    double avg = sum / size;

    return avg;
}

// Exercise 7: sum of digits in an integer
int sum_of_digits(int n) {
    // TODO: Add code to add all digits in n.

    int sum = 0;

    while(n > 0){
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

// Exercise 8: reverse a string
std::string reverse_string(const std::string& text) {

    int length = text.size();

    std::string reversed = "";

    for(int x = length-1; x > -1; x--){
        reversed += text[x];
    }

    return reversed;
}

// Exercise 9: count vowels in a string
int count_vowels(const std::string& text) {
    // TODO: Add code to count vowels.

    int count = 0;

    char vowels[] = {'a', 'e', 'i', 'o','u'};

    for(int x = 0; x < text.size(); x++){
        for(int y = 0; y < 5; y++){
            if(text[x] == vowels[y]){
                count++;
            }        
        }
    }

    return count;
}

// Exercise 10: determine whether a number is prime
bool is_prime(int n) {
    // Add code

    if(n < 2){
        return false;
    }

    for(int x = 2; x < n; x++){
        if((n % x) == 0){
            return false;
        }
    }
    return true;
}

// Exercise 11: power function
int power(int base, int exponent) {
    // TODO: Add code to compute base^exponent.
    
    int result = base;

    int x = 1;
    while(x < exponent){
        result *= base;
        x++;
    }

    return result;
}

// Exercise 12: nth Fibonacci number
int fibonacci(int n) {
    // TODO: Add code to compute the nth Fibonacci number.

    if(n == 0)
        return 0;
    if(n == 1)
        return 1;

   int x = 0;
   int y = 1;
   
   for(int i = 0; i < n-1; i++){
        int temp = y;
        y += x;
        x = temp;
   }

    return y;
}
