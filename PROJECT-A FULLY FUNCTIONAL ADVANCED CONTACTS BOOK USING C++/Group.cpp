#include<iostream>
#include<string>
#include"Group.h"
using namespace std;
Group::Group(int size)
{
	unique_id = new int[size];
}

Group::~Group()
{
}
