#include <iostream>
using namespace std;

int main() 
 {
    float DLD, DSA, EVS, CPP;
    float total, cgpa;

    // Input grades for 4 subjects
    cout << "Enter the marks for 4 subjects: ";
    cout << "CPP: ";
    cin >> CPP;
    cout << "DLD: ";
    cin >> DLD;
    cout << "EVS: ";
    cin >> EVS;
    cout << "DSA ";
    cin >> DSA;

  
    totalGradePoints = DSA+DLD+EVS+CPP;

   
    cgpa = total/ 4.0;

    
    cout << "Your CGPA is: " << cgpa;

    return 0;
}
