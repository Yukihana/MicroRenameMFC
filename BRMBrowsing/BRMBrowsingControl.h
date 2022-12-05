#pragma once
#include "BRMBrowserSettings.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace BRMBrowsing {

	/// <summary>
	/// Summary for BRBrowsingControl
	/// </summary>
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	[DefaultEvent("qFileSelectionComplete")]
	public ref class BRMBrowsingControl : public System::Windows::Forms::UserControl
	{
	public:
		BRMBrowsingControl(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			jConstructorInit();
		}
		
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~BRMBrowsingControl()
		{
			jDestructor();
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::FolderBrowserDialog^  cFolder;
	private: System::Windows::Forms::Button^  xFiles;
	private: System::Windows::Forms::Button^  xFolder;
	private: System::Windows::Forms::OpenFileDialog^  cFiles;
	private: System::Windows::Forms::Label^  wLocation;
	private: System::Windows::Forms::ToolTip^  zInfo;
	private: System::Windows::Forms::Button^  xSettings;
	private: System::Windows::Forms::Button^  xLocation;
	private: System::Windows::Forms::Label^  wAdd;
	private: System::Windows::Forms::ContextMenuStrip^  yMainContext;
	private: System::Windows::Forms::ToolStripMenuItem^  nFiles;
	private: System::Windows::Forms::ToolStripMenuItem^  nFolder;
	private: System::Windows::Forms::ToolStripSeparator^  wMainContextSep1;
	private: System::Windows::Forms::ToolStripMenuItem^  nSettings;
	private: System::Windows::Forms::ToolStripSeparator^  wMainContextSep0;
	private: System::Windows::Forms::ToolStripMenuItem^  nLocation;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(BRMBrowsingControl::typeid));
			this->cFolder = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->xFiles = (gcnew System::Windows::Forms::Button());
			this->xFolder = (gcnew System::Windows::Forms::Button());
			this->cFiles = (gcnew System::Windows::Forms::OpenFileDialog());
			this->wLocation = (gcnew System::Windows::Forms::Label());
			this->zInfo = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->xSettings = (gcnew System::Windows::Forms::Button());
			this->xLocation = (gcnew System::Windows::Forms::Button());
			this->wAdd = (gcnew System::Windows::Forms::Label());
			this->yMainContext = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->nLocation = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wMainContextSep0 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->nFiles = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nFolder = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wMainContextSep1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->nSettings = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->yMainContext->SuspendLayout();
			this->SuspendLayout();
			// 
			// cFolder
			// 
			this->cFolder->Description = L"Choose the folder to load files from:";
			// 
			// xFiles
			// 
			this->xFiles->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left));
			this->xFiles->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->xFiles->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->xFiles->Location = System::Drawing::Point(54, 3);
			this->xFiles->Name = L"xFiles";
			this->xFiles->Size = System::Drawing::Size(50, 23);
			this->xFiles->TabIndex = 2;
			this->xFiles->Text = L"Files";
			this->zInfo->SetToolTip(this->xFiles, L"Click to select files");
			this->xFiles->UseVisualStyleBackColor = true;
			this->xFiles->Click += gcnew System::EventHandler(this, &BRMBrowsingControl::xFiles_Click);
			// 
			// xFolder
			// 
			this->xFolder->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left));
			this->xFolder->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->xFolder->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->xFolder->Location = System::Drawing::Point(110, 3);
			this->xFolder->Name = L"xFolder";
			this->xFolder->Size = System::Drawing::Size(50, 23);
			this->xFolder->TabIndex = 3;
			this->xFolder->Text = L"Folder";
			this->zInfo->SetToolTip(this->xFolder, L"Click to select an entire folder");
			this->xFolder->UseVisualStyleBackColor = true;
			this->xFolder->Click += gcnew System::EventHandler(this, &BRMBrowsingControl::xFolder_Click);
			// 
			// cFiles
			// 
			this->cFiles->Multiselect = true;
			// 
			// wLocation
			// 
			this->wLocation->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left));
			this->wLocation->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->wLocation->ForeColor = System::Drawing::SystemColors::WindowText;
			this->wLocation->Location = System::Drawing::Point(195, 3);
			this->wLocation->Name = L"wLocation";
			this->wLocation->Size = System::Drawing::Size(67, 23);
			this->wLocation->TabIndex = 4;
			this->wLocation->Text = L"Location:";
			this->wLocation->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// zInfo
			// 
			this->zInfo->AutomaticDelay = 0;
			this->zInfo->BackColor = System::Drawing::Color::Black;
			this->zInfo->ForeColor = System::Drawing::Color::LightSkyBlue;
			this->zInfo->ShowAlways = true;
			this->zInfo->ToolTipIcon = System::Windows::Forms::ToolTipIcon::Info;
			this->zInfo->ToolTipTitle = L"Info";
			// 
			// xSettings
			// 
			this->xSettings->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left));
			this->xSettings->FlatAppearance->BorderSize = 0;
			this->xSettings->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->xSettings->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"xSettings.Image")));
			this->xSettings->Location = System::Drawing::Point(166, 3);
			this->xSettings->Name = L"xSettings";
			this->xSettings->Size = System::Drawing::Size(23, 23);
			this->xSettings->TabIndex = 1;
			this->zInfo->SetToolTip(this->xSettings, L"Configure Settings\r\n(Not functional yet)");
			this->xSettings->UseVisualStyleBackColor = true;
			this->xSettings->Click += gcnew System::EventHandler(this, &BRMBrowsingControl::xSettings_Click);
			// 
			// xLocation
			// 
			this->xLocation->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->xLocation->BackColor = System::Drawing::Color::Transparent;
			this->xLocation->Cursor = System::Windows::Forms::Cursors::Hand;
			this->xLocation->FlatAppearance->BorderSize = 0;
			this->xLocation->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->xLocation->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->xLocation->ForeColor = System::Drawing::SystemColors::GrayText;
			this->xLocation->Location = System::Drawing::Point(268, 3);
			this->xLocation->Name = L"xLocation";
			this->xLocation->Size = System::Drawing::Size(179, 23);
			this->xLocation->TabIndex = 0;
			this->xLocation->Text = L"Pre-Load";
			this->xLocation->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->zInfo->SetToolTip(this->xLocation, L"Current Location: Click to open in explorer");
			this->xLocation->UseVisualStyleBackColor = false;
			this->xLocation->Click += gcnew System::EventHandler(this, &BRMBrowsingControl::xLocation_Click);
			// 
			// wAdd
			// 
			this->wAdd->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left));
			this->wAdd->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->wAdd->ForeColor = System::Drawing::SystemColors::WindowText;
			this->wAdd->Location = System::Drawing::Point(3, 3);
			this->wAdd->Name = L"wAdd";
			this->wAdd->Size = System::Drawing::Size(45, 23);
			this->wAdd->TabIndex = 5;
			this->wAdd->Text = L"Add:";
			this->wAdd->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// yMainContext
			// 
			this->yMainContext->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {this->nLocation, this->wMainContextSep0, 
				this->nFiles, this->nFolder, this->wMainContextSep1, this->nSettings});
			this->yMainContext->Name = L"yMainContext";
			this->yMainContext->RenderMode = System::Windows::Forms::ToolStripRenderMode::System;
			this->yMainContext->ShowImageMargin = false;
			this->yMainContext->Size = System::Drawing::Size(130, 104);
			// 
			// nLocation
			// 
			this->nLocation->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->nLocation->Name = L"nLocation";
			this->nLocation->Size = System::Drawing::Size(129, 22);
			this->nLocation->Text = L"Open Location";
			this->nLocation->Click += gcnew System::EventHandler(this, &BRMBrowsingControl::nLocation_Click);
			// 
			// wMainContextSep0
			// 
			this->wMainContextSep0->Name = L"wMainContextSep0";
			this->wMainContextSep0->Size = System::Drawing::Size(126, 6);
			// 
			// nFiles
			// 
			this->nFiles->Name = L"nFiles";
			this->nFiles->Size = System::Drawing::Size(129, 22);
			this->nFiles->Text = L"Add Files";
			this->nFiles->Click += gcnew System::EventHandler(this, &BRMBrowsingControl::nFiles_Click);
			// 
			// nFolder
			// 
			this->nFolder->Name = L"nFolder";
			this->nFolder->Size = System::Drawing::Size(129, 22);
			this->nFolder->Text = L"Add Folder";
			this->nFolder->Click += gcnew System::EventHandler(this, &BRMBrowsingControl::nFolder_Click);
			// 
			// wMainContextSep1
			// 
			this->wMainContextSep1->Name = L"wMainContextSep1";
			this->wMainContextSep1->Size = System::Drawing::Size(126, 6);
			// 
			// nSettings
			// 
			this->nSettings->Name = L"nSettings";
			this->nSettings->Size = System::Drawing::Size(129, 22);
			this->nSettings->Text = L"Configure Filters";
			this->nSettings->Click += gcnew System::EventHandler(this, &BRMBrowsingControl::nSettings_Click);
			// 
			// BRMBrowsingControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ContextMenuStrip = this->yMainContext;
			this->Controls->Add(this->wAdd);
			this->Controls->Add(this->xLocation);
			this->Controls->Add(this->xSettings);
			this->Controls->Add(this->wLocation);
			this->Controls->Add(this->xFolder);
			this->Controls->Add(this->xFiles);
			this->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F));
			this->MinimumSize = System::Drawing::Size(450, 29);
			this->Name = L"BRMBrowsingControl";
			this->Size = System::Drawing::Size(450, 29);
			this->SystemColorsChanged += gcnew System::EventHandler(this, &BRMBrowsingControl::BRMBrowsingControl_SystemColorsChanged);
			this->yMainContext->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

