/*Create a class BankAccount with:
•	Private: balance, accountNumber
•	Public: holderName
•	Use constructor to initialize account details.
•	Methods: deposit(), withdraw(), checkBalance()*/
#include<bits/stdc++.h>
using namespace std;
class student {
private:
    int roll_no;
    int marks;
public:
    string name; 
    string branch;

    // Setters
    void setdata(int r_no, int student_marks) {
        roll_no = r_no;
        marks = student_marks;
    }

    // Getters
    int getRollNo() {
        return roll_no;
    }

    int getMarks() {
        return marks;
    }
};

int main() {
    student s1;
    student s2;

    s1.setdata(101, 84);
    s2.setdata(102, 96);

    s1.name = "Alice";
    s1.branch = "CSE";

    s2.name = "Bob";
    s2.branch = "DS";

    cout << "Student 1: " << s1.name << ", Roll No: " << s1.getRollNo() << ", Marks: " << s1.getMarks() << ", Branch: " << s1.branch << std::endl;
    cout << "Student 2: " << s2.name << ", Roll No: " << s2.getRollNo() << ", Marks: " << s2.getMarks() << ", Branch: " << s2.branch << std::endl;

    return 0;
}
