/*
Task 1
Memory Management: Write a C++ program that demonstrates 
the use of dynamically allocating and deallocating memory 
using new and delete operators. 
The program should create an array of integers with 
a size specified by the user, fill the array with numbers, 
and then deallocate the memory.
*/

#include <iostream>

int main (){

    //Task 1 requirement: using cin, new, and delete. 
    using namespace std;
    int ArraySize; //to ask the user and save it somewhere

    //lets ask the user to give us the array size and then save it in ArraySize
    cout << "Enter the array size you have in mind:";
    cin >> ArraySize;

    //how to allocate memory to this new array using "new"
    int* arr = new int[ArraySize];

    for (int i=0; i<ArraySize; i++){
        arr[i]=i+3;
        cout << "Array[" << i << "]=" << arr[i] << endl;
    }

    //deallocating memory
    delete[] arr;
    
    return 0;
}
//----------------------------------------------------------------------------------------------
/*
Task 2: 
STL: Write a C++ program that demonstrates the use of STL containers,
 specifically vectors. The program should use a vector to store
 a list of student names and grades, and then print out the average grade of all students. 
 you need at least 2 students.
*/

#include <iostream>
#include <vector>
#include <string>

struct Student {
    std::string name;
    double grade;
};

int main (){
    using namespace std;
   
    //alternative approach
    //vector<string> StudentNames;
    //vector<double> StudentGrades;

    //requirement: use vector (and maybe string). 
    vector<Student> students;
    int numStudents;

    cout << "Enter the number of students: ";
    cin >> numStudents;

    for (int i=0; i<numStudents; i++){
        Student student; //creating a student instance
        cout << "Enter the name and grade of the student" << i <<": ";
        cin >> student.name >> student.grade;
        students.push_back(student);
    }

    double sum = 0;
    for (const auto& student : students){
        sum += student.grade;
    }

    double average = sum/students.size();
    cout << "Avergae Grade is: " << average << endl;

    return 0;
}

//----------------------------------------------------------------------------------------------
/*
Task 3: 
Memory Management and STL Combined: 
Write a C++ program that demonstrates the use of both dynamic memory allocation 
and STL containers. The program should create a two-dimensional array of integers 
with a size specified by the user, fill the array with numbers, and then use an STL container, 
such as a vector, to store the sums of the rows in the array.
*/