//Declarations/Initialization/Destruction---------------------------------------------------------------------------------------------
private:
	//Defaults
	String^ dLocation;
	Color^ dAltBackColor;
	//Components
	BRMBrowserSettings^ cSettings;
	array<String^>^ gFilenames;

//Initialization
private:
	void jConstructorInit(){
		jDataInit();
		jLoadSaveData();
		jComponentInit();
		jThemeSet();
	}
	void jDataInit(){
		//Defaults Assignment
		dLocation = L"\\";
		dAltBackColor = SystemColors::Window;
		//Global
		gFilenames = gcnew array<String^>(0);
	}
	void jComponentInit(){
		//xLocation
		this->xLocation->Text = dLocation;
		//Settings
		cSettings = gcnew BRMBrowserSettings();
		cSettings->pDefaultFilters = gcnew array<String^>(0);
		cSettings->pBlacklistFilters = cSettings->pDefaultFilters;	
	}
	void jLoadSaveData(){
		//unimplemented
	}
	void jGuiInit(){
		this->xLocation->Text = dLocation;
	}
//Destruction
	void jDestructor(){
		//Global Variable
		if( dLocation ) delete dLocation;
		if( dAltBackColor ) delete dAltBackColor;
		if( gFilenames ) delete gFilenames;
		//Components
		if( cSettings ){
			cSettings->rAuthorizeKill(true);
			cSettings->Close();
			delete cSettings;
		}

	}
