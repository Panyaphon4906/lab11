#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    string grades[] = {"A", "B+", "B", "C+", "C", "D+", "D", "F", "W"};
    
    cout << "Press Enter 3 times to reveal your future." << endl;
    
    int count = 0;
    while (count < 3) {
        cin.get();
        count++;
    }

    srand(time(0));
    int randomIndex = rand() % 9;

    cout << "You will get " << grades[randomIndex] << " in this 261102." << endl;

    return 0;
}
