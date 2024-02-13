#include <iostream>
using namespace std;



void printNumber(int*numberPtr) {
    cout << *numberPtr << endl;
}

void print(int n) {
    cout << n <<endl;
}
int main() {
    int number = 5;
    printNumber(&number);
    print(number);



    system("pause>0");
    return 0;
}