//Functions - GUI/Non-essential-----------------------------------------------------------------------------------------
private:
	//Theme
	void jThemeSet(){
		//Gather Information
		Color vBG = this->BackColor;
		if( vBG.A == 0 ) vBG = (Color)dAltBackColor;
		Color vHL = SystemColors::Highlight;
		//Process new colors
		Color vOver = kCombineColor( vBG, vHL, 25, true );
		Color vDown = kCombineColor( vBG, vHL, 50, true );
		//Apply Style
		kSetColorOver(vOver);
		kSetColorDown(vDown);
	}
	//User-Interface
	void jLocation(){ kLocation( this->xLocation->Text ); }
	void jSettings(){
		this->cSettings->Show();
		this->cSettings->Activate();
	}

//Kernel - GUI/Non-essential
	//Theme
	void kSetColorOver(Color iColor){
		this->xLocation->FlatAppearance->MouseOverBackColor = iColor;
		this->xLocation->FlatAppearance->MouseDownBackColor = iColor; //exception
		this->xSettings->FlatAppearance->MouseOverBackColor = iColor;
		this->xFiles->FlatAppearance->MouseOverBackColor = iColor;
		this->xFolder->FlatAppearance->MouseOverBackColor = iColor;
	}
	void kSetColorDown(Color iColor){
		this->xSettings->FlatAppearance->MouseDownBackColor = iColor;
		this->xFiles->FlatAppearance->MouseDownBackColor = iColor;
		this->xFolder->FlatAppearance->MouseDownBackColor = iColor;
	}
	//Calculations
	Color kCombineColor(Color iBackground, Color iForeground, int iMask, bool iForceOpaque){
		int vA = ( (iBackground.A*(100-iMask)) + (iForeground.A*iMask) )/100;
		int vR = ( (iBackground.R*(100-iMask)) + (iForeground.R*iMask) )/100;
		int vG = ( (iBackground.G*(100-iMask)) + (iForeground.G*iMask) )/100;
		int vB = ( (iBackground.B*(100-iMask)) + (iForeground.B*iMask) )/100;
		if( iForceOpaque == true ) vA = 255;
		return Color::FromArgb( vA, vR, vG, vB );
	}
	//UI
	void kLocation( String^ iLocation ){
		//Deploy
		try{
			System::Diagnostics::Process::Start( iLocation );
		}catch(Exception^ e){
			MessageBox::Show( e->Message, L"Error", MessageBoxButtons::OK, MessageBoxIcon::Error );
			delete e;
		}
		//Clean-up
		delete iLocation;
		//Event
		qShellExecuted(this->xLocation, gcnew System::EventArgs());
	}
