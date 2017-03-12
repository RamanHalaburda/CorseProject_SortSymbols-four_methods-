#include <iostream>
#include "Classes.h"
#include <time.h>

#include <msclr/marshal.h>
#include <msclr/marshal_windows.h>
#include <msclr/marshal_atl.h>
#include <msclr/marshal_cppstd.h>
using namespace System::Runtime;
using namespace System::Runtime::InteropServices;

// конструкторы
BubbleSort::BubbleSort(System::String ^inp_str) 
{ 
	this->inputArray = inp_str; 
}

SelectionSort::SelectionSort(System::String ^inp_str) 
{	
	this->inputArray = inp_str; 
}

InsertionSort::InsertionSort(System::String ^inp_str) 
{ 
	this->inputArray = inp_str; 
}

ExchangeSort::ExchangeSort(System::String ^inp_str) 
{ 
	this->inputArray = inp_str; 
}

// методы-инициализаторы
System::Void Sort::setResultArray(System::String ^str) 
{ 
	this->resultArray = str; 
}

System::Void Sort::setTime(System::Double ^_time) 
{ 
	this->time = _time; 
}

// методы доступа
System::String ^Sort::getInputArray() 
{	
	return this->inputArray; 
}

System::String ^Sort::getResultArray() 
{ 
	return this->resultArray; 
}
System::Double ^Sort::getTime() 
{ 
	return this->time; 
}

// методы, осуществляющие сортировку
System::Void BubbleSort::makeSort()
{	
	char* res_char_arr = (char*)Marshal::StringToHGlobalAnsi(this->getInputArray()).ToPointer();

	time_t time = clock();

    int i, j, flag = 1;    // set flag to 1 to start first pass
    int temp;              // holding variable
    int str_len = strlen(res_char_arr);
    for(i = 1; (i <= str_len) && flag; i++)
    {
        flag = 0;
        for (j=0; j < (str_len - 1); j++)
        {
	        if (res_char_arr[j+1] < res_char_arr[j])      // ascending order simply changes to <
            { 
                temp = res_char_arr[j];             // swap elements
                res_char_arr[j] = res_char_arr[j+1];
                res_char_arr[j+1] = temp;
                flag = 1;               // indicates that a swap occurred.
            }
        }
    }

	this->setTime(System::Convert::ToDouble((clock() - time) / 1000.));
	System::String ^sys_str = gcnew System::String(res_char_arr);
	this->setResultArray(sys_str);	
}

System::Void SelectionSort::makeSort()
{
	char* res_char_arr = (char*)Marshal::StringToHGlobalAnsi(this->getInputArray()).ToPointer();

	time_t time = clock();

	int i, j, first, temp;
	int str_len = strlen(res_char_arr);
	for (i = str_len - 1; i > 0; i--)
	{
		first = 0;                 // initialize to subscript of first element
		for (j = 1; j <= i; j++)   // locate smallest between positions 1 and i.
		{
			if (res_char_arr[j] > res_char_arr[first])
			first = j;
		}
		temp = res_char_arr[first];   // Swap smallest found with element in position i.
		res_char_arr[first] = res_char_arr[i];
		res_char_arr[i] = temp;
	}  

	this->setTime(System::Convert::ToDouble((clock() - time) / 1000.));
	System::String ^sys_str = gcnew System::String(res_char_arr);
	this->setResultArray(sys_str);
}

System::Void InsertionSort::makeSort()
{
	char* res_char_arr = (char*)Marshal::StringToHGlobalAnsi(this->getInputArray()).ToPointer();
	
	time_t time = clock();

	int i, j, key, str_len = strlen(res_char_arr);
	for(j = 1; j < str_len; j++)
	{
		key = res_char_arr[j];
		for(i = j - 1; (i >= 0) && (res_char_arr[i] > key); i--)
		{
			res_char_arr[i+1] = res_char_arr[i];
		}
		res_char_arr[i+1] = key;
	}
	
	this->setTime(System::Convert::ToDouble((clock() - time) / 1000.));
	System::String ^sys_str = gcnew System::String(res_char_arr);
	this->setResultArray(sys_str);
}

System::Void ExchangeSort::makeSort()
{
	char* res_char_arr = (char*)Marshal::StringToHGlobalAnsi(this->getInputArray()).ToPointer();
	
	time_t time = clock();

	int i, j;
	int temp;   // holding variable
	int str_len = strlen(res_char_arr); 
	for (i=0; i< (str_len -1); i++)    // element to be compared
	{
		for(j = (i+1); j < str_len; j++)   // rest of the elements
		{
			if (res_char_arr[i] > res_char_arr[j])          // descending order
			{
				temp= res_char_arr[i];          // swap
				res_char_arr[i] = res_char_arr[j];
				res_char_arr[j] = temp;
			}
		}
	}

	this->setTime(System::Convert::ToDouble((clock() - time) / 1000.));
	System::String ^sys_str = gcnew System::String(res_char_arr);
	this->setResultArray(sys_str);
}
