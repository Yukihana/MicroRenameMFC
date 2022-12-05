#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace BRMBrowsing {

	/// <summary>
	/// Summary for BRMBrowserSettings
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class BRMBrowserSettings : public System::Windows::Forms::Form
	{
	public:
		BRMBrowserSettings(void)
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
		~BRMBrowserSettings()
		{
			jDestructor();
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  yTab;
	private: System::Windows::Forms::TabPage^  yTab0Filters;
	private: System::Windows::Forms::Button^  xCancel;
	private: System::Windows::Forms::Button^  xOK;
	private: System::Windows::Forms::GroupBox^  yList;
	private: System::Windows::Forms::ListBox^  xList;
	private: System::Windows::Forms::GroupBox^  yAdd;
	private: System::Windows::Forms::TextBox^  xNew;
	private: System::Windows::Forms::Button^  xAdd;
	private: System::Windows::Forms::Button^  xClear;
	private: System::Windows::Forms::Button^  xDel;
	private: System::Windows::Forms::PictureBox^  tListHelp;
	private: System::Windows::Forms::ToolTip^  cInfo;
	private: System::Windows::Forms::GroupBox^  yPreset;
	private: System::Windows::Forms::PictureBox^  tAddHelp;
	private: System::Windows::Forms::FlowLayoutPanel^  yPresetFlow;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::CheckBox^  checkBox11;
	private: System::Windows::Forms::CheckBox^  checkBox4;
	private: System::Windows::Forms::CheckBox^  checkBox5;
	private: System::Windows::Forms::CheckBox^  checkBox6;
	private: System::Windows::Forms::CheckBox^  checkBox7;
	private: System::Windows::Forms::CheckBox^  checkBox8;
	private: System::Windows::Forms::CheckBox^  checkBox9;
	private: System::Windows::Forms::CheckBox^  checkBox10;
	private: System::Windows::Forms::CheckBox^  checkBox12;
	private: System::Windows::Forms::CheckBox^  checkBox13;
	private: System::Windows::Forms::CheckBox^  checkBox14;
	private: System::Windows::Forms::CheckBox^  checkBox15;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::RadioButton^  xWhite;
	private: System::Windows::Forms::RadioButton^  xBlack;
	private: System::Windows::Forms::PictureBox^  tAbout;
	private: System::ComponentModel::IContainer^  components;

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
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(BRMBrowserSettings::typeid));
			this->yTab = (gcnew System::Windows::Forms::TabControl());
			this->yTab0Filters = (gcnew System::Windows::Forms::TabPage());
			this->yPreset = (gcnew System::Windows::Forms::GroupBox());
			this->yPresetFlow = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox11 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox14 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox9 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox10 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox12 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox13 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox15 = (gcnew System::Windows::Forms::CheckBox());
			this->yAdd = (gcnew System::Windows::Forms::GroupBox());
			this->tAddHelp = (gcnew System::Windows::Forms::PictureBox());
			this->xNew = (gcnew System::Windows::Forms::TextBox());
			this->xAdd = (gcnew System::Windows::Forms::Button());
			this->yList = (gcnew System::Windows::Forms::GroupBox());
			this->xWhite = (gcnew System::Windows::Forms::RadioButton());
			this->xBlack = (gcnew System::Windows::Forms::RadioButton());
			this->tListHelp = (gcnew System::Windows::Forms::PictureBox());
			this->xClear = (gcnew System::Windows::Forms::Button());
			this->xDel = (gcnew System::Windows::Forms::Button());
			this->xList = (gcnew System::Windows::Forms::ListBox());
			this->xCancel = (gcnew System::Windows::Forms::Button());
			this->xOK = (gcnew System::Windows::Forms::Button());
			this->cInfo = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->tAbout = (gcnew System::Windows::Forms::PictureBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->yTab->SuspendLayout();
			this->yTab0Filters->SuspendLayout();
			this->yPreset->SuspendLayout();
			this->yPresetFlow->SuspendLayout();
			this->yAdd->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->tAddHelp))->BeginInit();
			this->yList->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->tListHelp))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->tAbout))->BeginInit();
			this->SuspendLayout();
			// 
			// yTab
			// 
			this->yTab->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->yTab->Controls->Add(this->yTab0Filters);
			this->yTab->Enabled = false;
			this->yTab->Location = System::Drawing::Point(12, 12);
			this->yTab->Name = L"yTab";
			this->yTab->SelectedIndex = 0;
			this->yTab->Size = System::Drawing::Size(388, 258);
			this->yTab->TabIndex = 1;
			// 
			// yTab0Filters
			// 
			this->yTab0Filters->Controls->Add(this->yPreset);
			this->yTab0Filters->Controls->Add(this->yAdd);
			this->yTab0Filters->Controls->Add(this->yList);
			this->yTab0Filters->Location = System::Drawing::Point(4, 22);
			this->yTab0Filters->Name = L"yTab0Filters";
			this->yTab0Filters->Padding = System::Windows::Forms::Padding(3);
			this->yTab0Filters->Size = System::Drawing::Size(380, 232);
			this->yTab0Filters->TabIndex = 0;
			this->yTab0Filters->Text = L"Filters";
			this->yTab0Filters->UseVisualStyleBackColor = true;
			// 
			// yPreset
			// 
			this->yPreset->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->yPreset->Controls->Add(this->yPresetFlow);
			this->yPreset->Location = System::Drawing::Point(6, 88);
			this->yPreset->Name = L"yPreset";
			this->yPreset->Size = System::Drawing::Size(216, 138);
			this->yPreset->TabIndex = 3;
			this->yPreset->TabStop = false;
			this->yPreset->Text = L"Preset Filters";
			// 
			// yPresetFlow
			// 
			this->yPresetFlow->AutoScroll = true;
			this->yPresetFlow->Controls->Add(this->checkBox1);
			this->yPresetFlow->Controls->Add(this->checkBox2);
			this->yPresetFlow->Controls->Add(this->checkBox3);
			this->yPresetFlow->Controls->Add(this->checkBox11);
			this->yPresetFlow->Controls->Add(this->checkBox14);
			this->yPresetFlow->Controls->Add(this->checkBox4);
			this->yPresetFlow->Controls->Add(this->checkBox5);
			this->yPresetFlow->Controls->Add(this->checkBox6);
			this->yPresetFlow->Controls->Add(this->checkBox7);
			this->yPresetFlow->Controls->Add(this->checkBox8);
			this->yPresetFlow->Controls->Add(this->checkBox9);
			this->yPresetFlow->Controls->Add(this->checkBox10);
			this->yPresetFlow->Controls->Add(this->checkBox12);
			this->yPresetFlow->Controls->Add(this->checkBox13);
			this->yPresetFlow->Controls->Add(this->checkBox15);
			this->yPresetFlow->Dock = System::Windows::Forms::DockStyle::Fill;
			this->yPresetFlow->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->yPresetFlow->Location = System::Drawing::Point(3, 17);
			this->yPresetFlow->Name = L"yPresetFlow";
			this->yPresetFlow->Size = System::Drawing::Size(210, 118);
			this->yPresetFlow->TabIndex = 0;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(3, 3);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(77, 17);
			this->checkBox1->TabIndex = 0;
			this->checkBox1->Text = L"thumbs.db";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(3, 26);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(78, 17);
			this->checkBox2->TabIndex = 1;
			this->checkBox2->Text = L"desktop.ini";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(3, 49);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(73, 17);
			this->checkBox3->TabIndex = 2;
			this->checkBox3->Text = L"folder.jpg";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox11
			// 
			this->checkBox11->AutoSize = true;
			this->checkBox11->Location = System::Drawing::Point(3, 72);
			this->checkBox11->Name = L"checkBox11";
			this->checkBox11->Size = System::Drawing::Size(80, 17);
			this->checkBox11->TabIndex = 10;
			this->checkBox11->Text = L"readme.txt";
			this->checkBox11->UseVisualStyleBackColor = true;
			// 
			// checkBox14
			// 
			this->checkBox14->AutoSize = true;
			this->checkBox14->Location = System::Drawing::Point(3, 95);
			this->checkBox14->Name = L"checkBox14";
			this->checkBox14->Size = System::Drawing::Size(72, 17);
			this->checkBox14->TabIndex = 13;
			this->checkBox14->Text = L"readme.*";
			this->checkBox14->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(89, 3);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(51, 17);
			this->checkBox4->TabIndex = 3;
			this->checkBox4->Text = L"*.sfv";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Location = System::Drawing::Point(89, 26);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(52, 17);
			this->checkBox5->TabIndex = 4;
			this->checkBox5->Text = L"*.nfo";
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Location = System::Drawing::Point(89, 49);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(46, 17);
			this->checkBox6->TabIndex = 5;
			this->checkBox6->Text = L"*.ini";
			this->checkBox6->UseVisualStyleBackColor = true;
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->Location = System::Drawing::Point(89, 72);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(51, 17);
			this->checkBox7->TabIndex = 6;
			this->checkBox7->Text = L"*.jpg";
			this->checkBox7->UseVisualStyleBackColor = true;
			// 
			// checkBox8
			// 
			this->checkBox8->AutoSize = true;
			this->checkBox8->Location = System::Drawing::Point(89, 95);
			this->checkBox8->Name = L"checkBox8";
			this->checkBox8->Size = System::Drawing::Size(54, 17);
			this->checkBox8->TabIndex = 7;
			this->checkBox8->Text = L"*.png";
			this->checkBox8->UseVisualStyleBackColor = true;
			// 
			// checkBox9
			// 
			this->checkBox9->AutoSize = true;
			this->checkBox9->Location = System::Drawing::Point(149, 3);
			this->checkBox9->Name = L"checkBox9";
			this->checkBox9->Size = System::Drawing::Size(56, 17);
			this->checkBox9->TabIndex = 8;
			this->checkBox9->Text = L"*.bmp";
			this->checkBox9->UseVisualStyleBackColor = true;
			// 
			// checkBox10
			// 
			this->checkBox10->AutoSize = true;
			this->checkBox10->Location = System::Drawing::Point(149, 26);
			this->checkBox10->Name = L"checkBox10";
			this->checkBox10->Size = System::Drawing::Size(48, 17);
			this->checkBox10->TabIndex = 9;
			this->checkBox10->Text = L"*.gif";
			this->checkBox10->UseVisualStyleBackColor = true;
			// 
			// checkBox12
			// 
			this->checkBox12->AutoSize = true;
			this->checkBox12->Location = System::Drawing::Point(149, 49);
			this->checkBox12->Name = L"checkBox12";
			this->checkBox12->Size = System::Drawing::Size(50, 17);
			this->checkBox12->TabIndex = 11;
			this->checkBox12->Text = L"*.txt";
			this->checkBox12->UseVisualStyleBackColor = true;
			// 
			// checkBox13
			// 
			this->checkBox13->AutoSize = true;
			this->checkBox13->Location = System::Drawing::Point(149, 72);
			this->checkBox13->Name = L"checkBox13";
			this->checkBox13->Size = System::Drawing::Size(56, 17);
			this->checkBox13->TabIndex = 12;
			this->checkBox13->Text = L"*.md5";
			this->checkBox13->UseVisualStyleBackColor = true;
			// 
			// checkBox15
			// 
			this->checkBox15->AutoSize = true;
			this->checkBox15->Location = System::Drawing::Point(149, 95);
			this->checkBox15->Name = L"checkBox15";
			this->checkBox15->Size = System::Drawing::Size(54, 17);
			this->checkBox15->TabIndex = 14;
			this->checkBox15->Text = L"*.exe";
			this->checkBox15->UseVisualStyleBackColor = true;
			// 
			// yAdd
			// 
			this->yAdd->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->yAdd->Controls->Add(this->tAddHelp);
			this->yAdd->Controls->Add(this->xNew);
			this->yAdd->Controls->Add(this->xAdd);
			this->yAdd->Location = System::Drawing::Point(6, 6);
			this->yAdd->Name = L"yAdd";
			this->yAdd->Size = System::Drawing::Size(216, 76);
			this->yAdd->TabIndex = 2;
			this->yAdd->TabStop = false;
			this->yAdd->Text = L"Add Custom Filters";
			// 
			// tAddHelp
			// 
			this->tAddHelp->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->tAddHelp->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tAddHelp.BackgroundImage")));
			this->tAddHelp->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->tAddHelp->Location = System::Drawing::Point(10, 51);
			this->tAddHelp->Name = L"tAddHelp";
			this->tAddHelp->Size = System::Drawing::Size(15, 15);
			this->tAddHelp->TabIndex = 6;
			this->tAddHelp->TabStop = false;
			this->cInfo->SetToolTip(this->tAddHelp, L"Custom filter directions:\r\n1. Entire filename\r\n    e.g.- thumbs.db\r\n2. Conditiona" 
				L"l name\r\n    e.g.- folder.*\r\n3. Conditional Extension\r\n    e.g.- *.ini");
			// 
			// xNew
			// 
			this->xNew->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->xNew->Location = System::Drawing::Point(6, 20);
			this->xNew->Name = L"xNew";
			this->xNew->Size = System::Drawing::Size(204, 21);
			this->xNew->TabIndex = 1;
			this->cInfo->SetToolTip(this->xNew, L"Enter your custom filters here");
			// 
			// xAdd
			// 
			this->xAdd->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->xAdd->Location = System::Drawing::Point(135, 47);
			this->xAdd->Name = L"xAdd";
			this->xAdd->Size = System::Drawing::Size(75, 23);
			this->xAdd->TabIndex = 0;
			this->xAdd->Text = L"Add";
			this->xAdd->UseVisualStyleBackColor = true;
			this->xAdd->Click += gcnew System::EventHandler(this, &BRMBrowserSettings::xAdd_Click);
			// 
			// yList
			// 
			this->yList->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->yList->Controls->Add(this->xWhite);
			this->yList->Controls->Add(this->xBlack);
			this->yList->Controls->Add(this->tListHelp);
			this->yList->Controls->Add(this->xClear);
			this->yList->Controls->Add(this->xDel);
			this->yList->Controls->Add(this->xList);
			this->yList->Location = System::Drawing::Point(228, 6);
			this->yList->Name = L"yList";
			this->yList->Size = System::Drawing::Size(146, 220);
			this->yList->TabIndex = 1;
			this->yList->TabStop = false;
			this->yList->Text = L"Filter Mode and List";
			// 
			// xWhite
			// 
			this->xWhite->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->xWhite->AutoSize = true;
			this->xWhite->Location = System::Drawing::Point(74, 20);
			this->xWhite->Name = L"xWhite";
			this->xWhite->Size = System::Drawing::Size(66, 17);
			this->xWhite->TabIndex = 8;
			this->xWhite->Text = L"Whitelist";
			this->xWhite->UseVisualStyleBackColor = true;
			// 
			// xBlack
			// 
			this->xBlack->AutoSize = true;
			this->xBlack->Checked = true;
			this->xBlack->Location = System::Drawing::Point(6, 20);
			this->xBlack->Name = L"xBlack";
			this->xBlack->Size = System::Drawing::Size(62, 17);
			this->xBlack->TabIndex = 7;
			this->xBlack->TabStop = true;
			this->xBlack->Text = L"Blacklist";
			this->xBlack->UseVisualStyleBackColor = true;
			// 
			// tListHelp
			// 
			this->tListHelp->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->tListHelp->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tListHelp.BackgroundImage")));
			this->tListHelp->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->tListHelp->Location = System::Drawing::Point(11, 194);
			this->tListHelp->Name = L"tListHelp";
			this->tListHelp->Size = System::Drawing::Size(15, 15);
			this->tListHelp->TabIndex = 5;
			this->tListHelp->TabStop = false;
			this->cInfo->SetToolTip(this->tListHelp, L"Any file that fulfils these\r\nconditions is ignored.");
			// 
			// xClear
			// 
			this->xClear->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->xClear->FlatAppearance->BorderSize = 0;
			this->xClear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->xClear->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"xClear.Image")));
			this->xClear->Location = System::Drawing::Point(115, 189);
			this->xClear->Name = L"xClear";
			this->xClear->Size = System::Drawing::Size(25, 25);
			this->xClear->TabIndex = 3;
			this->cInfo->SetToolTip(this->xClear, L"Reset all filters");
			this->xClear->UseVisualStyleBackColor = true;
			// 
			// xDel
			// 
			this->xDel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->xDel->FlatAppearance->BorderSize = 0;
			this->xDel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->xDel->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"xDel.Image")));
			this->xDel->Location = System::Drawing::Point(84, 189);
			this->xDel->Name = L"xDel";
			this->xDel->Size = System::Drawing::Size(25, 25);
			this->xDel->TabIndex = 4;
			this->cInfo->SetToolTip(this->xDel, L"Delete filter");
			this->xDel->UseVisualStyleBackColor = true;
			this->xDel->Click += gcnew System::EventHandler(this, &BRMBrowserSettings::xDel_Click);
			// 
			// xList
			// 
			this->xList->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->xList->FormattingEnabled = true;
			this->xList->IntegralHeight = false;
			this->xList->Location = System::Drawing::Point(6, 43);
			this->xList->Name = L"xList";
			this->xList->ScrollAlwaysVisible = true;
			this->xList->Size = System::Drawing::Size(134, 140);
			this->xList->TabIndex = 1;
			// 
			// xCancel
			// 
			this->xCancel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->xCancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->xCancel->Location = System::Drawing::Point(300, 276);
			this->xCancel->Name = L"xCancel";
			this->xCancel->Size = System::Drawing::Size(100, 25);
			this->xCancel->TabIndex = 2;
			this->xCancel->Text = L"Cancel";
			this->xCancel->UseVisualStyleBackColor = true;
			this->xCancel->Click += gcnew System::EventHandler(this, &BRMBrowserSettings::xCancel_Click);
			// 
			// xOK
			// 
			this->xOK->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->xOK->Enabled = false;
			this->xOK->Location = System::Drawing::Point(194, 276);
			this->xOK->Name = L"xOK";
			this->xOK->Size = System::Drawing::Size(100, 25);
			this->xOK->TabIndex = 3;
			this->xOK->Text = L"OK";
			this->xOK->UseVisualStyleBackColor = true;
			// 
			// cInfo
			// 
			this->cInfo->AutomaticDelay = 0;
			this->cInfo->AutoPopDelay = 0;
			this->cInfo->BackColor = System::Drawing::Color::Black;
			this->cInfo->ForeColor = System::Drawing::Color::LightSteelBlue;
			this->cInfo->InitialDelay = 0;
			this->cInfo->ReshowDelay = 0;
			this->cInfo->ShowAlways = true;
			this->cInfo->ToolTipIcon = System::Windows::Forms::ToolTipIcon::Info;
			this->cInfo->ToolTipTitle = L"Info";
			// 
			// tAbout
			// 
			this->tAbout->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->tAbout->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tAbout.BackgroundImage")));
			this->tAbout->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->tAbout->Location = System::Drawing::Point(12, 286);
			this->tAbout->Name = L"tAbout";
			this->tAbout->Size = System::Drawing::Size(15, 15);
			this->tAbout->TabIndex = 9;
			this->tAbout->TabStop = false;
			this->cInfo->SetToolTip(this->tAbout, L"Any file that fulfils these\r\nconditions is ignored.");
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// BRMBrowserSettings
			// 
			this->AcceptButton = this->xOK;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->xCancel;
			this->ClientSize = System::Drawing::Size(412, 313);
			this->Controls->Add(this->tAbout);
			this->Controls->Add(this->xOK);
			this->Controls->Add(this->xCancel);
			this->Controls->Add(this->yTab);
			this->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(400, 300);
			this->Name = L"BRMBrowserSettings";
			this->ShowInTaskbar = false;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->Text = L"Selection Settings(Disabled for now)";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &BRMBrowserSettings::BRMBrowserSettings_FormClosing);
			this->yTab->ResumeLayout(false);
			this->yTab0Filters->ResumeLayout(false);
			this->yPreset->ResumeLayout(false);
			this->yPresetFlow->ResumeLayout(false);
			this->yPresetFlow->PerformLayout();
			this->yAdd->ResumeLayout(false);
			this->yAdd->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->tAddHelp))->EndInit();
			this->yList->ResumeLayout(false);
			this->yList->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->tListHelp))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->tAbout))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

