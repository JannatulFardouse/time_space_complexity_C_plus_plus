/*
    Task 2: 
    A function to calculate the sum of all natural numbers between ‘a’ to  'b'.
    Constraints: 1 <= a, b <= 10^5
    Example 1:
            Input: a = 1, b = 4
            Output: 10
    Explanation: 1 + 2 + 3 + 4 = 10

    Example 2:
            Input: a = 10, b = 6
            Output: 40
    Explanation: 10 + 9 + 8 + 7 + 6 = 40
*/

// Solution by Jannatul Fardouse

#include <iostream>
using namespace std;

int calculateSumBetween(int a, int b) {
    if (a > b) {
        swap(a, b);
    }

    int sum = 0;
    for (int i = a; i <= b; ++i) {
        sum += i;
    }

    return sum;
}

int main() {
    int a, b;

    // Input
    cout << "Enter two integers (a and b): ";
    cin >> a >> b;

    // Check constraints
    if (a < 1 || b > 100000) {
        cout << "Input out of range or invalid." << endl;
        return 1; // indicating an error
    }

    // Calculate sum
    int sum = calculateSumBetween(a, b);

    // Output result
    cout << "Sum from " << a << " to " << b << ": " << sum << endl;

    return 0;
}

/*
        time complexity O(n), space complexity o(1).
*/