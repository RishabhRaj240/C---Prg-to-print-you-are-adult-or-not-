🧑‍💻 Age Checker in C++

A simple beginner-friendly C++ program that takes the user's age as input and checks whether the person is an adult or not.

📌 Features
* Takes user input using cin
* Uses if-else condition
* Checks whether age is:
* 18 or above → Adult
* Below 18 → Not Adult
* Clean and beginner-friendly code structure

🛠️ Technologies Used
* C++
* Standard Input/Output Library (iostream)

📂 Project Structure
Project/
│── main.cpp
│── README.md
│── Screenshot.png

💻 Source Code
#include<iostream>
using namespace std;

// Write a program to take input from users
// And print age is adult or not
// >= 18 yes
// < 18 no

int main() {
    int age;
    cin >> age;

    if (age >= 18) {
        cout << "You are an Adult";
    }
    else {
        cout << "You are not an Adult";
    }

    return 0;
}

▶️ How to Run

Using Code::Blocks / VS Code
Open the project
Compile the program
Run the file
Enter age as input

Example
Input:
21

Output:
You are an Adult

📸 Screenshot -> 
<img width="1432" height="546" alt="Screenshot 2026-06-10 064758" src="https://github.com/user-attachments/assets/6776c96d-dad4-45c6-9858-1f5a6c21e7dc" />

🎯 Learning Concepts

This project helps beginners understand:
* Variables
* User Input
* Conditional Statements
* Basic Program Structure in C++

👨‍💻 Author

Rishab Raj

⭐ Support

If you like this project, consider giving it a ⭐ on GitHub.
