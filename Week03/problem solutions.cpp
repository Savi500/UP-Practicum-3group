#include <iostream>

void checkPositiveNumber() {
    double number = 0;
    std::cin >> number;

    if (number > 0) {
        std::cout << "The number is positive" << std::endl;
    } else if (number < 0) {
        std::cout << "The number is negative" << std::endl;
    } else {
        std::cout << "The number is zero" << std::endl;
    }
}

void calculateDiscount() {
    double price = 0;
    std::cin >> price;
    double largeDiscount = 0.2;
    double smallDiscount = 0.1;

    if (price > 250) {
        price -= price * largeDiscount;
    } else if (price > 100) {
        price -= price * smallDiscount;
    }

    std::cout << price << std::endl;
}

void checkEvenOrOdd() {
    int number = 0;
    std::cin >> number;
    std::cout << (number % 2 == 0 ? "even" : "odd") << std::endl;
}

void checkVotingEligibility() {
    int age = 0;
    std::cin >> age;

    if (age >= 18) {
        std::cout << "Eligible to vote" << std::endl;
    } else {
        std::cout << "Not eligible to vote" << std::endl;
    }
}

void findLargestAndSmallest() {
    double first = 0;
    double second = 0;
    double third = 0;
    std::cin >> first >> second >> third;

    double smallest = first;
    double largest = first;
    if (second < smallest) smallest = second;
    if (third < smallest) smallest = third;
    if (second > largest) largest = second;
    if (third > largest) largest = third;

    std::cout << "Minimum: " << smallest << std::endl;
    std::cout << "Maximum: " << largest << std::endl;
}

void checkVowelWithSwitch() {
    char letter = '\0';
    std::cin >> letter;

    switch (letter) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            std::cout << "The letter is a vowel" << std::endl;
            break;
        default:
            std::cout << "The letter is not a vowel" << std::endl;
            break;
    }
}

void printDayWithIfElse() {
    int day = 0;
    std::cin >> day;

    if (day == 1) std::cout << "Monday" << std::endl;
    else if (day == 2) std::cout << "Tuesday" << std::endl;
    else if (day == 3) std::cout << "Wednesday" << std::endl;
    else if (day == 4) std::cout << "Thursday" << std::endl;
    else if (day == 5) std::cout << "Friday" << std::endl;
    else if (day == 6) std::cout << "Saturday" << std::endl;
    else if (day == 7) std::cout << "Sunday" << std::endl;
    else std::cout << "Invalid day" << std::endl;
}

void printDayWithSwitch() {
    int day = 0;
    std::cin >> day;

    switch (day) {
        case 1: std::cout << "Monday" << std::endl; break;
        case 2: std::cout << "Tuesday" << std::endl; break;
        case 3: std::cout << "Wednesday" << std::endl; break;
        case 4: std::cout << "Thursday" << std::endl; break;
        case 5: std::cout << "Friday" << std::endl; break;
        case 6: std::cout << "Saturday" << std::endl; break;
        case 7: std::cout << "Sunday" << std::endl; break;
        default: std::cout << "Invalid day" << std::endl; break;
    }
}

void runCalculator() {
    double first = 0;
    double second = 0;
    char operation = '\0';
    std::cin >> first >> second >> operation;

    switch (operation) {
        case '+':
            std::cout << first + second << std::endl;
            break;
        case '-':
            std::cout << first - second << std::endl;
            break;
        case '*':
            std::cout << first * second << std::endl;
            break;
        case '/':
            if (second == 0) {
                std::cout << "Cannot divide by zero" << std::endl;
            } else {
                std::cout << first / second << std::endl;
            }
            break;
        default:
            std::cout << "Invalid operation" << std::endl;
            break;
    }
}

void checkFiveDigitPalindrome() {
    int number = 0;
    std::cin >> number;

    const int firstDigit = number / 10000;
    const int secondDigit = (number / 1000) % 10;
    const int fourthDigit = (number / 10) % 10;
    const int fifthDigit = number % 10;

    if (firstDigit == fifthDigit && secondDigit == fourthDigit) {
        std::cout << "Palindrome" << std::endl;
    } else {
        std::cout << "Not a palindrome" ;
    }
}

void printNextDate() {
    int day = 0;
    int month = 0;
    std::cin >> day >> month;

    int daysInMonth;

    switch (month) {
        case 2:
            daysInMonth = 28;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            daysInMonth = 30;
            break;
        default:
            daysInMonth = 31;
            break;
    }

    if (day < daysInMonth) {
        ++day;
    }
    else {
        day = 1;
        if (month == 12) {
            month = 1;
        }
        else {
            ++month;
        }
    }

    std::cout << day << ' ' << month << std::endl;

    std::cout << day << ' ' << month << std::endl;
}

void printGrade() {
    double grade = 0;
    std::cin >> grade;

    if (grade >= 5.5 && grade < 6) {
        std::cout << "Excellent\n";
    } else if (grade >= 4.5 && grade < 5.5) {
        std::cout << "Very Good\n";
    } else if (grade >= 3.5 && grade < 4.5) {
        std::cout << "Good\n";
    } else if (grade >= 3 && grade < 3.5) {
        std::cout << "Average\n";
    } else if (grade >= 2 && grade < 3) {
        std::cout << "Poor\n";
    } else {
        std::cout << "Invalid\n";
    }
}

void convertSwitchToIfElse() {
    int value = 0;
    std::cin >> value;

    if (value == 0 || value == 1 || value == 2) {
        std::cout << "simple";
    } else if (value == 3 || value == 4) {
        std::cout << "ops five";
    } else if (value == 5) {
        std::cout << "five";
    }
    std::cout << std::endl;
}

int main() {
    int problem = 0;

    switch (problem) {
        case 1: checkPositiveNumber(); break;
        case 2: calculateDiscount(); break;
        case 3: checkEvenOrOdd(); break;
        case 4: checkVotingEligibility(); break;
        case 5: findLargestAndSmallest(); break;
        case 6: checkVowelWithSwitch(); break;
        case 7: printDayWithIfElse(); break;
        case 8: runCalculator(); break;
        case 9: checkFiveDigitPalindrome(); break;
        case 10: printNextDate(); break;
        case 11: printGrade(); break;
        case 12: convertSwitchToIfElse(); break;
        case 13: printDayWithSwitch(); break;
        default: std::cout << "Invalid problem number\n"; break;
    }

    return 0;
}
