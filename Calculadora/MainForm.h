#pragma once
#include <iostream>
#include "funtras.h"

namespace Calculadora {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace Funtras;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ senh;
	private: System::Windows::Forms::Button^ Help;
	protected:

	protected:

	private: System::Windows::Forms::Button^ clearAll;

	private: System::Windows::Forms::Button^ cosh;
	private: System::Windows::Forms::Button^ tanh;
	private: System::Windows::Forms::Button^ asen;
	private: System::Windows::Forms::Button^ acos;
	private: System::Windows::Forms::Button^ atan;
	private: System::Windows::Forms::Button^ sec;
	private: System::Windows::Forms::Button^ csc;
	private: System::Windows::Forms::Button^ cot;
	private: System::Windows::Forms::Button^ sen;
	private: System::Windows::Forms::Button^ cos;
	private: System::Windows::Forms::Button^ tan;
	private: System::Windows::Forms::Button^ ln;
	private: System::Windows::Forms::Button^ log10;
	private: System::Windows::Forms::Button^ logy;
	private: System::Windows::Forms::Button^ invx;
	private: System::Windows::Forms::Button^ sqrt;
	private: System::Windows::Forms::Button^ yrt;



















	private: System::Windows::Forms::TextBox^ xValue;
	private: System::Windows::Forms::TextBox^ yValue;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ exp;
	private: System::Windows::Forms::Button^ xPowy;
	private: System::Windows::Forms::Button^ xFact;




	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ Result;
	private: System::Windows::Forms::Button^ Return;


