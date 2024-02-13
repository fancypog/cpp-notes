#include <iostream>
#include <queue>

using namespace std;

int main() {
    priority_queue <int> q;
    q.push(20);
    q.push(15);
    q.push(85);
    q.push(56);
    q.push(25);
    q.push(20);
    q.push(54);
    q.push(100);
    q.push(36);
    cout<< "Top: " << q.top() << endl;
    cout << "The queue is: " << endl;
    while(!q.empty()) {
        cout << q.top() << endl;
        q.pop();
    }
    return 0;
}