#include <iostream>

int maxProfit(const int prices[], int size) {
    if (size <= 1) {
        return 0;  // Cannot make a profit with less than two days' data.
    }

    int maxProfit = 0;
    int minPrice = prices[0];

    for (int i = 1; i < size; ++i) {
        maxProfit = std::max(maxProfit, prices[i] - minPrice);
        minPrice = std::min(minPrice, prices[i]);
    }

    return maxProfit;
}

void getInputPrices(int prices[], int size) {
    std::cout << "Enter stock prices for " << size << " days: ";
    for (int i = 0; i < size; ++i) {
        std::cin >> prices[i];
    }
}

int main() {
    // Example usage
    const int size1 = 6;
    int prices1[size1];
    getInputPrices(prices1, size1);

    int profit1 = maxProfit(prices1, size1);

    std::cout << "Task 2 Example 1: " << profit1 << std::endl;

    const int size2 = 5;
    int prices2[size2];
    getInputPrices(prices2, size2);

    int profit2 = maxProfit(prices2, size2);

    std::cout << "Task 2 Example 2: " << profit2 << std::endl;

    return 0;
}
