#pragma once

#include <msclr/marshal.h>
#include <msclr/marshal_cppstd.h>
#include "Classes.h"
#include <algorithm>

namespace CPSortSymbols {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^  richTextBox1;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::RichTextBox^  richTextBox3;
	private: System::Windows::Forms::RichTextBox^  richTextBox4;
	private: System::Windows::Forms::RichTextBox^  richTextBox5;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  textBox18;
	private: System::Windows::Forms::TextBox^  textBox19;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::TextBox^  textBox20;

	protected: 

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox4 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox5 = (gcnew System::Windows::Forms::RichTextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->AcceptsTab = true;
			this->richTextBox1->Location = System::Drawing::Point(4, 31);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(289, 180);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(4, 217);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(289, 61);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Выполнить сортировку";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click_1);
			// 
			// richTextBox2
			// 
			this->richTextBox2->AcceptsTab = true;
			this->richTextBox2->Location = System::Drawing::Point(404, 6);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(289, 108);
			this->richTextBox2->TabIndex = 4;
			this->richTextBox2->Text = L"";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(4, 284);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(65, 20);
			this->textBox1->TabIndex = 5;
			this->textBox1->Text = L"\"Пузырёк\"";
			// 
			// richTextBox3
			// 
			this->richTextBox3->AcceptsTab = true;
			this->richTextBox3->Location = System::Drawing::Point(404, 120);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(289, 108);
			this->richTextBox3->TabIndex = 6;
			this->richTextBox3->Text = L"";
			// 
			// richTextBox4
			// 
			this->richTextBox4->AcceptsTab = true;
			this->richTextBox4->Location = System::Drawing::Point(404, 234);
			this->richTextBox4->Name = L"richTextBox4";
			this->richTextBox4->Size = System::Drawing::Size(289, 108);
			this->richTextBox4->TabIndex = 7;
			this->richTextBox4->Text = L"";
			// 
			// richTextBox5
			// 
			this->richTextBox5->AcceptsTab = true;
			this->richTextBox5->Location = System::Drawing::Point(404, 348);
			this->richTextBox5->Name = L"richTextBox5";
			this->richTextBox5->Size = System::Drawing::Size(289, 108);
			this->richTextBox5->TabIndex = 8;
			this->richTextBox5->Text = L"";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(4, 310);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(65, 20);
			this->textBox2->TabIndex = 9;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(75, 284);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(65, 20);
			this->textBox3->TabIndex = 10;
			this->textBox3->Text = L"Выбором";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(75, 310);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(65, 20);
			this->textBox4->TabIndex = 11;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(146, 284);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(65, 20);
			this->textBox5->TabIndex = 12;
			this->textBox5->Text = L"Вставками";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(146, 310);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(65, 20);
			this->textBox6->TabIndex = 13;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(217, 284);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(65, 20);
			this->textBox7->TabIndex = 14;
			this->textBox7->Text = L"Обменом";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(217, 310);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(65, 20);
			this->textBox8->TabIndex = 15;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(288, 310);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(51, 20);
			this->textBox9->TabIndex = 16;
			this->textBox9->Text = L": секунд";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(333, 6);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(65, 20);
			this->textBox10->TabIndex = 17;
			this->textBox10->Text = L"\"Пузырёк\"";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(333, 120);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(65, 20);
			this->textBox11->TabIndex = 18;
			this->textBox11->Text = L"Выбором";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(333, 234);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(65, 20);
			this->textBox12->TabIndex = 19;
			this->textBox12->Text = L"Вставками";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(333, 348);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(65, 20);
			this->textBox13->TabIndex = 20;
			this->textBox13->Text = L"Обменом";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox18);
			this->groupBox1->Controls->Add(this->textBox19);
			this->groupBox1->Controls->Add(this->textBox16);
			this->groupBox1->Controls->Add(this->textBox17);
			this->groupBox1->Controls->Add(this->textBox14);
			this->groupBox1->Controls->Add(this->textBox15);
			this->groupBox1->Location = System::Drawing::Point(4, 347);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(289, 108);
			this->groupBox1->TabIndex = 21;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Самая эффективная сортировка";
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(142, 71);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(136, 20);
			this->textBox18->TabIndex = 15;
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(6, 71);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(130, 20);
			this->textBox19->TabIndex = 14;
			this->textBox19->Text = L"Время сортировки:";
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(142, 45);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(136, 20);
			this->textBox16->TabIndex = 13;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(142, 19);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(136, 20);
			this->textBox17->TabIndex = 12;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(6, 45);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(130, 20);
			this->textBox14->TabIndex = 11;
			this->textBox14->Text = L"Название:";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(6, 19);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(130, 20);
			this->textBox15->TabIndex = 10;
			this->textBox15->Text = L"Количество элементов:";
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(4, 5);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(289, 20);
			this->textBox20->TabIndex = 22;
			this->textBox20->Text = L"Введите текст для сортировки:";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(699, 461);
			this->Controls->Add(this->textBox20);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->richTextBox5);
			this->Controls->Add(this->richTextBox4);
			this->Controls->Add(this->richTextBox3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox1);
			this->Name = L"MainForm";
			this->Text = L"Анализ методов сортировки";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) 
{
	richTextBox2->Text = "";
	richTextBox3->Text = "";
	richTextBox4->Text = "";
	richTextBox5->Text = "";
	textBox2->Text = "";
	textBox4->Text = "";
	textBox6->Text = "";
	textBox8->Text = "";
	textBox16->Text = "";
	textBox17->Text = "";
	textBox18->Text = "";
			
	if(richTextBox1->Text != "")
	{	
		textBox17->Text = System::Convert::ToString(richTextBox1->Text->Length);

		BubbleSort ^bs = gcnew BubbleSort(richTextBox1->Text);
		bs->makeSort();
		richTextBox2->Text = bs->getResultArray();
		textBox2->Text = System::Convert::ToString(bs->getTime());
		Windows::Forms::MessageBox::Show("Bubble sort!");

		SelectionSort ^ss = gcnew SelectionSort(richTextBox1->Text);
		ss->makeSort();
		richTextBox3->Text = ss->getResultArray();
		textBox4->Text = System::Convert::ToString(ss->getTime());
		Windows::Forms::MessageBox::Show("Selection sort!");

		InsertionSort ^is = gcnew InsertionSort(richTextBox1->Text);
		is->makeSort();
		richTextBox4->Text = is->getResultArray();
		textBox6->Text = System::Convert::ToString(is->getTime());
		Windows::Forms::MessageBox::Show("Insertion sort!");

		ExchangeSort ^es = gcnew ExchangeSort(richTextBox1->Text);
		es->makeSort();
		richTextBox5->Text = es->getResultArray();
		textBox8->Text = System::Convert::ToString(es->getTime());
		Windows::Forms::MessageBox::Show("Exchange sort!");

		
		if((*bs->getTime() < *ss->getTime()) && (*bs->getTime() < *is->getTime()) && (*bs->getTime() < *es->getTime()))
		{
			textBox16->Text = System::Convert::ToString("Обменом");
			textBox18->Text = System::Convert::ToString(bs->getTime());
			if(*bs->getTime() == 0)
				textBox18->Text = "not define!";
		}

		if((*ss->getTime() < *es->getTime()) && (*ss->getTime() < *is->getTime()) && (*ss->getTime() < *bs->getTime()))
		{
			textBox16->Text = System::Convert::ToString("Выбором");
			textBox18->Text = System::Convert::ToString(ss->getTime());
			if(*ss->getTime() == 0)
				textBox18->Text = "not define!";
		}		

		if((*is->getTime() < *ss->getTime()) && (*is->getTime() < *es->getTime()) && (*is->getTime() < *bs->getTime()))
		{
			textBox16->Text = System::Convert::ToString("Вставками");
			textBox18->Text = System::Convert::ToString(is->getTime());
			if(*is->getTime() == 0)
				textBox18->Text = "not define!";
		}

		if((*es->getTime() < *ss->getTime()) && (*es->getTime() < *is->getTime()) && (*es->getTime() < *bs->getTime()))
		{
			textBox16->Text = System::Convert::ToString("Обменом");
			textBox18->Text = System::Convert::ToString(es->getTime());
			if(*es->getTime() == 0)
				textBox18->Text = "not define!";
		}

		if((textBox18->Text == "") || (textBox18->Text == System::Convert::ToString(0)))
		{
			textBox16->Text = "not define!";
			textBox18->Text = "not define!";
		}
	}
	else
		Windows::Forms::MessageBox::Show("Please, input a text for sort!");
}
	};
}
