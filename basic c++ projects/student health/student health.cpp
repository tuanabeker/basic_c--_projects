#include <iostream>
using namespace std;

struct student
{
    string studentName;
    float stuWeight;
    float stuHeight;
};

void studentInformation(student students[])
{
    for (int i = 0; i < 3; i++)
    {
        cout << "Student Name: " << students[i].studentName << endl;
        cout << "Weight: " << students[i].stuWeight << endl;
        cout << "Height: " << students[i].stuHeight << endl;
        cout << endl;
    }
}

float weightHeightRatioFinder(student *students, int index)
{
    return students[index].stuWeight / students[index].stuHeight;
}

int main()
{
    student students[3] = {
        {"Jane", 55, 1.61},
        {"Richard", 60, 1.66},
        {"Anthony", 65, 1.70}};

    studentInformation(students);

    for (int i = 0; i < 3; i++)
    {
        float ratio = weightHeightRatioFinder(students, i);
        cout << students[i].studentName << "'s weight/height ratio is: " << ratio << endl;
    }

    return 0;
}