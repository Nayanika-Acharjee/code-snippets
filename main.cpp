#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

/*
 * ===============================
 *      C++ Starter Template
 * ===============================
 * Includes:
 * - Hello World
 * - Input/Output
 * - Loops
 * - Functions
 * - Arrays and Vectors
 * - Classes and Objects
 * - File I/O
 * - Conditional Statements
 * - Switch Case
 */

//////////////////////////
// 1. Hello World
//////////////////////////
void helloWorld() {
    cout << "Hello, World!" << endl;
}

//////////////////////////
// 2. Input/Output
//////////////////////////
void basicIO() {
    int age;
    string name;

    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;

    cout << "Hello, " << name << "! You are " << age << " years old." << endl;
}

//////////////////////////
// 3. Loops
//////////////////////////
void loopsDemo() {
    // For loop
    for (int i = 1; i <= 5; i++) {
        cout << "For loop iteration: " << i << endl;
    }

    // While loop
    int j = 1;
    while (j <= 5) {
        cout << "While loop iteration: " << j << endl;
        j++;
    }
}

//////////////////////////
// 4. Functions
//////////////////////////
int add(int a, int b) {
    return a + b;
}

//////////////////////////
// 5. Arrays
//////////////////////////
void arrayDemo() {
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        cout << "Array element " << i << ": " << arr[i] << endl;
    }
}

//////////////////////////
// 6. Vectors
//////////////////////////
void vectorDemo() {
    vector<int> numbers = {1, 2, 3, 4, 5};
    numbers.push_back(6);
    numbers.pop_back();

    cout << "Vector elements: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;
}

//////////////////////////
// 7. Classes and Objects
//////////////////////////
class Robot {
public:
    string name;

    void greet() {
        cout << "Hello, I am " << name << endl;
    }
};

//////////////////////////
// 8. File I/O
//////////////////////////
void fileIODemo() {
    // Write to file
    ofstream outFile("example.txt");
    outFile << "Hello, file!" << endl;
    outFile.close();

    // Read from file
    ifstream inFile("example.txt");
    string line;
    while (getline(inFile, line)) {
        cout << line << endl;
    }
    inFile.close();
}

//////////////////////////
// 9. If-Else
//////////////////////////
void ifElseDemo() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num > 0) {
        cout << "Positive" << endl;
    } else if (num < 0) {
        cout << "Negative" << endl;
    } else {
        cout << "Zero" << endl;
    }
}

//////////////////////////
// 10. Switch Case
//////////////////////////
void switchDemo() {
    int choice;
    cout << "Enter a number (1-3): ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "You chose 1" << endl;
            break;
        case 2:
            cout << "You chose 2" << endl;
            break;
        case 3:
            cout << "You chose 3" << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
    }
}

//////////////////////////
// Main Function
//////////////////////////
int main() {
    helloWorld();
    basicIO();
    loopsDemo();
    cout << "Sum of 5 + 10 = " << add(5, 10) << endl;
    arrayDemo();
    vectorDemo();

    Robot r;
    r.name = "Robo4J";
    r.greet();

    fileIODemo();
    ifElseDemo();
    switchDemo();

    return 0;
}
