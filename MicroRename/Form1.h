#pragma once
#include "ash.h"

namespace MicroRename {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: BRMBrowsing::BRMBrowsingControl^  brmBrowsingControl1;
	private: System::Windows::Forms::ListView^  listView1;
	private: BRNaming::BRNamingControl^  brNamingControl1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ColumnHeader^  xName;
	private: System::Windows::Forms::ColumnHeader^  xLoc;
	private: brmvbc::fmc^  fmc1;
	private: System::Windows::Forms::CheckBox^  xOverwrite;
	private: System::Windows::Forms::Button^  xClear;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  openFilesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  openFolderToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutThisProgramToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  editToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  renameToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
	private: System::Windows::Forms::ToolStripMenuItem^  resetNamingToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  clearListToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  autoRemoveMissingFilesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  autooverwriteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator3;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->xName = (gcnew System::Windows::Forms::ColumnHeader());
			this->xLoc = (gcnew System::Windows::Forms::ColumnHeader());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->xOverwrite = (gcnew System::Windows::Forms::CheckBox());
			this->xClear = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFilesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFolderToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->renameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->autoRemoveMissingFilesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->autooverwriteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->resetNamingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clearListToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutThisProgramToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fmc1 = (gcnew brmvbc::fmc());
			this->brNamingControl1 = (gcnew BRNaming::BRNamingControl());
			this->brmBrowsingControl1 = (gcnew BRMBrowsing::BRMBrowsingControl());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->AllowColumnReorder = true;
			this->listView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) {this->xName, this->xLoc});
			this->listView1->FullRowSelect = true;
			this->listView1->GridLines = true;
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(12, 59);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(575, 180);
			this->listView1->Sorting = System::Windows::Forms::SortOrder::Ascending;
			this->listView1->TabIndex = 1;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// xName
			// 
			this->xName->Text = L"Name";
			this->xName->Width = 113;
			// 
			// xLoc
			// 
			this->xLoc->Text = L"Location";
			this->xLoc->Width = 426;
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(488, 268);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 83);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Rename";
			this->button1->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// xOverwrite
			// 
			this->xOverwrite->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->xOverwrite->AutoSize = true;
			this->xOverwrite->Location = System::Drawing::Point(488, 245);
			this->xOverwrite->Name = L"xOverwrite";
			this->xOverwrite->Size = System::Drawing::Size(99, 17);
			this->xOverwrite->TabIndex = 5;
			this->xOverwrite->Text = L"Auto-overwrite";
			this->xOverwrite->UseVisualStyleBackColor = true;
			this->xOverwrite->CheckedChanged += gcnew System::EventHandler(this, &Form1::xOverwrite_Changed);
			// 
			// xClear
			// 
			this->xClear->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->xClear->FlatAppearance->BorderColor = System::Drawing::SystemColors::GrayText;
			this->xClear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->xClear->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"xClear.Image")));
			this->xClear->Location = System::Drawing::Point(488, 357);
			this->xClear->Name = L"xClear";
			this->xClear->Size = System::Drawing::Size(99, 25);
			this->xClear->TabIndex = 6;
			this->xClear->Text = L"Clear list";
			this->xClear->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->xClear->UseVisualStyleBackColor = true;
			this->xClear->Click += gcnew System::EventHandler(this, &Form1::xClear_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->fileToolStripMenuItem, 
				this->editToolStripMenuItem1, this->helpToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(599, 24);
			this->menuStrip1->TabIndex = 7;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->openFilesToolStripMenuItem, 
				this->openFolderToolStripMenuItem, this->toolStripSeparator1, this->exitToolStripMenuItem});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(35, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// openFilesToolStripMenuItem
			// 
			this->openFilesToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"openFilesToolStripMenuItem.Image")));
			this->openFilesToolStripMenuItem->Name = L"openFilesToolStripMenuItem";
			this->openFilesToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::N));
			this->openFilesToolStripMenuItem->Size = System::Drawing::Size(193, 22);
			this->openFilesToolStripMenuItem->Text = L"Add files";
			this->openFilesToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::openFilesToolStripMenuItem_Click);
			// 
			// openFolderToolStripMenuItem
			// 
			this->openFolderToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"openFolderToolStripMenuItem.Image")));
			this->openFolderToolStripMenuItem->Name = L"openFolderToolStripMenuItem";
			this->openFolderToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>(((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Shift) 
				| System::Windows::Forms::Keys::N));
			this->openFolderToolStripMenuItem->Size = System::Drawing::Size(193, 22);
			this->openFolderToolStripMenuItem->Text = L"Add folder";
			this->openFolderToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::openFolderToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(190, 6);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"exitToolStripMenuItem.Image")));
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::W));
			this->exitToolStripMenuItem->Size = System::Drawing::Size(193, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::Prog_Exit);
			// 
			// editToolStripMenuItem1
			// 
			this->editToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {this->renameToolStripMenuItem, 
				this->autoRemoveMissingFilesToolStripMenuItem, this->toolStripSeparator2, this->autooverwriteToolStripMenuItem, this->toolStripSeparator3, 
				this->resetNamingToolStripMenuItem, this->clearListToolStripMenuItem});
			this->editToolStripMenuItem1->Name = L"editToolStripMenuItem1";
			this->editToolStripMenuItem1->Size = System::Drawing::Size(37, 20);
			this->editToolStripMenuItem1->Text = L"Edit";
			// 
			// renameToolStripMenuItem
			// 
			this->renameToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"renameToolStripMenuItem.Image")));
			this->renameToolStripMenuItem->Name = L"renameToolStripMenuItem";
			this->renameToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::R));
			this->renameToolStripMenuItem->Size = System::Drawing::Size(215, 22);
			this->renameToolStripMenuItem->Text = L"Rename";
			this->renameToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// autoRemoveMissingFilesToolStripMenuItem
			// 
			this->autoRemoveMissingFilesToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"autoRemoveMissingFilesToolStripMenuItem.Image")));
			this->autoRemoveMissingFilesToolStripMenuItem->Name = L"autoRemoveMissingFilesToolStripMenuItem";
			this->autoRemoveMissingFilesToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::M));
			this->autoRemoveMissingFilesToolStripMenuItem->Size = System::Drawing::Size(215, 22);
			this->autoRemoveMissingFilesToolStripMenuItem->Text = L"Remove missing  files";
			this->autoRemoveMissingFilesToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::autoRemoveMissingFilesToolStripMenuItem_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(212, 6);
			// 
			// autooverwriteToolStripMenuItem
			// 
			this->autooverwriteToolStripMenuItem->Name = L"autooverwriteToolStripMenuItem";
			this->autooverwriteToolStripMenuItem->Size = System::Drawing::Size(215, 22);
			this->autooverwriteToolStripMenuItem->Text = L"Auto-overwrite";
			this->autooverwriteToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::xOverwrite_Changed);
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(212, 6);
			// 
			// resetNamingToolStripMenuItem
			// 
			this->resetNamingToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"resetNamingToolStripMenuItem.Image")));
			this->resetNamingToolStripMenuItem->Name = L"resetNamingToolStripMenuItem";
			this->resetNamingToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::F5));
			this->resetNamingToolStripMenuItem->Size = System::Drawing::Size(215, 22);
			this->resetNamingToolStripMenuItem->Text = L"Reset Naming";
			this->resetNamingToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::resetNamingToolStripMenuItem_Click);
			// 
			// clearListToolStripMenuItem
			// 
			this->clearListToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"clearListToolStripMenuItem.Image")));
			this->clearListToolStripMenuItem->Name = L"clearListToolStripMenuItem";
			this->clearListToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>(((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Shift) 
				| System::Windows::Forms::Keys::F5));
			this->clearListToolStripMenuItem->Size = System::Drawing::Size(215, 22);
			this->clearListToolStripMenuItem->Text = L"Clear list";
			this->clearListToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::xClear_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->aboutThisProgramToolStripMenuItem});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(40, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// aboutThisProgramToolStripMenuItem
			// 
			this->aboutThisProgramToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"aboutThisProgramToolStripMenuItem.Image")));
			this->aboutThisProgramToolStripMenuItem->Name = L"aboutThisProgramToolStripMenuItem";
			this->aboutThisProgramToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->aboutThisProgramToolStripMenuItem->Text = L"About this program";
			this->aboutThisProgramToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::aboutThisProgramToolStripMenuItem_Click);
			// 
			// fmc1
			// 
			this->fmc1->Location = System::Drawing::Point(0, 0);
			this->fmc1->Name = L"fmc1";
			this->fmc1->Size = System::Drawing::Size(0, 0);
			this->fmc1->TabIndex = 4;
			this->fmc1->Text = L"fmc1";
			// 
			// brNamingControl1
			// 
			this->brNamingControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->brNamingControl1->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F));
			this->brNamingControl1->Location = System::Drawing::Point(12, 245);
			this->brNamingControl1->MinimumSize = System::Drawing::Size(400, 137);
			this->brNamingControl1->Name = L"brNamingControl1";
			this->brNamingControl1->Size = System::Drawing::Size(470, 137);
			this->brNamingControl1->TabIndex = 2;
			// 
			// brmBrowsingControl1
			// 
			this->brmBrowsingControl1->BackColor = System::Drawing::SystemColors::Window;
			this->brmBrowsingControl1->Dock = System::Windows::Forms::DockStyle::Top;
			this->brmBrowsingControl1->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F));
			this->brmBrowsingControl1->Location = System::Drawing::Point(0, 24);
			this->brmBrowsingControl1->MinimumSize = System::Drawing::Size(450, 29);
			this->brmBrowsingControl1->Name = L"brmBrowsingControl1";
			this->brmBrowsingControl1->pBlacklistFilters = gcnew cli::array< System::String^  >(0);
			this->brmBrowsingControl1->pDefaultFilters = gcnew cli::array< System::String^  >(0);
			this->brmBrowsingControl1->Size = System::Drawing::Size(599, 29);
			this->brmBrowsingControl1->TabIndex = 0;
			this->brmBrowsingControl1->qFileSelectionComplete += gcnew System::EventHandler(this, &Form1::brmBrowsingControl1_qFileSelectionComplete);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(599, 394);
			this->Controls->Add(this->xClear);
			this->Controls->Add(this->xOverwrite);
			this->Controls->Add(this->fmc1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->brNamingControl1);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->brmBrowsingControl1);
			this->Controls->Add(this->menuStrip1);
			this->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MinimumSize = System::Drawing::Size(575, 350);
			this->Name = L"Form1";
			this->Text = L"Micro Rename";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private:
	System::Void Prog_Exit(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}
	System::Void brmBrowsingControl1_qFileSelectionComplete(System::Object^  sender, System::EventArgs^  e) {
		for each( String^ i in this->brmBrowsingControl1->rGetFilenames() ){
			ListViewItem^ l = gcnew ListViewItem(i);
			delete i;
			l->SubItems->Add(this->brmBrowsingControl1->pLocation);
			this->listView1->Items->Add(l);
			delete l;
		}
	}
	System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		for each( int i in this->listView1->SelectedIndices ){
			String^ f = this->listView1->Items[i]->Text;
			String^ g = this->listView1->Items[i]->SubItems[1]->Text;
			String^ h = this->brNamingControl1->getName();
			bool b = jRename( f, g, h );
			delete f; delete g; delete h;
			if( b == true ){
				this->listView1->Items[i]->Text = h;
				this->brNamingControl1->rDoNext();
			} else {
				break;
			}
		}
	}
	bool jRename(String^ i, String^ l, String^ n){
		bool r = false;
		String^ s = this->fmc1->Rename( l, i, n, this->xOverwrite->Checked );
		delete i; delete l; delete n;
		if( s == L"Success" ) r = true;
		else MessageBox::Show( s, L"Error", MessageBoxButtons::OK, MessageBoxIcon::Error );
		delete s;
		return r;		
	}
	System::Void xClear_Click(System::Object^  sender, System::EventArgs^  e) {
		if( MessageBox::Show(L"Do you really want to clear all the items?", L"Confirmation", MessageBoxButtons::YesNo, MessageBoxIcon::Asterisk) == ::DialogResult::Yes )
			this->listView1->Items->Clear();	
	}
	System::Void openFilesToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		this->brmBrowsingControl1->rShowFilesDialog();
	}
	System::Void openFolderToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		this->brmBrowsingControl1->rShowFolderDialog();
	}
	System::Void resetNamingToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		this->brNamingControl1->SettingsReset();
	}
	System::Void aboutThisProgramToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		ash^ a =  gcnew ash();
		a->ShowDialog();
		delete a;		
	}
	System::Void autoRemoveMissingFilesToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		for each( ListViewItem^ l in this->listView1->Items ){
			String^ s = IO::Path::Combine( l->SubItems[1]->Text, l->Text );
			if( !IO::File::Exists(s) ) this->listView1->Items->Remove( l );
			delete l; delete s;
		}		
	}
	System::Void xOverwrite_Changed(System::Object^  sender, System::EventArgs^  e) {
		if( sender->GetType()->Name != L"CheckBox" ) this->xOverwrite->Checked = !this->xOverwrite->Checked;
		this->autooverwriteToolStripMenuItem->Checked = this->xOverwrite->Checked;
	}
};
}