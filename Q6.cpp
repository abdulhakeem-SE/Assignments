#include <iostream>
using namespace std;

int main() {
    int a = 2, b = 4, c = 6;
    cout <<"A) "<<((a == 4 || b > 2) ? "TRUE" : "FALSE")<<endl;
    cout <<"B) "<<((6 <= c && a < 3) ? "TRUE" : "FALSE")<<endl;
    cout << "C) "<<((1 != b && c != 3) ? "TRUE" : "FALSE")<<endl;
    cout << "D) "<<((a >= -1 || a <= b) ? "TRUE" : "FALSE")<<endl;
    cout << "E) "<<(!(a > 2) ? "TRUE" : "FALSE") << endl;
    return 0;
}