//Component Init
private:
	bool gKillSwitch;
	array<System::Windows::Forms::LinkLabel^>^ xPresets;
	array<String^>^ dFilters;

	
//Data Init
private:
	void jInitData(){
		gKillSwitch = false;
		dFilters = gcnew array<String^>(0);
	}
	void jDestructor(){}
//Events----------------------------------------------------------------------------------
private:
	//Form
	System::Void BRMBrowserSettings_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) { e->Cancel = kCheckKill(); }
	System::Void xCancel_Click(System::Object^  sender, System::EventArgs^  e) { this->Hide(); }
	
	//Filter
	System::Void xAdd_Click(System::Object^  sender, System::EventArgs^  e) { jAdd(); }
	System::Void xDel_Click(System::Object^  sender, System::EventArgs^  e) { jDel(); }
	System::Void xClear_Click(System::Object^  sender, System::EventArgs^  e) { jDel(); }

//Jobs--------------------------------------------------------------------------------------------
private:
	//Table
	void jAdd(){ kAdd(this->xNew->Text); this->xNew->Text->Empty; }
	void jDel(){}
	void jClear(){}
		
	//Filters
	array<String^>^ jGetFilters(){ return gcnew array<String^>(0); }
	void jSetFilters( array<String^>^ i ){ delete i; }
	bool jGetMode(){ return false; }
	void jSetMode( bool i ){}




//Kernel------------------------------------------------------------------------------------------
private:
	//Form
	bool kCheckKill(){
		this->Hide();
		return gKillSwitch;
	}
	//List
	void kAdd(String^ i){
		this->xList->Items->Add(i); delete i;
	}

//Public------------------------------------------------------------------------------------------
public:
	//Properties
	property array<String^>^ pDefaultFilters{
		array<String^>^ get(){ return dFilters; }
		void set( array<String^>^ iFilters ){ dFilters = iFilters ; delete iFilters; }
	}
	property array<String^>^ pBlacklistFilters{
		array<String^>^ get(){ return jGetFilters(); }
		void set( array<String^>^ iFilters ){ jSetFilters( iFilters ); delete iFilters; }
	}	
	[DefaultValue(false)]
	property bool pUseWhitelistMode{
		bool get(){ return jGetMode(); }
		void set( bool iMode ){ jSetMode( iMode ); }
	}
	//Methods
	void rAuthorizeKill(bool iAuth){ gKillSwitch = iAuth; }
	bool rAuthorizeFile(String^ i){	delete i; return true; }

};
}