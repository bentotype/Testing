#include <iostream>
#include <vector>

double calculateCGPA(int grade);

int main()
{
    std::cout << "CGPA calculator" << std::endl;
    std::cout << "---------------" << std::endl;

    std::vector<int> courses;
    int numCourses;
    std::cout << "Enter the number of courses: ";
    std::cin >> numCourses;

    for(int i = 0; i < numCourses; i++){
        char inputgrade;
        std::cout << "Enter the grade for " << i+1 << " course(A, B, C, D, F): ";
        std::cin >> inputgrade;
        char grade = std::toupper(inputgrade);
        if(grade != 'A' && grade != 'B' && grade != 'C' && grade != 'D' && grade != 'F'){
            std::cout << "Invalid grade" << std::endl;
            i--;
            continue;
        }
        courses.push_back(grade);
    }

    double GPA;

    for(int i = 0; i < numCourses; i++){
        GPA += calculateCGPA(courses[i]);
    }

    double totalGPA =  GPA / numCourses;

    std::cout << "Your CGPA is: " << totalGPA << std::endl;
    return 0;
}

double calculateCGPA(int grade){
    switch(grade){
        case 'A':
            return 4.0;
        case 'B':
            return 3.0;
        case 'C':
            return 2.0;
        case 'D':
            return 1.0;
        case 'F':
            return 0.0;
    }
}