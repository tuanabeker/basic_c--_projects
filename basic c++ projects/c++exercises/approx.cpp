#include <iostream>
using namespace std;

struct student
{
    char *studentName;
    float stuWeight;
    float stuHeight;
};

void studentInformation(student *student)
{
    for (int i = 0; i < 3; i++)
    {
        cout << "Student Name: " << student[i].studentName << endl;
        cout << "Weight: " << student[i].stuWeight << endl;
        cout << "Height: " << student[i].stuHeight << endl;
        cout << endl;
    }
}

float weightHeightRatioFinder(student *student, int index)
{
    return student[index].stuWeight / student[index].stuHeight;
}

int main()
{
    student student[3] = {
        {"Jane", 55, 1.61},
        {"Richard", 60, 1.66},
        {"Anthony", 65, 1.70}};

    studentInformation(student);

    for (int i = 0; i < 3; i++)
    {
        float ratio = weightHeightRatioFinder(student, i);
        cout << student[i].studentName << "'s weight/height ratio is: " << ratio << endl;
    }

    return 0;
}