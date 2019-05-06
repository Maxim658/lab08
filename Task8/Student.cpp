#include "pch.h"
#include "Student.h"

Student::Student()
{
	strcpy_s(fac, "");
	strcpy_s(spec, "");
	strcpy_s(name, "");
	course = 0;
	group = 0;

}
Student::Student(int arg)
{
	cout << "¬ведите название факультета: ";
	cin >> fac;
	cout << "¬ведите название специальности: ";
	cin >> spec;
	cout << "¬ведите фамилию студента: ";
	cin >> name;
	cout << "¬ведите курс: ";
	cin >> course;
	cout << "¬ведите группу: ";
	cin >> group;
}
Student::Student(const char *f, const char *s, const char *n, int co, int g)
{
	strcpy_s(fac, f);
	strcpy_s(spec, s);
	strcpy_s(name, n);
	course = co;
	group = g;
}
void Student::change_course(int num)
{
	course += num;
}
int Student::get_course()
{
	return course;
}
void Student::change_group(int num)
{
	group = num;
}
void Student::print()
{
	cout << "fac: " << fac << " spec: " << spec << " name: " << name << " course: " << course << " group: " << group << endl;
}