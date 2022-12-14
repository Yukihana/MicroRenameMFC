#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace MicroRename {

	/// <summary>
	/// Summary for ash
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class ash : public System::Windows::Forms::Form
	{
	public:
		ash(void)
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
		~ash()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  accButton;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: System::Windows::Forms::Label^  label8;
	protected: 

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ash::typeid));
			this->accButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// accButton
			// 
			this->accButton->BackColor = System::Drawing::Color::Black;
			this->accButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"accButton.BackgroundImage")));
			this->accButton->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->accButton->FlatAppearance->BorderColor = System::Drawing::Color::RoyalBlue;
			this->accButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::RoyalBlue;
			this->accButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::CornflowerBlue;
			this->accButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->accButton->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->accButton->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->accButton->Location = System::Drawing::Point(388, 263);
			this->accButton->Name = L"accButton";
			this->accButton->Size = System::Drawing::Size(100, 25);
			this->accButton->TabIndex = 0;
			this->accButton->Text = L"OK";
			this->accButton->UseVisualStyleBackColor = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(29, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(147, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"CherrySoft-X";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(28, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(209, 33);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Micro Rename";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::DarkGray;
			this->label3->Location = System::Drawing::Point(31, 97);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(93, 16);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Version 1.0.1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::DarkGray;
			this->label4->Location = System::Drawing::Point(130, 97);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(58, 16);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Build 14";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::DarkGray;
			this->label5->Location = System::Drawing::Point(31, 113);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(135, 16);
			this->label5->TabIndex = 5;
			this->label5->Text = L"by CherrySoft 2013";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::DarkGray;
			this->label6->Location = System::Drawing::Point(31, 129);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(296, 16);
			this->label6->TabIndex = 6;
			this->label6->Text = L"____________________________________";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(31, 145);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(280, 104);
			this->label7->TabIndex = 7;
			this->label7->Text = resources->GetString(L"label7.Text");
			// 
			// linkLabel1
			// 
			this->linkLabel1->ActiveLinkColor = System::Drawing::Color::LightSalmon;
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->BackColor = System::Drawing::Color::Transparent;
			this->linkLabel1->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->linkLabel1->LinkBehavior = System::Windows::Forms::LinkBehavior::HoverUnderline;
			this->linkLabel1->LinkColor = System::Drawing::Color::CornflowerBlue;
			this->linkLabel1->Location = System::Drawing::Point(277, 19);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(206, 13);
			this->linkLabel1->TabIndex = 8;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"http://www.facebook.com/lilyflowerangel";
			this->linkLabel1->VisitedLinkColor = System::Drawing::Color::CornflowerBlue;
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &ash::linkLabel1_LinkClicked);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::DarkGray;
			this->label8->Location = System::Drawing::Point(31, 81);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(242, 16);
			this->label8->TabIndex = 9;
			this->label8->Text = L"Part of project - CS-X BatchRename";
			// 
			// ash
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Lime;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->CancelButton = this->accButton;
			this->ClientSize = System::Drawing::Size(500, 300);
			this->ControlBox = false;
			this->Controls->Add(this->label8);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->accButton);
			this->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->KeyPreview = true;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"ash";
			this->Opacity = 0.85;
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"About this Program...";
			this->TransparencyKey = System::Drawing::Color::Lime;
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &ash::GripUp);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ash::GripDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &ash::GripMove);
			this->PreviewKeyDown += gcnew System::Windows::Forms::PreviewKeyDownEventHandler(this, &ash::ash_PreviewKeyDown);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ash_PreviewKeyDown(System::Object^  sender, System::Windows::Forms::PreviewKeyDownEventArgs^  e) {
				 if( e->KeyCode == Keys::Escape) this->Close();
			 }
	private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
				 System::Diagnostics::Process::Start(L"http://www.facebook.com/lilyflowerangel");
			 }
	bool mouseIsDown; Point firstPoint;
	private: System::Void GripDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)	{firstPoint = e->Location; mouseIsDown = true;}
	private: System::Void GripUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)	{mouseIsDown = false;}
	private: System::Void GripMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)	{
				if ( mouseIsDown == true )	{
					int xDiff = firstPoint.X - e->Location.X; int yDiff = firstPoint.Y - e->Location.Y; // Get the difference between the two points
					int x = this->Location.X - xDiff; int y = this->Location.Y - yDiff; this->Location = Point(x, y); // Set the new point
				}
			}
};
}