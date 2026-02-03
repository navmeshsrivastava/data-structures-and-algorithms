#include <bits/stdc++.h>
using namespace std;

int main() {

    /* ===============================
       1. Last In First Out using push() and top()
       =============================== */
    stack<int> st1;

    st1.push(10);
    st1.push(20);
    st1.push(30);

    cout << "Top element after pushes: " << st1.top() << endl;  // 30


    /* ===============================
       2. pop() and then top()
       =============================== */
    stack<int> st2;

    st2.push(5);
    st2.push(15);
    st2.push(25);

    cout << "\nTop before pop: " << st2.top() << endl;

    st2.pop();   // removes 25

    cout << "Top after pop: " << st2.top() << endl;


    /* ===============================
       3. size()
       =============================== */
    stack<int> st3;

    st3.push(1);
    st3.push(2);
    st3.push(3);

    cout << "\nStack size: " << st3.size() << endl;


    /* ===============================
       4. empty()
       =============================== */
    stack<int> st4;

    if (st4.empty())
        cout << "\nStack is empty" << endl;
    else
        cout << "\nStack is NOT empty" << endl;


    return 0;
}
