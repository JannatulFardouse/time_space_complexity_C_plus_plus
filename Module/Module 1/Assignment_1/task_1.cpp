/*
     Write functions that do the following tasks. Also, mention the Time and Space Complexity of your solutions.
    
    Task 1: 
    Given an integer ‘n’, write a function to calculate the factorial of a given non-negative integer 'n'.
    
    Constraints: 1 <= n <= 10
    Example 1:
            Input: 5
            Output: 120
    Explanation: 1 * 2 * 3 * 4 * 5 = 120
*/

// Solution by Jannatul Fardouse

#include <iostream>
using namespace std;

int main() {
    int n;

    // Input
    cout << "Enter a non-negative integer (1 <= n <= 10): ";
    cin >> n;

    // Check input range
    if (n < 0 || n > 10) {
        cout << "Input out of range." << endl;
        return 1; // indicating an error
    }

    // Calculate factorial
    int factorial = 1;
    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }

    // Output result
    cout << "Factorial of " << n << " is: " << factorial << endl;

    return 0;
}

/*
    time complexity O(n), and space complesity O(1).
*/
