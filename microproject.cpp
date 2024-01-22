#include <iostream>
using namespace std;
#define size 10
int num_of_pass, i;
class pass
{
private:
	char name[10];
	int age;
	char gender;
	struct pass_1
	{
		char name_2[20];
		int age_2;
		char gender_2;
	} p[size];

public:
	void input();
	void output();
};

void pass::input()
{
	cout << "\n\t\t____________ Enter the passanger details_____________";
	cout << "\n\n Enter the number of members into your family  =";
	cin >> num_of_pass;
	cout << "\n Enter the passanger Name =";
	cin >> name;
	cout << "\n Enter the Age =";
	cin >> age;
	cout << "\n Enter the Gender (M||F) =";
	cin >> gender;
	if (num_of_pass > 1)
	{
		for (i = 0; i < num_of_pass - 1; i++)
		{
			cout << "\n Enter the passanger Name =";
			cin >> p[i].name_2;
			cout << "\n Enter the Age =";
			cin >> p[i].age_2;
			cout << "\n Enter the Gender (M||F) =";
			cin >> p[i].gender_2;
		}
	}
}

void pass::output()
{
	cout << "\n\n\n\t____________________Passanger details____________________";
	cout << "\n\t\t\t No of passanger =" << num_of_pass;
	cout << "\n\t\t\t Passanger name =" << name;
	cout << "\n\t\t\t Age =" << age;
	cout << "\n\t\t\t Gender =" << gender;
	if (num_of_pass > 1)
	{
		for (i = 0; i < num_of_pass - 1; i++)
		{
			cout << "\n\t\t\t Passanger name =" << p[i].name_2;
			cout << "\n\t\t\t Age =" << p[i].age_2;
			cout << "\n\t\t\t Gender =" << p[i].gender_2;
		}
	}
}

class flight
{
private:
	char flight_name[10];
	int flight_no;
	char class_[5];
	char section[5];
	char date[10];
	int go;
	int land;

public:
	void in();
	void out();
};

void flight::in()
{
	cout << "\n Enter the Airplane name(boing_109,L32ng4) =";
	cin >> flight_name;
	cout << "\n Enter plane no =";
	cin >> flight_no;
	cout << "\n Enter calss (High||middle||low) =";
	cin >> class_;
	cout << "\n Enter section (A|B|C|D) =";
	cin >> section;
	cout << "\n Enter date =";
	cin >> date;
	cout << "\n  place for going =\n 1: New Dehli \n 2: Patana \n 3: Mumbia \n 4:Bangaluru \n 5:Panjab \n 6:Hariyana ";
	cout << "\n Enter the choice =\n ";
	cin >> go;
	switch (go)
	{
	case 1:
		cout << "\t New Dehli";
		break;
	case 2:
		cout << "\t Patana";
		break;
	case 3:
		cout << "\t Mumbia";
		break;
	case 4:
		cout << "\t Bangaluru";
		break;
	case 5:
		cout << "\t Panjab";
		break;
	case 6:
		cout << "\t Hariyana";
		break;
	default:
		cout << "\t Invalid choice";
		break;
	}

	cout << "\n  place for landing =\n 1: New Dehli \n 2:Patana \n 3: Mumbia \n 4:Bangaluru \n 5:Panjab \n 6:Hariyana ";
	cout << "\n Enter your choice =\n";
	cin >> land;
	switch (land)
	{
	case 1:
		cout << "\t New Dehli";
		break;
	case 2:
		cout << "\t Patana";
		break;
	case 3:
		cout << "\t Mumbia";
		break;
	case 4:
		cout << "\t Bangaluru";
		break;
	case 5:
		cout << "\t Panjab";
		break;
	case 6:
		cout << "\t Hariyana";
		break;
	default:
		cout << "\t Invalid choice";

		break;
	}
}

void flight::out()
{
	cout << "\n\t\t\t Flight name = " << flight_name;
	cout << "\n\t\t\t Flight no = " << flight_no;
	cout << "\n\t\t\t Class = " << class_;
	cout << "\n\t\t\t Section = " << section;
	cout << "\n\t\t\t Date = " << date;
	cout << "\n\t\t\t Going form = " << go;
	cout << "\n\t\t\t Landing To = " << land;
}

class ticket : public pass, public flight
{
private:
	int rate;
	int total;

public:
	void set();
	void get();
};

void ticket::set()
{
	cout << "\n Your Tickit been conformed";
	cout << "\n  Rate =  5000 ";
	cout << "\n";
	total = 5000 * num_of_pass;
}

void ticket::get()
{
	cout << "\n\t\t\t Total rate =" << total;
	cout << "\n\n";
}

int main()
{
	int family_no;
	int i;

	cout << "\n***********************************************************************************************************************\n";
	cout << "\t\t\t\t\t \t\tWELCOME TO PHENOMENOL AIRLINE \n";
	cout << "*****************************************************************************************************************************\n";
	cout << "\n\n\n \t Hi THE PHENMENOL AIRLINE PROVIDE YOU BEST SERVICES \n";

	cout << "\n\n\t Enter How Many family's Are come Onto Phenomenol Airline =";
	cin >> family_no;
	if (family_no > 0)
	{
		ticket t[size];
		for (i = 0; i < family_no; i++)
		{
			t[i].input();
			t[i].in();
			t[i].set();
		}
		cout << "\n\t\t\t________________ Your's details _____________> ";
		for (i = 0; i < family_no; i++)
		{
			t[i].output();
			t[i].out();
			t[i].get();
		}
	}
	else
	{
		cout << "\n Invalid choice \n plz Enter the valid choice ";
	}
	cout << "\n\t\t\t*****************************************THANKYOU FOR VISITE OUR AIRLINE********************************************";
	cout << "\t\t\t\t***************************************************END***************************************************";
	return 0;
}
