#include <iostream>

using namespace std;

int main()
{
    int sumOfEven = 2;
    int f1 = 1, f2 = 2, newFib = 3;
    while(newFib < 4000000){
        newFib = f1 + f2;
        f1 = f2;
        f2 = newFib;
        cout << "\n" << newFib;
        if(newFib % 2 == 0){
            sumOfEven += newFib;
        }
    }
    cout << "\n\nSum is: " << sumOfEven;
    return 0;
}
