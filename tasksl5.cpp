
// task1

#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;
    int num;

    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> num;
        s.push(num);  
    }

    cout << "Stack (Top to Bottom): ";
    while (!s.empty()) {
        cout << s.top() << " ";  
        s.pop();                 
    }

    return 0;
}

//task2

#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string str;
    stack<char> s;

    cout << "Enter a string: ";
    cin >> str;

    for (char c : str) {
        s.push(c);
    }

    cout << "Reversed string: ";
    while (!s.empty()) {
        cout << s.top();
        s.pop();
    }

    return 0;
}

//task3

#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    int num;

    cout << "Enqueue: ";
    for (int i = 0; i < 5; i++) {
        cin >> num;
        q.push(num);  
    }

    cout << "Dequeued: ";
    while (!q.empty()) {
        cout << q.front() << " ";  
        q.pop();                   
    }

    return 0;
}


//task4

#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    queue<string> q;
    string name;

    cout << "Enter 3 names: ";
    for (int i = 0; i < 3; i++) {
        cin >> name;
        q.push(name);  
    }

    cout << "Serving:\n";
    while (!q.empty()) {
        cout << "Serving: " << q.front() << endl;
        q.pop(); 
    }

    return 0;
}

//task5

#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq;

    dq.push_front(10);
    dq.push_back(20);
    dq.push_front(5);

    cout << "Deque contains: ";
    for (int num : dq) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Pop back: " << dq.back() << endl;
    dq.pop_back();

    cout << "Pop front: " << dq.front() << endl;
    dq.pop_front();

    cout << "Remaining: ";
    for (int num : dq) {
        cout << num << " ";
    }

    return 0;
}

//task6

#include <iostream>
#include <deque>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string word;
    deque<char> dq;

    cout << "Enter a word: ";
    cin >> word;

    for (char c : word) {
        dq.push_back(c);
    }

    bool isPalindrome = true;
    while (dq.size() > 1 && isPalindrome) {
        if (dq.front() != dq.back()) {
            isPalindrome = false;
        }
        dq.pop_front();
        dq.pop_back();
    }

    cout << (isPalindrome ? "It is a palindrome." : "It is not a palindrome.");

    return 0;
}