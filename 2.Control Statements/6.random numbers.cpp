#include <iostream>
#include <cstdlib> // for rand() and srand() functions
#include <ctime>   // for time() function
using namespace std;

int main() {
    // Seed the random number generator with every different time
    srand(time(0));
    int val1 = rand()%10;
    int val2 = rand()%10 + 1;
    cout << val1<< endl;
    cout << val2<< endl;

    return 0;
}