#include"History.h"
#include"HistoryObjects.h"
#include<iostream>
using namespace std;
HistoryObjects::HistoryObjects() :obj_count(0), total_obj(0)
{
	arr = NULL; count_index = 0;
}
HistoryObjects::HistoryObjects(int s)

{
	arr = new History[s];
	total_obj = s;
	obj_count = 0;
	count_index = 0;
}
void HistoryObjects::PrintReverse()
{
	for (int i = obj_count - 1; i >= 0; i--)
	{
		cout << arr[i];
	}
}
//void HistoryObjects::Printtop5()
//{
//	Top5(0);
//	count_index[0]--;
//}
int* HistoryObjects::getTop5(int index_count)
{
	//top5[0]=arr[0].get_index();
	count_index = new int[obj_count];
	/*int index = 1; int max = -1; int k = 0;
	for (int j = 0; j < obj_count; j++)
	{
		for (int i = 0; i < obj_count; i++)
		{
			if (arr[i].get_index() == index)
			{
			}
		}
	}*/
	int max = -1, k = 0;
	count_index[index_count]++;
	for (int i = 0; i < obj_count - 1; ++i)
	{
		for (int j = 0; j < obj_count - i - 1; ++j) {
			if (count_index[j] < count_index[j + 1]) {
				max = j + 1;
			}
		}
		if (k > 4)
			break;
		top5[k] = max;
	}
	return top5;

}
void HistoryObjects::Addhistory(History obj)
{
	if (this->historyfull())
	{
		if (obj.get_index())
			cout << "resizing list\n";
		this->resize_history();
		arr[obj_count] = obj;
		obj_count++;
		cout << "History added successfully\n";
	}
	else
	{
		arr[obj_count] = obj;
		obj_count++;
		cout << "history added successfully\n";
	}
}
bool HistoryObjects::historyfull()
{
	if (obj_count >= total_obj)
	{
		return true;
	}
	else
		return false;
}
void HistoryObjects::resize_history()
{
	this->total_obj += 2;
	History* temp = new History[total_obj];

	for (int i = 0; i < obj_count; i++)
	{
		temp[i] = (arr[i]);
	}
	arr = temp;

}
HistoryObjects::~HistoryObjects()
{
	delete arr;
	arr = NULL;
}