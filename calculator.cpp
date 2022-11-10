#include<iostream>
using namespace std;
int main() {
int var1, var2;
char operation;

cout << "Enter the first number : ";
cin >> var1;
cout << endl;

cout <<"Enter the operation to be perfomed : ";
cin >> operation;
cout << endl;

cout << "Enter the second nuMber : ";
cin >> var2;
cout << endl;

bool right_input = false;
if (operation == '+') {
cout << var1 << " " << operation << " " << var2 << " = " << (var1 + var2);
right_input = true;
}
if (operation == '-') {
cout << var1 << " " << operation << " " << var2 << " = " << (var1 - var2);
right_input = true;
}
if (operation == '*') {
cout << var1 << " " << operation << " " << var2 << " = " << (var1 * var2);
right_input = true;
}
if (operation == '/' && var2 != 0) {
cout << var1 << " " << operation << " " << var2 << " = " << (var1 / var2);
right_input = true;
}
if (operation == '/' && var2 == 0) {
cout << "Error. Division by zero.";
right_input = true;
}
if (!right_input) {
cout << var1 << " " << operation << " " << var2 << " = " << "Error;";
cout << "Invalid Operation!";
}

cout << endl;

system("pause");

return 0;
}
