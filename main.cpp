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
}