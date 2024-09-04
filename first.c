//////////////////BOOLEAN EXPRESSION.
////////////////#include<iostream>
////////////////using namespace std;
////////////////int main()
////////////////{
////////////////
////////////////bool isCodingFun=true;
////////////////if(isCodingFun)
////////////////{
////////////////cout<<"let's code more""\n";
////////////////}
////////////////else
////////////////{
////////////////cout<<"stop code";
////////////////}
////////////////cout<<true+7<<endl;
////////////////int x=9,y=20;
////////////////bool b1=x>y;
////////////////bool b2=x<y;
////////////////bool b3=x==y;
////////////////cout<<"b1:"<<b1<<endl;
////////////////cout<<"b2:"<<b2<<endl;
////////////////cout<<"b3:"<<b3<<endl;
////////////////
////////////////
////////////////}
//////////////
////////////////DEFAULT PARAMETER.
////////////////#include<iostream>
////////////////using namespace std;
////////////////void display(int,float=45.58,string message="welcome!");
////////////////int main()
////////////////{
////////////////display(34,89.86,"hello how are you.");
////////////////display(34);
////////////////return 0;
////////////////}
////////////////void display(int num1,float num2,string message)
////////////////{
////////////////cout<<"integer value:"<<num1<<endl;
////////////////cout<<"float value:"<<num2<<endl;
////////////////cout<<"message:"<<message<<endl<<endl;
////////////////}
//////////////
////////////////FUNCTION OVERLOADING.
//////////////#include<iostream>
//////////////#include<string>
//////////////using namespace std;
//////////////void add(int,int);
//////////////void add(string,string);
//////////////void add(int,int,int);
//////////////
//////////////int main()
//////////////{
////////////////FUNCTION OVERLOADING.
//////////////add(10,20);
//////////////add("hello","world");
//////////////add(84,489,908);
//////////////
//////////////}
//////////////
//////////////void add(int num1,int num2)
//////////////{
//////////////cout<<"num1:"<<num1+num2<<endl;
//////////////}
//////////////void add(string s1,string s2)
//////////////{
//////////////cout<<"s1:"<<s1+" "+s2<<endl;
//////////////}
//////////////void add(int sum1,int sum2,int sum3)
//////////////{
//////////////cout<<"sum1:"<<sum1+sum2+sum3<<endl;
//////////////}
////////////
////////////#include<iostream>
////////////using namespace std;
////////////
////////////class Employee{
////////////public:
////////////	int id;          //access specifiers.
////////////	string firstName;//attributes or data members.
////////////	string lastName;//attributes or data members.
////////////};
////////////
////////////int main()
////////////{
//////////////create object of employee1.
////////////Employee emp1;
//////////////access attributes
////////////emp1.id=230;
////////////emp1.firstName="sachin";
////////////emp1.lastName="vishal";
//////////////print attributes
////////////cout<<"id:"<<emp1.id<<endl<<"name:"<<emp1.firstName <<" "<< emp1.lastName<<"\n\n";
////////////
//////////////create object of employee 2.
////////////
////////////Employee emp2;
////////////
//////////////access atributes of employee.
////////////
////////////emp2.id=5;
////////////emp2.firstName="suraj";
////////////emp2.lastName="yadav";
////////////
//////////////print attributes.
////////////
////////////cout<<"id:"<<emp2.id<<endl<<"name:"<<emp2.firstName<<" "<<emp2.lastName;
////////////}
//////////
////////////store 1 car and 2 bike data in class.
//////////#include<iostream>
//////////#include<string>
//////////using namespace std;
//////////
//////////class bike{
////////////access specifiers
//////////public:
//////////	//attribute or data member
//////////	string bikeName;
//////////	string ownerName;
//////////	string stateName;
//////////	string plateNo;
//////////};
//////////
//////////int main()
//////////{
////////////create object
//////////bike b1;
////////////access attributes
//////////b1.bikeName="pulser";
//////////b1.ownerName="Suraj Yadav";
//////////b1.stateName="Bihar";
//////////b1.plateNo="BR464196";
////////////print attributes
//////////cout<<"Bike name:"<<b1.bikeName<<endl<<"owner name:"<<b1.ownerName<<endl<<"state name:"<<b1.stateName<<endl<<"plate no:"<<b1.plateNo<<endl<<"\n";
//////////
////////////create object
//////////bike b2;
////////////access attributes
//////////b2.bikeName="Bullet";
//////////b2.ownerName="Suraj Yadav";
//////////b2.stateName="Bihar";
//////////b2.plateNo="BR464198";
////////////print attributes
//////////cout<<"Bike name:"<<b2.bikeName<<endl<<"owner name:"<<b2.ownerName<<endl<<"state name:"<<b2.stateName<<endl<<"plate no:"<<b1.plateNo<<endl<<"\n";
//////////
//////////
////////////create object
//////////bike c;
////////////access attributes
//////////c.bikeName="punch car";
//////////c.ownerName="Suraj Yadav";
//////////c.stateName="Bihar";
//////////c.plateNo="BR464198";
////////////print attributes
//////////cout<<"car name:"<<c.bikeName<<endl<<"owner name:"<<c.ownerName<<endl<<"state name:"<<c.stateName<<endl<<"plate no:"<<c.plateNo<<endl;
//////////
//////////
//////////
//////////}
////////
//////#include<iostream>
//////#include<string>
//////using namespace std;
//////class student{
//////public:
//////	string collegeName;
//////	string studentName;
//////	string className;
//////
//////
//////};
//////
//////int main()
//////{
//////student s1;
//////cout<<"enter college name:";
//////getline(cin,s1.collegeName);
//////cout<<"enter student name:";
//////getline(cin,s1.studentName);
//////cout<<"enter class name:";
//////getline(cin,s1.className);
//////
//////cout<<"college name:"<<s1.collegeName<<endl;
//////cout<<"student name:"<<s1.studentName<<endl;
//////cout<<"standarad:"<<s1.className<<endl<<endl;
//////
//////student s2;
//////cout<<"enter college name:";
//////getline(cin,s2.collegeName);
//////cout<<"enter student name:";
//////getline(cin,s2.studentName);
//////cout<<"enter standarad:";
//////getline(cin,s2.className);
//////cout<<"college name:"<<s2.collegeName<<endl<<"student name:"<<s2.studentName<<endl<<"standarad:"<<s2.className;
//////
//////}
////#include<iostream>
////#include<string>
////using namespace std;
////
////class name{
////public:
////	string firstName;
////	string lastName;
////
////
////    string getfullName(){
////    return firstName+" "+lastName;
////
////}
////};
////
////int main()
////{
////name n1;
////n1.firstName="sachin";
////n1.lastName="yadav";
////cout<<n1.getfullName()<<endl;
////
////}
////#include<iostream>
////#include<string>
////using namespace std;
////
////class name
////{
////public:
////	string fn;
////	string ln;
////	string gfn()
////	{
////	return fn+" "+ln;
////
////	}
////};
////
////int main()
////{
////name n1;
////n1.fn="sachin";
////n1.ln="vishal";
////cout<<n1.gfn()<<endl;
////
////name n2;
////n2.fn="arth";
////n2.ln="yadav";
////cout<<n2.gfn()<<endl;
////
////name n3;
////n3.fn="suraj";
////n3.ln="yadav";
////cout<<n3.gfn();
////}
//
//#include<iostream>
//#include<string>
//using namespace std;
//
//class name
//{
//public:
//	string fn;
//	string ln;
//	string gfn()
//	{
//	return fn+" "+ln;
//
//	}
//void displayDetails();
//};
//void name::displayDetails()
//{
//cout<<"name:"<<gfn()<<endl;
//}
//int main()
//{
//name n1;
//n1.fn="sachin";
//n1.ln="vishal";
//n1.displayDetails();
//
//name n2;
//n2.fn="arth";
//n2.ln="yadav";
//n2.displayDetails();
//
//name n3;
//n3.fn="suraj";
//n3.ln="yadav";
//n3.displayDetails();
//}

