#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main() {
    const int SIZE = 1000;
    char* word = new char[SIZE];
    ofstream file("put.txt");

    if (!file) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    cout << "Type something word by word (type 'exit' alone to finish):" << endl;

    while (true) {
        cin >> word;

        if (strcmp(word, "exit") == 0) {
            break;
        }

        file << word << ' '; // Save word to file with space
    }

    cout << "\nData saved to output.txt" << endl;

    file.close();
    delete[] word; // Free memory

    return 0;
}
