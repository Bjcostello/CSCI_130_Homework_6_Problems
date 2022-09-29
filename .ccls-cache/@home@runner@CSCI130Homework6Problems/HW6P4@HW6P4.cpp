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
    int date, a;
    string month;
    cin >> date;
    cin >> month;
    a = month_converter(month);
    switch (a) {
    case 1:
      if (date <= 20)
        cout << "Capricorn\n";
      else
        cout << "Aquarius\n";
    case 2:
      if (date <= 19)
        cout << "Aquarius\n";
      else
        cout << "Pisces\n";
    case 3:
      if (date <= 20)
        cout << "Pisces\n";
      else
        cout << "Aries\n";
    case 4:
      if (date <= 20)
        cout << "Aries\n";
      else
        cout << "Taurus\n";
    case 5:
      if (date <= 20)
        cout << "Taurus\n";
      else
        cout << "Gemini\n";
    case 6:
      if (date <= 21)
        cout << "Gemini\n";
      else
        cout << "Cancer\n";
    case 7:
      if (date <= 22)
        cout << "Cancer\n";
      else
        cout << "Leo\n";
    case 8:
      if (date <= 22)
        cout << "Leo\n";
      else
        cout << "Virgo\n";
    case 9:
      if (date <= 21)
        cout << "Virgo\n";
      else
        cout << "Libra\n";
    case 10:
      if (date <= 22)
        cout << "Libra\n";
      else
        cout << "Scorpio\n";
    case 11:
      if (date <= 22)
        cout << "Scorpio\n";
      else
        cout << "Sagittarius\n";
    case 12:
      if (date <= 21)
        cout << "Sagittarius\n";
      else
        cout << "Capricorn\n";
    }
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
  return 0;
}