/* #include<iostream>
#include<string>
using namespace std;

class employee{
public:
	string name;
	string dept;
	string company;
	int id;
	int salary;
void displayDetails();
};
void employee::displayDetails()
{
cout<<"name:"<<name<<endl<<"department:"<<dept<<endl<<"company:"<<company<<endl<<"id no:"<<id<<endl<<"salary:"<<salary<<endl<<endl;
}
int main()
{
employee emp1;
cout<<"enter employee name:";
getline(cin,emp1.name);
cout<<"enter department name:";
getline(cin,emp1.dept);
cout<<"enter company name: ";
getline(cin,emp1.company);
cout<<"enter id no:";
cin>>emp1.id;
cout<<"enter salary:";
cin>>emp1.salary;

emp1.displayDetails();

employee emp2;
cout<<"enter employee name:";
getline(cin,emp2.name);
cout<<"enter department name:";
getline(cin,emp2.dept);
cout<<"enter company name: ";
getline(cin,emp2.company);
cout<<"enter id no:";
cin>>emp2.id;
cout<<"enter salary:";
cin>>emp2.salary;

emp2.displayDetails();

employee emp3;
cout<<"enter employee name:";
getline(cin,emp3.name);
cout<<"enter department name:";
getline(cin,emp3.dept);
cout<<"enter company name: ";
getline(cin,emp3.company);
cout<<"enter id no:";
cin>>emp3.id;
cout<<"enter salary:";
cin>>emp3.salary;
emp3.displayDetails();
}






 */