//#include "List.h"
//#include "Address.h"
//#include "Contact.h"
//#include "ContactsBook.h"
//#include"HistoryObjects.h"
//#include"History.h"
//#include<iostream>
//#include<fstream>
//#include<string>
//#include<ctime>
//#include<chrono>
//#include<iostream>
//#include<string>
//using namespace std;
//
//template<class T>
//List<T>::List(int size)
//{
//	total_size = size;
//	arr = new T[total_size];
//	created_objects = 0;
//}
//template<>
//List<History>::List(int size)
//{
//	total_size = size;
//	arr = new History[total_size];
//	created_objects = 0;
//}
//template<class T>
//List<T>::List()
//{
//	total_size = 5;
//	arr = new T[total_size];
//	created_objects = 0;
//}
//template<class T>
//void List<T>::AddItem(T obj)
//{
//	if (this->full())
//	{
//		cout << "resizing list\n";
//		this->resize_list();
//		arr[created_objects] = obj;
//		created_objects++;
//		cout << "Item added successfully\n";
//	}
//	else
//	{
//		arr[created_objects] = obj;
//		created_objects++;
//		cout << "Item added successfully\n";
//	}
//}
//template<class T>
//void List<T>::resize_list()
//{
//	this->total_size += 2;
//	T* temp = new T[total_size];
//
//	for (int i = 0; i < created_objects; i++)
//	{
//		temp[i] = arr[i];
//	}
//	arr = temp;
//
//}
//template<class T>
//bool List<T>::full()
//{
//	if (created_objects >= total_size)
//	{
//		return true;
//	}
//	else
//		return false;
//}
//template<class T>
//void List<T>::RemoveItem(int i)
//{
//
//}
//template<class T>
//void List<T>::setSize(int s)
//{
// total_size=s;
//}
//template<class T>
//T *List<T>::getArr()
//{
//	return arr;
//}
//template<class T>
//T List<T>::getSize()
//{
//	return total_size;
//}
//template<class T>
//List<T>::~List()
//{
//	delete arr;
//     arr=NULL;
//}