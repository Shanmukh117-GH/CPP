#include <bits/stdc++.h>
using namespace std;
 class emp
 {
     int salary, empid;
     public :
         string name,dept;
     emp(int emp,string n,string dep)
     {
         empid=emp;
         name=n;
         dept=dep;
     }
     void setsal(int val) 
     {
         salary=val;
     }
     void getsal()
     {
         cout << "Salary is of  : " << salary << endl;
     }
     void display()
     {
         cout << "Employee Details\n" << "Name : " << name << endl << "Employee ID : " << empid << endl << "Department : " << dept << endl;
     }
 };
 int main() 
 {
     int emp_id;
     float salary;
     string name,department;
     cout << "Enter the details of id , name and department : " << endl;
     cin >> emp_id >> name >> department;
     emp e1(emp_id,name ,department);
     cout << "Enter the salary of employee : " << endl;
     cin >> salary ;
     e1.setsal(salary);
     e1.getsal();
     e1.display();
}
