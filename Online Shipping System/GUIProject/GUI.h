#pragma once
#include <cliext/queue>
//#include "cookware.h"
namespace GUIProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for GUI
	/// </summary>
	public ref class GUI : public System::Windows::Forms::Form
	{
	public:
		GUI(void)
		{
			InitializeComponent();
			
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~GUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"MV Boli", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->label1->Location = System::Drawing::Point(353, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(268, 30);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Online Shipping System";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Fuchsia;
			this->label2->Location = System::Drawing::Point(131, 70);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(113, 21);
			this->label2->TabIndex = 1;
			this->label2->Text = L"For Customers";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::Color::Fuchsia;
			this->label3->Location = System::Drawing::Point(641, 70);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(188, 21);
			this->label3->TabIndex = 2;
			this->label3->Text = L"For Shipping Department";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8.25F, System::Drawing::FontStyle::Bold));
			this->label4->ForeColor = System::Drawing::Color::Navy;
			this->label4->Location = System::Drawing::Point(36, 118);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(77, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Customer ID";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8.25F, System::Drawing::FontStyle::Bold));
			this->label5->ForeColor = System::Drawing::Color::Navy;
			this->label5->Location = System::Drawing::Point(36, 158);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(96, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Customer Name";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Navy;
			this->label6->Location = System::Drawing::Point(36, 199);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(148, 16);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Number of Cookware sets";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(220, 113);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(156, 20);
			this->textBox1->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(220, 153);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(156, 20);
			this->textBox2->TabIndex = 7;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(220, 194);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(156, 20);
			this->textBox3->TabIndex = 8;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::RoyalBlue;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(284, 373);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(92, 34);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Order";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &GUI::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::RoyalBlue;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, System::Drawing::FontStyle::Bold));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->Location = System::Drawing::Point(465, 113);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(164, 42);
			this->button2->TabIndex = 10;
			this->button2->Text = L"View Orders Report Sorted by Customer ID";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &GUI::button2_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Location = System::Drawing::Point(480, 182);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 13);
			this->label7->TabIndex = 11;
			this->label7->Click += gcnew System::EventHandler(this, &GUI::label7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8.25F, System::Drawing::FontStyle::Bold));
			this->label8->ForeColor = System::Drawing::Color::Navy;
			this->label8->Location = System::Drawing::Point(36, 240);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(117, 16);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Please Enter Priority";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(220, 235);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(156, 20);
			this->textBox4->TabIndex = 13;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(55, 273);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(256, 16);
			this->label9->TabIndex = 14;
			this->label9->Text = L"Enter 3 for Overnight delivery (highest priority).";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8.25F));
			this->label10->Location = System::Drawing::Point(55, 295);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(270, 16);
			this->label10->TabIndex = 15;
			this->label10->Text = L"Enter 2 for delivery in 2 - 3 days (medium priority).";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8.25F));
			this->label11->Location = System::Drawing::Point(55, 317);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(261, 16);
			this->label11->TabIndex = 16;
			this->label11->Text = L"Enter 1 for delivery in 5 - 7 days (lowest priority).";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(638, 235);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(214, 13);
			this->label12->TabIndex = 17;
			this->label12->Text = L"Click View Orders buttons to show the Report.";
			this->label12->Click += gcnew System::EventHandler(this, &GUI::label12_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::RoyalBlue;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, System::Drawing::FontStyle::Bold));
			this->button3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button3->Location = System::Drawing::Point(664, 113);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(151, 42);
			this->button3->TabIndex = 18;
			this->button3->Text = L"View Orders Priority Report";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &GUI::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::RoyalBlue;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, System::Drawing::FontStyle::Bold));
			this->button4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button4->Location = System::Drawing::Point(850, 113);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(146, 42);
			this->button4->TabIndex = 19;
			this->button4->Text = L"View Orders Report Sorted by Order ID";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &GUI::button4_Click);
			// 
			// GUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1037, 473);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"GUI";
			this->Text = L"GUI";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// Customer class.
		ref class Customer
		{

			// Members.
		public:
			String^ customerName;
			String^ customerID;

			Customer() {}
			Customer(String^ name) {
				this->customerName = name;
			}

			void setCustomerName(String^ name) {
				this->customerName = name;
			}
			String^ getCustomerName() {
				return this->customerName;
			}
			void setCustomerID(String^ ID) {
				this->customerID = ID;
			}
			String^ getCustomerID() {
				return this->customerID;
			}
		};

		// Cookware class.
		ref class Cookware: public Customer
		{
		
		public:
			String^ numberOfCookwareSets;

			//public:
			Cookware() {}
			Cookware(String^ sets) {
				this->numberOfCookwareSets = sets;
			}
			void setNumberOfCookwareSets(String^ sets) {
				this->numberOfCookwareSets = sets;
			}
			String^ GetNumberOfCookwareSets() {
				return this->numberOfCookwareSets;
			}

		};

		// Shipping class.
		ref class Shipping : public Cookware
		{

			// Members.
		public:
			String^ shippingPriority;

			Shipping() {

			}
			Shipping(String^ priority) {
				this->shippingPriority = priority;

			}

			void setShippingChoice(String^ priority) {
				this->shippingPriority = priority;

			}
			String^ getShippingChoice() {
				return this->shippingPriority;
			}
		};

		// ShippingDepartment class.
		ref class ShippingDepartment : public Shipping
		{

		public:
			String^ orderID;
			ShippingDepartment() {

			}

			ShippingDepartment(String^ order, String^ ID, String^ name, String^ sets, String^ priority) {
				this->orderID = order;
				this->customerID = ID;
				this->customerName = name;
				numberOfCookwareSets = sets;
				this->shippingPriority = priority;
			}

			ShippingDepartment(String^ order) {
				this->orderID = order;			
			}
			
		};

		int maxSize = 100;
		ShippingDepartment^ shippingdepartment = gcnew ShippingDepartment;
		Customer^ customer = gcnew Customer;
		Cookware^ cookware = gcnew Cookware;
		Shipping^ shipping = gcnew Shipping;

		array<String^>^ reportArr = gcnew array<String^>(maxSize);
		array<int>^ pr = gcnew array<int>(maxSize);
		array<int>^ customerID = gcnew array<int>(maxSize);
		array<int>^ cid = gcnew array<int>(maxSize);
		int count = 0;
		String^ Order = "";
		typedef cliext::priority_queue<int> Mypriority_queue;
		Mypriority_queue c1;
		

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ report = "";

		if (textBox1->Text != "" && textBox2->Text != "" && textBox3->Text != "" && textBox4->Text != "") {

			count = count + 1;


			report = report + "Order ID=" + count + "  |  Customer ID=";
			shippingdepartment->orderID = count + "";
			report = report + textBox1->Text + "  |  Customer Name=";
			customer->customerID = textBox1->Text;
			try {
				customerID[count - 1] = Convert::ToInt32(textBox1->Text);
				cid[count - 1] = customerID[count - 1];
				report = report + textBox2->Text + "  |  Cookware sets=";
				customer->customerName = textBox2->Text;
				report = report + textBox3->Text + "  |  Priority=";
				cookware->numberOfCookwareSets = textBox3->Text;
				shipping->shippingPriority = textBox4->Text;

				int pri = Convert::ToInt32(textBox4->Text);

				if (pri == 3) {
					report = report + textBox4->Text + ".High \n\n";
				}
				else if (pri == 2) {
					report = report + textBox4->Text + ".Medium \n\n";
				}
				else if (pri == 1) {
					report = report + textBox4->Text + ".Low \n\n";
				}


				pr[count - 1] = pri;
				c1.push(pr[count - 1]);


				Order = Order + report;
				reportArr[count - 1] = report;

				textBox1->Clear();
				textBox2->Clear();
				textBox3->Clear();
				textBox4->Clear();

				MessageBox::Show("Order Placed Successfully!");
			}catch (FormatException^ e) {
				MessageBox::Show("Please enter integer values for Customer ID and Priority!");
			}
			}
		else {
			MessageBox::Show("Please enter all the values");
		}
		
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

	


	InsertionSort();

	String^ str = "";
	for (int i = 0; i < count; i++) {
		for (int j = 0; j < count; j++) {
			if (cid[j] == customerID[i]) {
				str = str + reportArr[j];
				break;				
			}
		}
	}
	if (str != "") {
		label12->Hide();
		label7->Text = str;
	}
	else {
		label12->Text = "No order placed yet";
	}

}
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
}

	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {


		for (; !c1.empty(); c1.pop()) {
			Mypriority_queue::const_reference cref = c1.top();
		}

		String^ str = "";
		for (int i = 3; i > 0; i--) {
			for (int j = 0; j < count; j++) {
				if (pr[j] == i) {
					str = str + reportArr[j];
				}
			}
		}
		if (str != "") {
		label12->Hide();
		label7->Text = str;
	}
	else
		label12->Text = "No order placed yet";
}

	private: System::Void InsertionSort() {
		int i, key, j;
			for (i = 1; i < count; i++)
			{
				key = customerID[i];
				j = i - 1;

				while (j >= 0 && customerID[j] > key)
				{
					customerID[j + 1]= customerID[j];
					j = j - 1;
				}
				customerID[j + 1] = key;
			}
	}

private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	

	if (Order != "") {
		label12->Hide();
		label7->Text = Order;
	}
	else {
		label12->Text = "No order placed yet";
	}
}
private: System::Void label12_Click(System::Object^  sender, System::EventArgs^  e) {
}
};



}