//Functions - Main-------------------------------------------------------------------------------------------------------
private:
	//Load
	void jFolder(){
		bool b = kFolder( this->xLocation->Text );
		if ( b ) jQueue(false);
	}
	void jFolder( String^ i ){
		bool b = kFolder( i );
		delete i;
		if ( b ) jQueue(false);
	}
	void jFiles(){
		bool b = kFiles( this->xLocation->Text );
		if ( b ) jQueue(true);
	}
	void jFiles( String^ i ){
		bool b = kFiles( i );
		delete i;
		if ( b ) jQueue(true);
	}
	//Queue
	void jQueue( bool iMode ){
		//Preparation		
		if( iMode )	jQueueFile();
		else jQueueFolder();
		qFileSelectionComplete( this->xLocation, gcnew System::EventArgs() );
	}
	void jQueueFile(){
		//Init
		int i = 0;
		array<String^>^ a = gcnew array<String^>( this->cFiles->FileNames->Length );
		//Assignment
		for each( String^ s in this->cFiles->FileNames ){
			this->xLocation->Text = IO::Path::GetDirectoryName(s);
			a[i++] = IO::Path::GetFileName(s); delete s;
		}
		gFilenames = a;
		//Clean-up
		delete a;
	}
	void jQueueFolder(){
		//Init
		int i = 0;
		IO::DirectoryInfo^ d = gcnew IO::DirectoryInfo( this->cFolder->SelectedPath );
		array<String^>^ a = gcnew array<String^>( d->GetFiles()->Length );
		//Assignment
		this->xLocation->Text = this->cFolder->SelectedPath;
		for each( IO::FileInfo^ f in d->GetFiles() ){ a[i++] = f->Name; delete f; }
		gFilenames = a;
		//Clean-up
		delete d; delete a;
	}
