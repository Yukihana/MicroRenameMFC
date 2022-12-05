#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace BRNaming {

	/// <summary>
	/// Summary for D3QNamingControl
	/// </summary>
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	public ref class BRNamingControl : public System::Windows::Forms::UserControl
	{
	public:
		BRNamingControl(void)
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
		~BRNamingControl()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  tPrefix;
	private: System::Windows::Forms::TextBox^  xPrefix;
	private: System::Windows::Forms::Label^  tSuffix;
	private: System::Windows::Forms::TextBox^  xSuffix;
	private: System::Windows::Forms::TableLayoutPanel^  gNumbering;
	private: System::Windows::Forms::GroupBox^  gNumber;
	private: System::Windows::Forms::GroupBox^  gDigits;
	private: System::Windows::Forms::GroupBox^  gIncrement;
	private: System::Windows::Forms::TextBox^  xPreview;
	private: System::Windows::Forms::Label^  tPreview;
	private: System::Windows::Forms::NumericUpDown^  xNumber;
	private: System::Windows::Forms::NumericUpDown^  xDigits;
	private: System::Windows::Forms::NumericUpDown^  xIncrement;
	private: System::Windows::Forms::Button^  xReset;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(BRNamingControl::typeid));
			this->tPrefix = (gcnew System::Windows::Forms::Label());
			this->xPrefix = (gcnew System::Windows::Forms::TextBox());
			this->tSuffix = (gcnew System::Windows::Forms::Label());
			this->xSuffix = (gcnew System::Windows::Forms::TextBox());
			this->gNumbering = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->gNumber = (gcnew System::Windows::Forms::GroupBox());
			this->xNumber = (gcnew System::Windows::Forms::NumericUpDown());
			this->gDigits = (gcnew System::Windows::Forms::GroupBox());
			this->xDigits = (gcnew System::Windows::Forms::NumericUpDown());
			this->gIncrement = (gcnew System::Windows::Forms::GroupBox());
			this->xIncrement = (gcnew System::Windows::Forms::NumericUpDown());
			this->xPreview = (gcnew System::Windows::Forms::TextBox());
			this->tPreview = (gcnew System::Windows::Forms::Label());
			this->xReset = (gcnew System::Windows::Forms::Button());
			this->gNumbering->SuspendLayout();
			this->gNumber->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->xNumber))->BeginInit();
			this->gDigits->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->xDigits))->BeginInit();
			this->gIncrement->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->xIncrement))->BeginInit();
			this->SuspendLayout();
			// 
			// tPrefix
			// 
			this->tPrefix->AutoSize = true;
			this->tPrefix->Location = System::Drawing::Point(3, 33);
			this->tPrefix->Name = L"tPrefix";
			this->tPrefix->Size = System::Drawing::Size(35, 13);
			this->tPrefix->TabIndex = 0;
			this->tPrefix->Text = L"Prefix";
			// 
			// xPrefix
			// 
			this->xPrefix->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->xPrefix->Location = System::Drawing::Point(54, 30);
			this->xPrefix->Name = L"xPrefix";
			this->xPrefix->Size = System::Drawing::Size(343, 21);
			this->xPrefix->TabIndex = 1;
			this->xPrefix->Text = L"Prefix_";
			this->xPrefix->TextChanged += gcnew System::EventHandler(this, &BRNamingControl::eInvoke);
			// 
			// tSuffix
			// 
			this->tSuffix->AutoSize = true;
			this->tSuffix->Location = System::Drawing::Point(3, 60);
			this->tSuffix->Name = L"tSuffix";
			this->tSuffix->Size = System::Drawing::Size(35, 13);
			this->tSuffix->TabIndex = 2;
			this->tSuffix->Text = L"Suffix";
			// 
			// xSuffix
			// 
			this->xSuffix->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->xSuffix->Location = System::Drawing::Point(54, 57);
			this->xSuffix->Name = L"xSuffix";
			this->xSuffix->Size = System::Drawing::Size(343, 21);
			this->xSuffix->TabIndex = 3;
			this->xSuffix->Text = L".ext";
			this->xSuffix->TextChanged += gcnew System::EventHandler(this, &BRNamingControl::eInvoke);
			// 
			// gNumbering
			// 
			this->gNumbering->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->gNumbering->ColumnCount = 3;
			this->gNumbering->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->gNumbering->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->gNumbering->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->gNumbering->Controls->Add(this->gNumber, 0, 0);
			this->gNumbering->Controls->Add(this->gDigits, 1, 0);
			this->gNumbering->Controls->Add(this->gIncrement, 2, 0);
			this->gNumbering->Location = System::Drawing::Point(3, 84);
			this->gNumbering->Name = L"gNumbering";
			this->gNumbering->RowCount = 1;
			this->gNumbering->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->gNumbering->Size = System::Drawing::Size(338, 50);
			this->gNumbering->TabIndex = 4;
			// 
			// gNumber
			// 
			this->gNumber->Controls->Add(this->xNumber);
			this->gNumber->Dock = System::Windows::Forms::DockStyle::Fill;
			this->gNumber->Location = System::Drawing::Point(3, 3);
			this->gNumber->Name = L"gNumber";
			this->gNumber->Size = System::Drawing::Size(163, 44);
			this->gNumber->TabIndex = 0;
			this->gNumber->TabStop = false;
			this->gNumber->Text = L"Number";
			// 
			// xNumber
			// 
			this->xNumber->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->xNumber->Location = System::Drawing::Point(6, 17);
			this->xNumber->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {9999, 0, 0, 0});
			this->xNumber->Name = L"xNumber";
			this->xNumber->Size = System::Drawing::Size(151, 21);
			this->xNumber->TabIndex = 0;
			this->xNumber->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->xNumber->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->xNumber->ValueChanged += gcnew System::EventHandler(this, &BRNamingControl::eInvoke);
			// 
			// gDigits
			// 
			this->gDigits->Controls->Add(this->xDigits);
			this->gDigits->Dock = System::Windows::Forms::DockStyle::Fill;
			this->gDigits->Location = System::Drawing::Point(172, 3);
			this->gDigits->Name = L"gDigits";
			this->gDigits->Size = System::Drawing::Size(78, 44);
			this->gDigits->TabIndex = 1;
			this->gDigits->TabStop = false;
			this->gDigits->Text = L"Digits";
			// 
			// xDigits
			// 
			this->xDigits->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->xDigits->Location = System::Drawing::Point(6, 17);
			this->xDigits->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {9, 0, 0, 0});
			this->xDigits->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->xDigits->Name = L"xDigits";
			this->xDigits->ReadOnly = true;
			this->xDigits->Size = System::Drawing::Size(66, 21);
			this->xDigits->TabIndex = 0;
			this->xDigits->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->xDigits->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {4, 0, 0, 0});
			this->xDigits->ValueChanged += gcnew System::EventHandler(this, &BRNamingControl::eInvoke);
			// 
			// gIncrement
			// 
			this->gIncrement->Controls->Add(this->xIncrement);
			this->gIncrement->Dock = System::Windows::Forms::DockStyle::Fill;
			this->gIncrement->Location = System::Drawing::Point(256, 3);
			this->gIncrement->Name = L"gIncrement";
			this->gIncrement->Size = System::Drawing::Size(79, 44);
			this->gIncrement->TabIndex = 2;
			this->gIncrement->TabStop = false;
			this->gIncrement->Text = L"Increment";
			// 
			// xIncrement
			// 
			this->xIncrement->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->xIncrement->Location = System::Drawing::Point(6, 17);
			this->xIncrement->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {9, 0, 0, 0});
			this->xIncrement->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->xIncrement->Name = L"xIncrement";
			this->xIncrement->ReadOnly = true;
			this->xIncrement->Size = System::Drawing::Size(67, 21);
			this->xIncrement->TabIndex = 0;
			this->xIncrement->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->xIncrement->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			// 
			// xPreview
			// 
			this->xPreview->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->xPreview->ForeColor = System::Drawing::SystemColors::GrayText;
			this->xPreview->Location = System::Drawing::Point(54, 3);
			this->xPreview->Name = L"xPreview";
			this->xPreview->ReadOnly = true;
			this->xPreview->Size = System::Drawing::Size(343, 21);
			this->xPreview->TabIndex = 6;
			// 
			// tPreview
			// 
			this->tPreview->AutoSize = true;
			this->tPreview->Location = System::Drawing::Point(3, 6);
			this->tPreview->Name = L"tPreview";
			this->tPreview->Size = System::Drawing::Size(45, 13);
			this->tPreview->TabIndex = 7;
			this->tPreview->Text = L"Preview";
			// 
			// xReset
			// 
			this->xReset->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->xReset->FlatAppearance->BorderColor = System::Drawing::SystemColors::GrayText;
			this->xReset->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->xReset->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"xReset.Image")));
			this->xReset->Location = System::Drawing::Point(347, 84);
			this->xReset->Name = L"xReset";
			this->xReset->Size = System::Drawing::Size(50, 50);
			this->xReset->TabIndex = 8;
			this->xReset->Text = L"Reset";
			this->xReset->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->xReset->Click += gcnew System::EventHandler(this, &BRNamingControl::eReset);
			// 
			// BRNamingControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->xReset);
			this->Controls->Add(this->tPreview);
			this->Controls->Add(this->xPreview);
			this->Controls->Add(this->gNumbering);
			this->Controls->Add(this->xSuffix);
			this->Controls->Add(this->tSuffix);
			this->Controls->Add(this->xPrefix);
			this->Controls->Add(this->tPrefix);
			this->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F));
			this->MinimumSize = System::Drawing::Size(400, 137);
			this->Name = L"BRNamingControl";
			this->Size = System::Drawing::Size(400, 137);
			this->Load += gcnew System::EventHandler(this, &BRNamingControl::Control_Load);
			this->gNumbering->ResumeLayout(false);
			this->gNumber->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->xNumber))->EndInit();
			this->gDigits->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->xDigits))->EndInit();
			this->gIncrement->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->xIncrement))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