	private:


	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->senh = (gcnew System::Windows::Forms::Button());
			this->Help = (gcnew System::Windows::Forms::Button());
			this->clearAll = (gcnew System::Windows::Forms::Button());
			this->cosh = (gcnew System::Windows::Forms::Button());
			this->tanh = (gcnew System::Windows::Forms::Button());
			this->asen = (gcnew System::Windows::Forms::Button());
			this->acos = (gcnew System::Windows::Forms::Button());
			this->atan = (gcnew System::Windows::Forms::Button());
			this->sec = (gcnew System::Windows::Forms::Button());
			this->csc = (gcnew System::Windows::Forms::Button());
			this->cot = (gcnew System::Windows::Forms::Button());
			this->sen = (gcnew System::Windows::Forms::Button());
			this->cos = (gcnew System::Windows::Forms::Button());
			this->tan = (gcnew System::Windows::Forms::Button());
			this->ln = (gcnew System::Windows::Forms::Button());
			this->log10 = (gcnew System::Windows::Forms::Button());
			this->logy = (gcnew System::Windows::Forms::Button());
			this->invx = (gcnew System::Windows::Forms::Button());
			this->sqrt = (gcnew System::Windows::Forms::Button());
			this->yrt = (gcnew System::Windows::Forms::Button());
			this->xValue = (gcnew System::Windows::Forms::TextBox());
			this->yValue = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->exp = (gcnew System::Windows::Forms::Button());
			this->xPowy = (gcnew System::Windows::Forms::Button());
			this->xFact = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Result = (gcnew System::Windows::Forms::Label());
			this->Return = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// senh
			// 
			this->senh->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->senh->Location = System::Drawing::Point(37, 250);
			this->senh->Name = L"senh";
			this->senh->Size = System::Drawing::Size(141, 43);
			this->senh->TabIndex = 0;
			this->senh->Text = L"senh(x)";
			this->senh->UseVisualStyleBackColor = true;
			this->senh->Click += gcnew System::EventHandler(this, &MainForm::senh_Click);
			// 
			// Help
			// 
			this->Help->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Help->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Help->Location = System::Drawing::Point(8, 12);
			this->Help->Name = L"Help";
			this->Help->Size = System::Drawing::Size(121, 43);
			this->Help->TabIndex = 18;
			this->Help->Text = L"Help";
			this->Help->UseVisualStyleBackColor = true;
			this->Help->Click += gcnew System::EventHandler(this, &MainForm::Help_Click);
			// 
			// clearAll
			// 
			this->clearAll->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->clearAll->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->clearAll->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->clearAll->Location = System::Drawing::Point(361, 74);
			this->clearAll->Name = L"clearAll";
			this->clearAll->Size = System::Drawing::Size(121, 60);
			this->clearAll->TabIndex = 19;
			this->clearAll->Text = L"Clear All";
			this->clearAll->UseVisualStyleBackColor = true;
			this->clearAll->Click += gcnew System::EventHandler(this, &MainForm::clearAll_Click);
			// 
			// cosh
			// 
			this->cosh->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->cosh->Location = System::Drawing::Point(184, 250);
			this->cosh->Name = L"cosh";
			this->cosh->Size = System::Drawing::Size(141, 43);
			this->cosh->TabIndex = 20;
			this->cosh->Text = L"cosh(x)";
			this->cosh->UseVisualStyleBackColor = true;
			this->cosh->Click += gcnew System::EventHandler(this, &MainForm::cosh_Click);
			// 
			// tanh
			// 
			this->tanh->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tanh->Location = System::Drawing::Point(331, 250);
			this->tanh->Name = L"tanh";
			this->tanh->Size = System::Drawing::Size(141, 43);
			this->tanh->TabIndex = 21;
			this->tanh->Text = L"tanh(x)";
			this->tanh->UseVisualStyleBackColor = true;
			this->tanh->Click += gcnew System::EventHandler(this, &MainForm::tanh_Click);
			// 
			// asen
			// 
			this->asen->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->asen->Location = System::Drawing::Point(37, 299);
			this->asen->Name = L"asen";
			this->asen->Size = System::Drawing::Size(141, 43);
			this->asen->TabIndex = 24;
			this->asen->Text = L"asen(x)";
			this->asen->UseVisualStyleBackColor = true;
			this->asen->Click += gcnew System::EventHandler(this, &MainForm::asen_Click);
			// 
			// acos
			// 
			this->acos->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->acos->Location = System::Drawing::Point(184, 299);
			this->acos->Name = L"acos";
			this->acos->Size = System::Drawing::Size(141, 43);
			this->acos->TabIndex = 23;
			this->acos->Text = L"acos(x)";
			this->acos->UseVisualStyleBackColor = true;
			this->acos->Click += gcnew System::EventHandler(this, &MainForm::acos_Click);
			// 
			// atan
			// 
			this->atan->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->atan->Location = System::Drawing::Point(331, 299);
			this->atan->Name = L"atan";
			this->atan->Size = System::Drawing::Size(141, 43);
			this->atan->TabIndex = 22;
			this->atan->Text = L"atan(x)";
			this->atan->UseVisualStyleBackColor = true;
			this->atan->Click += gcnew System::EventHandler(this, &MainForm::atan_Click);
			// 
			// sec
			// 
			this->sec->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->sec->Location = System::Drawing::Point(37, 348);
			this->sec->Name = L"sec";
			this->sec->Size = System::Drawing::Size(141, 43);
			this->sec->TabIndex = 27;
			this->sec->Text = L"sec(x)";
			this->sec->UseVisualStyleBackColor = true;
			this->sec->Click += gcnew System::EventHandler(this, &MainForm::sec_Click);
			// 
			// csc
			// 
			this->csc->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->csc->Location = System::Drawing::Point(184, 348);
			this->csc->Name = L"csc";
			this->csc->Size = System::Drawing::Size(141, 43);
			this->csc->TabIndex = 26;
			this->csc->Text = L"csc(x)";
			this->csc->UseVisualStyleBackColor = true;
			this->csc->Click += gcnew System::EventHandler(this, &MainForm::csc_Click);
			// 
			// cot
			// 
			this->cot->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->cot->Location = System::Drawing::Point(331, 348);
			this->cot->Name = L"cot";
			this->cot->Size = System::Drawing::Size(141, 43);
			this->cot->TabIndex = 25;
			this->cot->Text = L"cot(x)";
			this->cot->UseVisualStyleBackColor = true;
			this->cot->Click += gcnew System::EventHandler(this, &MainForm::cot_Click);
			// 
			// sen
			// 
			this->sen->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->sen->Location = System::Drawing::Point(37, 397);
			this->sen->Name = L"sen";
			this->sen->Size = System::Drawing::Size(141, 43);
			this->sen->TabIndex = 30;
			this->sen->Text = L"sen(x)";
			this->sen->UseVisualStyleBackColor = true;
			this->sen->Click += gcnew System::EventHandler(this, &MainForm::sen_Click);
			// 
			// cos
			// 
			this->cos->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->cos->Location = System::Drawing::Point(184, 397);
			this->cos->Name = L"cos";
			this->cos->Size = System::Drawing::Size(141, 43);
			this->cos->TabIndex = 29;
			this->cos->Text = L"cos(x)";
			this->cos->UseVisualStyleBackColor = true;
			this->cos->Click += gcnew System::EventHandler(this, &MainForm::cos_Click);
			// 
			// tan
			// 
			this->tan->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tan->Location = System::Drawing::Point(331, 397);
			this->tan->Name = L"tan";
			this->tan->Size = System::Drawing::Size(141, 43);
			this->tan->TabIndex = 28;
			this->tan->Text = L"tan(x)";
			this->tan->UseVisualStyleBackColor = true;
			this->tan->Click += gcnew System::EventHandler(this, &MainForm::tan_Click);
			// 
			// ln
			// 
			this->ln->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ln->Location = System::Drawing::Point(37, 446);
			this->ln->Name = L"ln";
			this->ln->Size = System::Drawing::Size(141, 43);
			this->ln->TabIndex = 33;
			this->ln->Text = L"ln(x)";
			this->ln->UseVisualStyleBackColor = true;
			this->ln->Click += gcnew System::EventHandler(this, &MainForm::ln_Click);
			// 
			// log10
			// 
			this->log10->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->log10->Location = System::Drawing::Point(184, 446);
			this->log10->Name = L"log10";
			this->log10->Size = System::Drawing::Size(141, 43);
			this->log10->TabIndex = 32;
			this->log10->Text = L"log10(x)";
			this->log10->UseVisualStyleBackColor = true;
			this->log10->Click += gcnew System::EventHandler(this, &MainForm::log10_Click);
			// 
			// logy
			// 
			this->logy->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->logy->Location = System::Drawing::Point(331, 446);
			this->logy->Name = L"logy";
			this->logy->Size = System::Drawing::Size(141, 43);
			this->logy->TabIndex = 31;
			this->logy->Text = L"logy(x)";
			this->logy->UseVisualStyleBackColor = true;
			this->logy->Click += gcnew System::EventHandler(this, &MainForm::logy_Click);
			// 
			// invx
			// 
			this->invx->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->invx->Location = System::Drawing::Point(37, 495);
			this->invx->Name = L"invx";
			this->invx->Size = System::Drawing::Size(141, 43);
			this->invx->TabIndex = 36;
			this->invx->Text = L"1/x";
			this->invx->UseVisualStyleBackColor = true;
			this->invx->Click += gcnew System::EventHandler(this, &MainForm::invx_Click);
			// 
			// sqrt
			// 
			this->sqrt->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->sqrt->Location = System::Drawing::Point(184, 495);
			this->sqrt->Name = L"sqrt";
			this->sqrt->Size = System::Drawing::Size(141, 43);
			this->sqrt->TabIndex = 35;
			this->sqrt->Text = L"√x";
			this->sqrt->UseVisualStyleBackColor = true;
			this->sqrt->Click += gcnew System::EventHandler(this, &MainForm::sqrt_Click);
			// 
			// yrt
			// 
			this->yrt->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->yrt->Location = System::Drawing::Point(331, 495);
			this->yrt->Name = L"yrt";
			this->yrt->Size = System::Drawing::Size(141, 43);
			this->yrt->TabIndex = 34;
			this->yrt->Text = L"y√x";
			this->yrt->UseVisualStyleBackColor = true;
			this->yrt->Click += gcnew System::EventHandler(this, &MainForm::yrt_Click);
			// 
			// xValue
			// 
			this->xValue->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->xValue->BackColor = System::Drawing::Color::White;
			this->xValue->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->xValue->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->xValue->Location = System::Drawing::Point(56, 74);
			this->xValue->Name = L"xValue";
			this->xValue->Size = System::Drawing::Size(299, 22);
			this->xValue->TabIndex = 37;
			// 
			// yValue
			// 
			this->yValue->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->yValue->BackColor = System::Drawing::Color::White;
			this->yValue->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->yValue->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->yValue->Location = System::Drawing::Point(56, 114);
			this->yValue->Name = L"yValue";
			this->yValue->Size = System::Drawing::Size(299, 22);
			this->yValue->TabIndex = 38;
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(2, 62);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(49, 36);
			this->label1->TabIndex = 39;
			this->label1->Text = L"x =";
			this->label1->Click += gcnew System::EventHandler(this, &MainForm::label1_Click);
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(2, 100);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 36);
			this->label2->TabIndex = 40;
			this->label2->Text = L"y =";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(135, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(338, 50);
			this->label3->TabIndex = 41;
			this->label3->Text = L"Basic Calculator";
			this->label3->Click += gcnew System::EventHandler(this, &MainForm::label3_Click);
			// 
			// exp
			// 
			this->exp->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->exp->Location = System::Drawing::Point(37, 544);
			this->exp->Name = L"exp";
			this->exp->Size = System::Drawing::Size(141, 43);
			this->exp->TabIndex = 44;
			this->exp->Text = L"exp(x)";
			this->exp->UseVisualStyleBackColor = true;
			this->exp->Click += gcnew System::EventHandler(this, &MainForm::exp_Click);
			// 
			// xPowy
			// 
			this->xPowy->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->xPowy->Location = System::Drawing::Point(184, 544);
			this->xPowy->Name = L"xPowy";
			this->xPowy->Size = System::Drawing::Size(141, 43);
			this->xPowy->TabIndex = 43;
			this->xPowy->Text = L"x^y";
			this->xPowy->UseVisualStyleBackColor = true;
			this->xPowy->Click += gcnew System::EventHandler(this, &MainForm::xPowy_Click);
			// 
			// xFact
			// 
			this->xFact->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->xFact->Location = System::Drawing::Point(331, 544);
			this->xFact->Name = L"xFact";
			this->xFact->Size = System::Drawing::Size(141, 43);
			this->xFact->TabIndex = 42;
			this->xFact->Text = L"x!";
			this->xFact->UseVisualStyleBackColor = true;
			this->xFact->Click += gcnew System::EventHandler(this, &MainForm::xFact_Click);
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(2, 176);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(125, 33);
			this->label4->TabIndex = 45;
			this->label4->Text = L"Answer =";
			this->label4->Click += gcnew System::EventHandler(this, &MainForm::label4_Click);
			// 
			// Result
			// 
			this->Result->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Result->AutoSize = true;
			this->Result->BackColor = System::Drawing::Color::Transparent;
			this->Result->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Result->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->Result->Location = System::Drawing::Point(132, 186);
			this->Result->Name = L"Result";
			this->Result->Size = System::Drawing::Size(239, 21);
			this->Result->TabIndex = 46;
			this->Result->Text = L"Output Field                           ";
			this->Result->Click += gcnew System::EventHandler(this, &MainForm::label5_Click);
			// 
			// Return
			// 
			this->Return->Location = System::Drawing::Point(8, 9);
			this->Return->Name = L"Return";
			this->Return->Size = System::Drawing::Size(74, 33);
			this->Return->TabIndex = 47;
			this->Return->Text = L"Return";
			this->Return->UseVisualStyleBackColor = true;
			this->Return->Click += gcnew System::EventHandler(this, &MainForm::Return_Click);
			this->Return->Visible = false;
			this->Return->Enabled = false;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->ClientSize = System::Drawing::Size(507, 601);
			this->Controls->Add(this->Return);
			this->Controls->Add(this->Result);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->exp);
			this->Controls->Add(this->xPowy);
			this->Controls->Add(this->xFact);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->yValue);
			this->Controls->Add(this->xValue);
			this->Controls->Add(this->invx);
			this->Controls->Add(this->sqrt);
			this->Controls->Add(this->yrt);
			this->Controls->Add(this->ln);
			this->Controls->Add(this->log10);
			this->Controls->Add(this->logy);
			this->Controls->Add(this->sen);
			this->Controls->Add(this->cos);
			this->Controls->Add(this->tan);
			this->Controls->Add(this->sec);
			this->Controls->Add(this->csc);
			this->Controls->Add(this->cot);
			this->Controls->Add(this->asen);
			this->Controls->Add(this->acos);
			this->Controls->Add(this->atan);
			this->Controls->Add(this->tanh);
			this->Controls->Add(this->cosh);
			this->Controls->Add(this->clearAll);
			this->Controls->Add(this->Help);
			this->Controls->Add(this->senh);
			this->MaximumSize = System::Drawing::Size(523, 640);
			this->MinimumSize = System::Drawing::Size(523, 640);
			this->Name = L"MainForm";
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void senh_Click(System::Object^ sender, System::EventArgs^ e) {
	if (validateInput(this->xValue->Text, this->yValue->Text)) {
		double i = double::Parse(this->xValue->Text);
		double o = double::Parse(this->yValue->Text);

		

		Result->Text = "El valor ingresado es " + sin_t(i).ToString();
	}
	else {
		return;
	}
}
private: System::Void cosh_Click(System::Object^ sender, System::EventArgs^ e) {
	if (validateInput(this->xValue->Text, this->yValue->Text)) {
		Result->Text = "Si cosh_Click";
	}
	else {
		return;
	}
}
private: System::Void tanh_Click(System::Object^ sender, System::EventArgs^ e) {
	if (validateInput(this->xValue->Text, this->yValue->Text)) {
		Result->Text = "Si tanh_Click";
	}
	else {
		return;
	}
}
private: System::Void asen_Click(System::Object^ sender, System::EventArgs^ e) {
	if (validateInput(this->xValue->Text, this->yValue->Text)) {
		Result->Text = "Si asen_Click";
	}
	else {
		return;
	}
}
private: System::Void acos_Click(System::Object^ sender, System::EventArgs^ e) {
	if (validateInput(this->xValue->Text, this->yValue->Text)) {
		Result->Text = "Si acos_Click";
	}
	else {
		return;
	}
}
private: System::Void atan_Click(System::Object^ sender, System::EventArgs^ e) {
	if (validateInput(this->xValue->Text, this->yValue->Text)) {
		Result->Text = "Si atan_Click";
	}
	else {
		return;
	}
}
private: System::Void sec_Click(System::Object^ sender, System::EventArgs^ e) {
	if (validateInput(this->xValue->Text, this->yValue->Text)) {
		Result->Text = "Si sec_Click";
	}
	else {
		return;
	}
}
private: System::Void csc_Click(System::Object^ sender, System::EventArgs^ e) {
	if (validateInput(this->xValue->Text, this->yValue->Text)) {
		Result->Text = "Si csc_Click";
	}
	else {
		return;
	}
}
private: System::Void cot_Click(System::Object^ sender, System::EventArgs^ e) {
	if (validateInput(this->xValue->Text, this->yValue->Text)) {
		Result->Text = "Si cot_Click";
	}
	else {
		return;
	}
}
private: System::Void sen_Click(System::Object^ sender, System::EventArgs^ e) {
	if (validateInput(this->xValue->Text, this->yValue->Text)) {
		Result->Text = "Si sen_Click";
	}
	else {
		return;
	}
}
private: System::Void cos_Click(System::Object^ sender, System::EventArgs^ e) {
	if (validateInput(this->xValue->Text, this->yValue->Text)) {
		Result->Text = "Si cos_Click";
	}
	else {
		return;
	}
}
private: System::Void tan_Click(System::Object^ sender, System::EventArgs^ e) {
	if (validateInput(this->xValue->Text, this->yValue->Text)) {
		Result->Text = "Si tan_Click";
	}
	else {
		return;
	}
}
private: System::Void log10_Click(System::Object^ sender, System::EventArgs^ e) {
	if (validateInput(this->xValue->Text, this->yValue->Text)) {
		Result->Text = "Si log10_Click";
	}
	else {
		return;
	}
}
private: System::Void ln_Click(System::Object^ sender, System::EventArgs^ e) {
	if (validateInput(this->xValue->Text, this->yValue->Text)) {
		Result->Text = "Si ln_Click";
	}
	else {
		return;
	}
}
private: System::Void logy_Click(System::Object^ sender, System::EventArgs^ e) {
	if (validateInput(this->xValue->Text, this->yValue->Text)) {
		Result->Text = "Si logy_Click";
	}
	else {
		return;
	}
}
private: System::Void invx_Click(System::Object^ sender, System::EventArgs^ e) {
	if (validateInput(this->xValue->Text, this->yValue->Text)) {
		Result->Text = "Si invx_Click";
	}
	else {
		return;
	}
}
private: System::Void sqrt_Click(System::Object^ sender, System::EventArgs^ e) {
	if (validateInput(this->xValue->Text, this->yValue->Text)) {
		Result->Text = "Si sqrt_Click";
	}
	else {
		return;
	}
}
private: System::Void yrt_Click(System::Object^ sender, System::EventArgs^ e) {
	if (validateInput(this->xValue->Text, this->yValue->Text)) {
		Result->Text = "Si yrt_Click";
	}
	else {
		return;
	}
}
private: System::Void exp_Click(System::Object^ sender, System::EventArgs^ e) {
	if (validateInput(this->xValue->Text, this->yValue->Text)) {
		Result->Text = "Si exp_Click";
	}
	else {
		return;
	}
}
private: System::Void xPowy_Click(System::Object^ sender, System::EventArgs^ e) {
	if (validateInput(this->xValue->Text, this->yValue->Text)) {
		Result->Text = "Si xPowy_Click";
	}
	else {
		return;
	}
}
private: System::Void xFact_Click(System::Object^ sender, System::EventArgs^ e) {
	if (validateInput(this->xValue->Text, this->yValue->Text)) {
		Result->Text = "Si xFact_Click";
	}
	else {
		return;
	}
}
private: System::Void clearAll_Click(System::Object^ sender, System::EventArgs^ e) {
	this->xValue->ResetText();
	this->yValue->ResetText();
	Result->Text = "Output Field";
}

