#include <iostream>

using namespace std;

int main() {
    float floatStart;
    int start;
    int sum = 0;
    cout << "Enter start number: ";
    cin >> floatStart;
    start = floatStart;
    if (floatStart != start || floatStart > 500) {
        cout << "Incorrect number\n";
        return 1;
    }
    cout << "Sum of the integers from " << start << " to 500 = ";
    while (start <= 500) {
        sum += start;
        start++;
    }
    cout << sum << "\n";
}