//Internal------------------------------------------------------------------------------------------------------------
//Kernel
private:
	void doReset(){
		this->xPrefix->Text = L"Prefix_";
		this->xSuffix->Text = L".ext";
		this->xIncrement->Value = 1;
		this->xNumber->Value = 1;
		this->xDigits->Value = 4;
	}
	void doUpdate(){
		int fVar = (int)( Math::Pow(10, (int)this->xDigits->Value) -1 );
		if ( this->xNumber->Value > fVar ) this->xNumber->Value = fVar;		
		this->xPreview->Text = generateName();
		Updated( this, gcnew System::EventArgs() ); //Event Update
	}
	void doNext(){
		if( this->xNumber->Value + this->xIncrement->Value <= this->xNumber->Maximum ){
			this->xNumber->Value += this->xIncrement->Value;
		} else {
			MaximumReached( this, gcnew System::EventArgs() );
		}
	}
	String^ generatePad(){
		if( this->xNumber->Text == L"" ) this->xNumber->Value = 0;
		return this->xNumber->Value.ToString()->PadLeft((int)this->xDigits->Value,L'0');
	}
	String^ generateName(){
		return this->xPrefix->Text + generatePad() + this->xSuffix->Text;		 
	}
//Event
private:
	System::Void Control_Load(System::Object^  sender, System::EventArgs^  e) {	doUpdate(); }
	System::Void eInvoke(System::Object^  sender, System::EventArgs^  e) { doUpdate(); }
	System::Void eReset(System::Object^  sender, System::EventArgs^  e) { doReset(); }
