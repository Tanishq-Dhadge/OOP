#include <iostream>
#include <string>

int main() {
    // 1. Constants (cannot be modified after initialization)
    const double PI = 3.14159;
    constexpr int MAX_SCORE = 100;

    // 2. Data types & variables
    int age = 21;               // Integer
    double heightMeters = 1.75; // Floating-point
    char grade = 'A';           // Character
    bool isEnrolled = true;     // Boolean
    std::string name;           // String

    // 3. Input (I/O)
    std::cout << "Enter your first name: ";
    std::cin >> name;

    std::cout << "Enter your current score (0-" << MAX_SCORE << "): ";
    int score = 0;
    std::cin >> score;

    // 4. Operators (arithmetic, relational, logical, compound assignment)
    int bonusPoints = 5;
    int totalScore = score + bonusPoints;          // Arithmetic (+)
    totalScore += 2;                               // Compound assignment (+=)
    bool passed = (totalScore >= 60) && isEnrolled;// Relational (>=) & Logical (&&)
    double circleArea = PI * heightMeters * heightMeters;

    // 5. Output (I/O)
    std::cout << "\n--- Summary ---\n";
    std::cout << "Name: " << name << "\n";
    std::cout << "Age: " << age << ", Grade: " << grade << "\n";
    std::cout << "Height: " << heightMeters << " m (Area of radius "
              << heightMeters << " using PI: " << circleArea << ")\n";
    std::cout << "Total Score (after bonus & adjustment): " << totalScore << "\n";
    std::cout << "Passed: " << (passed ? "Yes" : "No") << "\n"; // Ternary operator

    return 0;
}