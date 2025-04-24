#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Author {
private:
    static int totalAuthors;
    int authorID;
    string name;
    string specialization;

public:
    Author(string n, string s) {
        authorID = ++totalAuthors;
        name = n;
        specialization = s;
    }

    void displayDetails() const {
        cout << name << " [" << specialization << "]" << endl;
    }

    static int getTotalAuthors() {
        return totalAuthors;
    }

    // Getter methods to access private members
    string getName() const {
        return name;
    }

    string getSpecialization() const {
        return specialization;
    }
};

int Author::totalAuthors = 0;

class Book {
private:
    string title;
    int baseTime;
    int complexityLevel;
    Author* assignedAuthor;

public:
    Book(string t, int bTime, int cLevel, Author* author = nullptr)
        : title(t), baseTime(bTime), complexityLevel(cLevel), assignedAuthor(author) {}

    int getTotalEstimatedTime() const {
        return baseTime + (complexityLevel * 2);
    }

    void taskBreakdown(int timeLeft) const {
        if (timeLeft <= 5) {
            cout << timeLeft;
            return;
        }
        cout << "5 ";
        taskBreakdown(timeLeft - 5);
    }

    void displayBookDetails() const {
        cout << "Book: " << title << endl;
        if (assignedAuthor != nullptr) {
            cout << "Assigned Author: ";
            assignedAuthor->displayDetails(); // This will display name and specialization
        } else {
            cout << "Assigned Author: Not Assigned" << endl;
        }

        int totalTime = getTotalEstimatedTime();
        cout << "Total Estimated Time: " << totalTime << endl;
        cout << "Task Breakdown: ";
        taskBreakdown(totalTime);
        cout << endl;
    }
};

class BookTracker {
public:
    static int totalAuthorsRegistered() {
        return Author::getTotalAuthors();
    }
};

int main() {
    int n, m;
    cin >> n;
    vector<Author> authors;
    for (int i = 0; i < n; ++i) {
        string name, specialization;
        cin >> name >> specialization;
        authors.push_back(Author(name, specialization));
    }

    cin >> m;
    vector<Book> books;
    for (int i = 0; i < m; ++i) {
        string title;
        int baseTime, complexity, authorIndex;
        cin >> title >> baseTime >> complexity >> authorIndex;
       
        Author* assignedAuthor = (authorIndex > 0 && authorIndex <= n) ? &authors[authorIndex - 1] : nullptr;
        books.push_back(Book(title, baseTime, complexity, assignedAuthor));
    }

    for (const auto& book : books) {
        book.displayBookDetails();
    }

    cout << "Total Authors Registered: " << BookTracker::totalAuthorsRegistered() << endl;

    return 0;
}
