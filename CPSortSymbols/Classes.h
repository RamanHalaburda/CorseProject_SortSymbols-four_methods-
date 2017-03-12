#pragma once
#include <iostream>

ref class Sort
{
public:
	System::String ^inputArray;
	System::String ^resultArray;
	System::Double ^time;
	
	System::Void setResultArray(System::String ^str);
	System::Void setTime(System::Double ^_time);
	System::String ^getInputArray(); 
	System::String ^getResultArray();
	System::Double ^getTime();
};

ref class BubbleSort : public Sort
{
public:
	BubbleSort(System::String ^inp_str);
	System::Void makeSort();
};

ref class SelectionSort : public Sort
{
public:
	SelectionSort(System::String ^inp_str);
	System::Void makeSort();
};

ref class InsertionSort : public Sort
{
public:
	InsertionSort(System::String ^inp_str);
	System::Void makeSort();
};

ref class ExchangeSort : public Sort
{
public:
	ExchangeSort(System::String ^inp_str);
	System::Void makeSort();
};