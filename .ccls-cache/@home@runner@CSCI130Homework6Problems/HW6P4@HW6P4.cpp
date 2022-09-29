// Libraries***************************
#include <cmath>
#include <fstream>
#include <iomanip>
#include <iostream>
using namespace std;

// Functions***************************
int month_converter(string month);
// Main********************************
int main() {
  int students;
  cin >> students;

  for (students = students; students >= 1; students--) {
    int date;
    string month;
    cin >> date;
    month_converter(cin >> month);
  }

  return 0;
}

// Function Definitions****************
int month_converter(string month) { // converts text of month into int value
  if (month == "Jan") {
    return 1;
  }
  if (month == "Feb") {
    return 2;
  }
  if (month == "Mar") {
    return 3;
  }
  if (month == "Apr") {
    return 4;
  }
  if (month == "May") {
    return 5;
  }
  if (month == "Jun") {
    return 6;
  }
  if (month == "Jul") {
    return 7;
  }
  if (month == "Aug") {
    return 8;
  }
  if (month == "Sep") {
    return 9;
  }
  if (month == "Oct") {
    return 10;
  }
  if (month == "Nov") {
    return 11;
  }
  if (month == "Dec") {
    return 12;
  }
}