private: System::Void Help_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Help->Visible = false;
	this->Return->Visible = true;
	this->Return->Enabled = true;

	this->senh->Visible = false;
	this->cosh->Visible = false;
	this->tanh->Visible = false;
	this->asen->Visible = false;
	this->acos->Visible = false;
	this->atan->Visible = false;
	this->sec->Visible = false;
	this->csc->Visible = false;
	this->cot->Visible = false;
	this->sen->Visible = false;
	this->cos->Visible = false;
	this->tan->Visible = false;
	this->ln->Visible = false;
	this->log10->Visible = false;
	this->logy->Visible = false;
	this->invx->Visible = false;
	this->sqrt->Visible = false;
	this->yrt->Visible = false;
	this->exp->Visible = false;
	this->xPowy->Visible = false;
	this->xFact->Visible = false;
	this->clearAll->Visible = false;

	this->xValue->Visible = false;
	this->yValue->Visible = false;
	this->label1->Visible = false;
	this->label2->Visible = false;

	Result->Visible = false;
	label4->Visible = true;
	label3->Visible = false;

	label4->Text = "Para utilizar la calculadora debe ingresar un \nnúmero real dentro de las casillas indicadas\ncomo x o y (el separador es el punto), luego \nproceda a seleccionar entre los botones que\naparecen debajo para efectuar una operación.\n\nSi se ingresara un valor inválido le saltará\nun error de entrada y no se llevará a cabo\nla operación.\n\nTambién puede utilizar el botón Clear All \npara borrar lo ingresado en ambas entradas.";
	
	

}

