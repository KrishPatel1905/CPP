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
    cout << "Enter data to store in file (type 'exit' to stop): " << endl;

    while (true) {
        getline(cin, data); 
        if (data == "exit") 
            break;
        file << data << endl; 
    }

    file.close(); 
    cout << "Data stored in file successfully!" << endl;

    return 0;
}
