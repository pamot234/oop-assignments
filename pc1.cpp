//============================================================================
// Name        : pc1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class personal
{
public:
	int age,weight;
	char name[20],gender[7],blood_group[4],dob[8];
      void get()
      {  cout<<"your personal details :"<<endl;
    	  cout<<"enter name :"<<endl;
    	  cin>>name;
    	  cout<<"enter age :"<<endl;
    	  cin>>age;
    	  cout<<"enter gender :"<<endl;
    	  cin>>gender;
    	  cout<<"enter blood_group :"<<endl;
    	  cin>>blood_group;
    	  cout<<"enter weight :"<<endl;
    	  cin>>weight;
    	  cout<<"date of birth :"<<endl;
    	  cin>>dob;
      }
      void show()
      {     cout<<"your personal details :"<<endl;
    	  cout<<"name is :"<<name<<endl<<"age is :"<<age<<endl<<"gender is :";
    	  cout<<gender<<endl<<"blood group :"<<blood_group<<endl<<"weight is :";
    	  cout<<weight<<endl<<"dob is :"<<dob<<endl;

      }
};
class academic
{
public:
	int roll_no,per;
	string clg,univ;
	void get1()
	{        cout<<"academic details :"<<endl;
		cout<<"enter roll no :"<<endl;
		cin>>roll_no;
		cout<<"enter college name :"<<endl;
		cin>>clg;
		cout<<"enter university name :"<<endl;
		cin>>univ;
		cout<<"enter percentage :"<<endl;
		cin>>per;
	}
	void show1()
	{    cout<<"academic details :"<<endl;
		cout<<"university is :"<<univ<<endl<<"college is :"<<clg<<endl;
		cout<<"roll no is :"<<roll_no<<endl<<"percentage is :"<<per<<endl;


	}
};
class proffessional
{
public:
	int salary,exp;
	string company;

	void get2()
	{   cout<<"professional details :"<<endl;
		cout<<"enter salary:"<<endl;
		cin>>salary;
		cout<<"enter experience :"<<endl;
		cin>>exp;
		cout<<"enter company :"<<endl;
		cin>>company;
	}
	void show2()
	{    cout<<"professional details :"<<endl;
		cout<<"company is :"<<company<<endl<<"salary is :"<<salary<<endl;
		cout<<"exp is :"<<exp<<endl;
	}


};
class employee :public personal,public academic, public proffessional
{
public:
	void last()
	{
		cout<<"thank you"<<endl;
	}
};
int main()
{
	employee p1;
	p1.get();
	p1.get1();
	p1.get2();
	p1.show();
	p1.show1();
	p1.show2();
	p1.last();
	return 0;
}
