#include<iostream>
#include<string>
using namespace std;
void ListStudent(int, string, int, int);
char Calgrade(int);

int main()
{
	int student , score[50], count = 1;
	string name[50];

	cout << "Input Number of Student : ";
	cin >> student;
	for (int i = 0 ; i < student ; i++)
	{
	cout << "Input Name : ";
	cin >> name[i] ;
	cout << "Input score : ";
	cin >> score[i];
	cout << endl;
	}
	for (int i = 0 ; i < student ; i++)
	{
	ListStudent(student,name[i],score[i],count);
	count++;
	}
	return 0;
}
void ListStudent(int student, string name, int score, int count)
{
	cout << "Student Name : " << name << " Score " << count <<  " = " << score << "  You grade is " << Calgrade(score) << endl ;
}
char Calgrade(int score)
{
	char grade;
	if (score <= 100 && score >=80)
		grade = 'A';
	if (score >= 70 && score <=79)
		grade = 'B';
	if (score >= 60 && score <=69)
		grade = 'C';
	if (score >= 0 && score <=59)
		grade = 'D';
	return grade;
}
