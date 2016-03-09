#include<iostream>
#include<forward_list>
#include<list>
using namespace std;

class student
{public:

	int rollno;

};


int main1()
{
	student x[4];
	x[0].rollno = 22;
	x[1].rollno = 32;
	x[2].rollno = 33;
	x[3].rollno = 42;

	student* y = &x[1];
	y++;
	cout<<(*y).rollno<<endl;

	cout<<y->rollno;

	return 0;
}


int main2()
{
	forward_list<int> x;

      x.push_front(39);
      x.push_front(3);
      x.push_front(9);
	//x.push_back(5);
	//x.push_back(9);

	//x.end();
	cout<< *x.begin()<<endl;
	for(auto i:x)
		cout<< i<<endl;

	return 0;
}


int main3()
{
	list<int> x;

	x.push_back(2);
	x.push_back(3);
	x.push_back(4);
	x.push_back(5);
	x.push_back(6);
	x.push_back(7);
	x.push_back(8);
	x.push_back(9);

	//list<int>::iterator t;

	 auto t = x.begin();
	 t++;
	 cout<<*t<<endl;


	return 0;
}


