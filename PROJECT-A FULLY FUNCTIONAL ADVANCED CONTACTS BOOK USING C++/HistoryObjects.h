#pragma once
#pragma once
#include"History.h"
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class HistoryObjects :public History
{
public:
	HistoryObjects(int s);
	HistoryObjects();
	~HistoryObjects();
	int* getTop5(int index_count);
	void Printtop5();
	//void Addhistory(History obj);
	void Addhistory(History obj);
	void resize_history();
	void PrintReverse();
	bool historyfull();
private:
	History* arr;
	int total_obj;
	int obj_count;
	int* count_index; int top5[5];

};

