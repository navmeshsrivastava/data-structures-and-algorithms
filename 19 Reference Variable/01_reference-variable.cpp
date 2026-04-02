#include <iostream>
using namespace std;

void update1(int n) {
    n++;
}

//Pass by reference 
void update2(int &n) {
    n++;
}

int main()
{
    int i = 5;
    int &j = i;

    cout << i << "---" << j << endl;

    int p = 5;
    cout << "before " << p << endl;
    update2(p);
    cout << "after " << p << endl;

    return 0;
}