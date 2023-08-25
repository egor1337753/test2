
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


class Cars {
public:
	Cars();
	~Cars();
	string model;
	int year;
	double weight;

	string getModel();
	void setModel(int a);
	int getYear();
	void setYear(int b);
	double getWeight();
	void setWeight(int c);
	void show();

};

Cars::Cars()
{
	cout << "введите марку авто->"; cin >> model;
	cout << "введите  год выпуска авто->"; cin >> year;
	cout << "введите вес авто->"; cin >> weight;


}

string Cars::getModel() {
	return model;
}
void Cars::setModel(int a) {
	model = a;
}
int Cars::getYear() {
	return year;
}
void Cars::setYear(int b) {
	year = b;
}
double Cars::getWeight() {
	return weight;
}
void Cars::setWeight(int c) {
	weight = c;
}

Cars::~Cars()
{
	cout << "деструктор " << getModel() << endl;
}

void Cars::show() {
	cout << getModel() << "\t" << getYear() << "\t" << getWeight() << endl;
}
int main()
{
	setlocale(LC_ALL, "ru");
	Cars Tayota, Mers;
	 
	Mers.show();
	Tayota.show();
	return 0;
}