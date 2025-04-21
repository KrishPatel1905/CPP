#include <iostream>
using namespace std;

template<typename T>
T myint(T a, T b) {
    return a + b;
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string type;
        cin >> type;

        if (type == "int") {
            int a, b;
            cin >> a >> b;
            cout << myint<int>(a, b) << endl;
        } 
        else if (type == "float") {
            float a, b;
            cin >> a >> b;
            cout << myint<float>(a, b) << endl;
        } 
        else if (type == "string") {
            string a, b;
            cin >> a >> b;
            cout << myint<string>(a, b) << endl;
        }
    }

    return 0;
}