//Kernel - Main
private:
	//Load
	bool kFolder(String^ iLocation){
		//Preparation
		if( !System::IO::Directory::Exists( iLocation ) ) iLocation = dLocation;
		this->cFolder->SelectedPath = iLocation;
		bool vReturn = false;
		//Deploy
		if( this->cFolder->ShowDialog() == ::DialogResult::OK )
			vReturn = true;
		//Clean-up
		delete iLocation;
		//Return
		return vReturn;
	}
	bool kFiles(String^ iLocation){
		//Preparation
		if( !System::IO::Directory::Exists( iLocation ) ) iLocation = dLocation;
		this->cFiles->InitialDirectory = iLocation;
		bool vReturn = false;
		//Deploy
		if( this->cFiles->ShowDialog() == ::DialogResult::OK )
			vReturn = true;
		//Clean-up
		delete iLocation;
		//Return
		return vReturn;
	}
//Events-----------------------------------------------------------------------------------------------------------------
private:
	System::Void BRMBrowsingControl_SystemColorsChanged(System::Object^  sender, System::EventArgs^  e) { jThemeSet(); }
	System::Void xFolder_Click(System::Object^  sender, System::EventArgs^  e) { jFolder(); }
	System::Void nFolder_Click(System::Object^  sender, System::EventArgs^  e) { jFolder(); }
	System::Void xFiles_Click(System::Object^  sender, System::EventArgs^  e) { jFiles(); }
	System::Void nFiles_Click(System::Object^  sender, System::EventArgs^  e) { jFiles(); }
	System::Void xSettings_Click(System::Object^  sender, System::EventArgs^  e) { jSettings(); }
	System::Void nSettings_Click(System::Object^  sender, System::EventArgs^  e) { jSettings(); }
	System::Void xLocation_Click(System::Object^  sender, System::EventArgs^  e) { jLocation(); }
	System::Void nLocation_Click(System::Object^  sender, System::EventArgs^  e) { jLocation(); }
//Public-----------------------------------------------------------------------------------------------------------------
public:
	//Properties
	[DisplayName(L"Location")]
	[Category(L"CSX")]
	[DefaultValue(L"\\")]
	property String^ pLocation{
		void set(String^ i){ this->xLocation->Text = i; delete i; }
		String^ get(void){ return this->xLocation->Text; }
	}
	[DisplayName(L"BlacklistFilters")]
	[Category(L"CSX")]
	property array<String^>^ pBlacklistFilters{
		void set(array<String^>^ i){ cSettings->pBlacklistFilters = i; delete i; }
		array<String^>^ get(void){ return cSettings->pBlacklistFilters; }
	}
	[DisplayName(L"DefaultFilters")]
	[Category(L"CSX")]
	property array<String^>^ pDefaultFilters{
		void set(array<String^>^ i){ cSettings->pDefaultFilters = i; delete i; }
		array<String^>^ get(void){ return cSettings->pDefaultFilters; }
	}
	[DisplayName(L"UseWhitelistMode")]
	[Category(L"CSX")]
	[DefaultValue(false)]
	property bool pUseWhitelistMode{
		void set( bool i ){ cSettings->pUseWhitelistMode = i; }
		bool get(){ return cSettings->pUseWhitelistMode; }
	}
	//Methods
	void rShowFilesDialog(){ jFiles(); }
	void rShowFolderDialog(){ jFolder(); }
	void rShowFilesDialog( String^ iInitialDirectory ){ jFiles( iInitialDirectory ); delete iInitialDirectory; }
	void rShowFolderDialog( String^ iInitialDirectory ){ jFolder( iInitialDirectory ); delete iInitialDirectory; }
	array<String^>^ rGetFilenames(){ return gFilenames; }
	//Events
	event EventHandler^ qFileSelectionComplete;
	event EventHandler^ qShellExecuted;
};
}