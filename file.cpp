//Give a function that returns square of a number and place in main function
#include <iostream>
using namespace std;

int square(int num) {
    return num * num;
}

int main() {
    int number = 0;
    int result = square(number);
    cout << "The square of " << number << " is " << result << endl;
    return 0;
}