//External---------------------------------------------------------------------------------------------------------------
//Triggers
public:
	event EventHandler^ Updated;
	event EventHandler^ MaximumReached;
//Properties
public:
	[DefaultValue(L"Prefix_")]
	property String^ Prefix{
		String^ get(){ return this->xPrefix->Text; }
		void set( String^ iVar ){ this->xPrefix->Text = iVar; delete iVar; }
	}
	[DefaultValue(L".ext")]
	property String^ Suffix{
		String^ get(){ return this->xSuffix->Text; }
		void set( String^ iVar ){ this->xSuffix->Text = iVar; delete iVar; }
	}
	[DefaultValue(1)]
	property int Value{
		int get(){ return (int)this->xNumber->Value; }
		void set( int iVar ){
			if( iVar < 0 ) iVar = 0;
			int fVar = (int)(Math::Pow( 10, (int)this->xDigits->Value ) - 1);
			if( iVar > fVar ) iVar = fVar;
			this->xNumber->Value = iVar;
		}
	}
	[DefaultValue(4)]
	property int Digits{
		int get(){ return (int)this->xDigits->Value; }
		void set( int iVar ){
			if( iVar < 1 ) iVar = 1;
			if( iVar > 9 ) iVar = 9;
			this->xDigits->Value = iVar;
		}
	}
	[DefaultValue(1)]
	property int Increment{
		int get(){ return (int)this->xIncrement->Value; }
		void set( int iVar ){
			if( iVar < 1 ) iVar = 1;
			if( iVar > 9 ) iVar = 9;
			this->xIncrement->Value = iVar;
		}
	}
//Methods
public:
	void ForceUpdate(){ doUpdate(); }
	void SettingsReset(){ doReset(); }
	void rDoNext(){ doNext(); }
	String^ getName(){ return generateName(); }
	String^ getPaddedNumber(){ return generatePad(); }
};
}
