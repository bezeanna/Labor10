#pragma once
#using <Microsoft.VisualBasic.dll>
using namespace System::Collections::Generic;

namespace Labor10 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(195, 72);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(442, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Створити чергу цілих чисел. Знайти найбільший елемент черги.";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(76, 162);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(148, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Введіть розмір черги";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(98, 191);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 27);
			this->textBox1->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(65, 393);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(171, 52);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Додати елементи";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Location = System::Drawing::Point(314, 181);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(216, 264);
			this->listBox1->TabIndex = 4;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(595, 203);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(171, 52);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Обчислити";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(595, 343);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(171, 52);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Видалити елементи";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(98, 320);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 27);
			this->textBox2->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(87, 291);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(128, 20);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Введіть елементи";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->ClientSize = System::Drawing::Size(845, 527);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Labor10";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		System::Collections::Generic::Queue<int> myQueue1; // Оголошення черги
		int lastAddedValue;
		bool isQueueInitialized = false; // ініціалізацію черги
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!isQueueInitialized)
		{
			isQueueInitialized = true;
		}

		int size = Convert::ToInt32(textBox1->Text);

		if (myQueue1.Count < size)
		{
			int inputValue = Convert::ToInt32(textBox2->Text);

			myQueue1.Enqueue(inputValue);
			listBox1->Items->Add(inputValue.ToString());
			lastAddedValue = inputValue;
		}
		else
		{
			listBox1->Items->Add("Досягнуто ліміт чисел");
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		int maxel = Int32::MinValue;

		for each (int value in myQueue1) {
			if (value > maxel) {
				maxel = value;
			}
		}
		if (maxel != Int32::MinValue) {
			String^ result = "Найбільший елемент черги: " + maxel;
			MessageBox::Show(result);
		}
		else {
			MessageBox::Show("Черга пуста. Немає найбільшого елементу.");
		}
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (isQueueInitialized)
	{
		if (myQueue1.Count > 0)
		{
			myQueue1.Dequeue();
			listBox1->Items->Clear();
			for each (int value in myQueue1)
			{
				listBox1->Items->Add(value.ToString());
			}
		}
		else
		{
			listBox1->Items->Add("Черга порожня");
		}
	}
	else
	{
		listBox1->Items->Add("Черга ще не була ініціалізована");
	}
}
};
}
