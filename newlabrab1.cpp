#include <string>
#include <iostream>
using namespace std;
unsigned personHeight;
unsigned short ReadPersonAge() {
	unsigned short age;
	cout << "Age:";
	cin >> age;
	return age;
}
string ReadPersonName() {
	string Name;
	cout << "Name:";
	cin >> Name;
	return Name;
}
void ReadPersonHeight() {
	cout << "Height:";
	cin >> personHeight;
}
void ReadPersonWeight(unsigned short &weight) {
	cout << "Weight:";
	cin >> weight;
}
void ReadPersonSalary(double* Salary) {
	cout << "Salary:";
	cin >> *Salary;
}
void ReadPersonData(string& Name, unsigned short& Age, string& Salary) {
	Name=ReadPersonName();
	Age=ReadPersonAge();
	double doubleSalary;
	doubleSalary = static_cast<double>(strtoul(Salary.c_str(), NULL, 0));
	ReadPersonSalary(&doubleSalary);
	Salary = to_string(doubleSalary);
}
void ReadPersonData(string& Name, unsigned short& Age, string& Height,string& Weight) {
	Name=ReadPersonName();
	Age=ReadPersonAge();
	ReadPersonHeight();
	Height = to_string(personHeight);
	unsigned short ShortWeight;
	ShortWeight = static_cast<unsigned short>(strtoul(Weight.c_str(), NULL, 0));
	ReadPersonWeight(ShortWeight);
	Weight = to_string(ShortWeight);
}
void WritePersonData(unsigned short Age,const string& Name="", const string& Height="", const string& Weight="", const string& Salary="") {
	cout << "PersonData:" << endl;
	cout << "Name:" <<" "<< Name << endl;
	cout << "Age" << " " << Age << endl;
	cout << "Height" << " " << Height << endl;
	cout << "Weight" << " " << Weight << endl;
	cout << "Salary" << " " << Salary << endl;
}
void main() {
	string Name, Height, Weight, Salary;
	unsigned short Age;
	ReadPersonData(Name, Age, Salary);
	WritePersonData(Age, Name, "", "", Salary);
	ReadPersonData(Name, Age, Height, Weight);
	WritePersonData(Age, Name, Height, Weight, "");
}