private: System::Void Return_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Help->Visible = true;
	this->Return->Visible = false;
	this->Return->Enabled = false;

	this->senh->Visible = true;
	this->cosh->Visible = true;
	this->tanh->Visible = true;
	this->asen->Visible = true;
	this->acos->Visible = true;
	this->atan->Visible = true;
	this->sec->Visible = true;
	this->csc->Visible = true;
	this->cot->Visible = true;
	this->sen->Visible = true;
	this->cos->Visible = true;
	this->tan->Visible = true;
	this->ln->Visible = true;
	this->log10->Visible = true;
	this->logy->Visible = true;
	this->invx->Visible = true;
	this->sqrt->Visible = true;
	this->yrt->Visible = true;
	this->exp->Visible = true;
	this->xPowy->Visible = true;
	this->xFact->Visible = true;
	this->clearAll->Visible = true;

	this->xValue->Visible = true;
	this->yValue->Visible = true;
	this->label1->Visible = true;
	this->label2->Visible = true;
	this->label3->Visible = true;

	label4->Visible = true;
	Result->Visible = true;
	Result->Text = "Output Field";
	label4->Text = "Answer";



}


	   bool validateInput(System::String^ x, System::String^ y) {

		   try {
			   double i = double::Parse(x);
			   double o = double::Parse(y);
			   
		   }
		   catch (std::exception& e) {
			   Result->Text = "Error, el valor ingresado no es válido";
			   return false;
		   }
		   catch (System::FormatException^ e) {
			   Result->Text = "Error, el valor ingresado no es válido";
			   return false;
		   }
		   return true;
	   }

};



}
