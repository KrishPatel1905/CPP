#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream file("data.txt");

    if (!file) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    string data;
    int charCount = 0;

    cout << "Enter data to store in file and console (type 'exit' to stop): " << endl;

    while (true) {
        getline(cin, data);
        if (data == "exit") 
            break;

        // Display data on console
        cout << "You entered: " << data << endl;

        // Save data to file
        file << data << endl;

        // Count characters and display on console
        charCount += data.length();
        cout << "Total characters so far: " << charCount << endl;
    }

    file.close();
    cout << "Data stored in file successfully!" << endl;

    return 0;
}
