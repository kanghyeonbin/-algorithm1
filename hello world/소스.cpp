#include <iostream>
#include"c++.h"

using namespace std;
Test::Test()
{
	pri = 0;
	pub = 0;
}
Test::~Test()
{

}
void Test::Out()
{
	cout << pri << pub << endl;
}

Test test;
void main()
{
	test.Out();
	cout << test.pri << test.pub << endl;
}