#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace BRMListing {

	/// <summary>
	/// Summary for BRMListingControl
	/// </summary>
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	public ref class BRMListingControl : public System::Windows::Forms::UserControl
	{
	public:
		BRMListingControl(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			jConstructor();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~BRMListingControl()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ToolStripContainer^  yList;
	private: System::Windows::Forms::ListView^  xList;
	private: System::Windows::Forms::ColumnHeader^  yOld;
	private: System::Windows::Forms::ColumnHeader^  yNew;
	private: System::Windows::Forms::ToolStrip^  yItemStrip;
	private: System::Windows::Forms::ColumnHeader^  yLoc;
	private: System::Windows::Forms::ContextMenuStrip^  yAddContext;
	private: System::Windows::Forms::ContextMenuStrip^  yDelContext;
	private: System::Windows::Forms::ToolStripMenuItem^  nAddContext_Files;

	private: System::Windows::Forms::ToolStripSeparator^  tAddContext_Sep0;
	private: System::Windows::Forms::ToolStripMenuItem^  nAddContext_Folder;
	private: System::Windows::Forms::ToolStripMenuItem^  nDelContext_Selected;
	private: System::Windows::Forms::ToolStripMenuItem^  nDelContext_Miss;









	private: System::Windows::Forms::ToolStripSeparator^  tDelContext_Sep0;
	private: System::Windows::Forms::ToolStripMenuItem^  nDelContext_Clear;




	private: System::Windows::Forms::ToolStripSplitButton^  mItemStrip_Add;
	private: System::Windows::Forms::ToolStripSplitButton^  mItemStrip_Del;
	private: System::Windows::Forms::ToolStripSplitButton^  mItemStrip_Shell;











	private: System::Windows::Forms::ContextMenuStrip^  yShellContext;
	private: System::Windows::Forms::ToolStripMenuItem^  nShellContext_Files;
	private: System::Windows::Forms::ToolStripSeparator^  tShellContext_Sep0;


	private: System::Windows::Forms::ToolStripMenuItem^  nShellContext_Folder;



	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem4;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator3;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem5;
	private: System::Windows::Forms::ContextMenuStrip^  yMainContext;

	private: System::Windows::Forms::ContextMenuStrip^  yMarkContext;
	private: System::Windows::Forms::ToolStripMenuItem^  nMark;
	private: System::Windows::Forms::ContextMenuStrip^  yMoveContext;
	private: System::Windows::Forms::ToolStripMenuItem^  unmarkToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator7;
	private: System::Windows::Forms::ToolStripMenuItem^  markExclusivelyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  unmarkExclusivelyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator8;
	private: System::Windows::Forms::ToolStripMenuItem^  markAllToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  unmarkAllToolStripMenuItem;
	private: System::Windows::Forms::ToolStrip^  yControlStrip;
	private: System::Windows::Forms::ToolStripButton^  mControlStrip_Sort0;
	private: System::Windows::Forms::ToolStripButton^  mControlStrip_Sort1;


	private: System::Windows::Forms::ToolStripSeparator^  tControlStrip_Sep0;
	private: System::Windows::Forms::ToolStripDropDownButton^  mControlStrip_Move0;






	private: System::Windows::Forms::ToolStripDropDownButton^  mControlStrip_Move1;












	private: System::Windows::Forms::ToolStripMenuItem^  moveUpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  moveDownToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator10;
	private: System::Windows::Forms::ToolStripMenuItem^  moveToTopToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  moveToBottomToolStripMenuItem1;







	private: System::Windows::Forms::ContextMenuStrip^  yUpContext;
	private: System::Windows::Forms::ContextMenuStrip^  yDownContext;
private: System::Windows::Forms::ToolStripMenuItem^  nMoveUpContext_Up;
private: System::Windows::Forms::ToolStripSeparator^  tMoveUpContext_Sep0;




private: System::Windows::Forms::ToolStripMenuItem^  nMoveUpContext_Top;
private: System::Windows::Forms::ToolStripMenuItem^  nMoveDownContext_Down;



private: System::Windows::Forms::ToolStripSeparator^  tMoveDownContext_Sep0;
private: System::Windows::Forms::ToolStripMenuItem^  nMoveDownContext_Bottom;


private: System::Windows::Forms::ContextMenuStrip^  yMark1Context;
private: System::Windows::Forms::ContextMenuStrip^  yMark0Context;
private: System::Windows::Forms::ToolStripMenuItem^  nMark0Context_0;

private: System::Windows::Forms::ToolStripMenuItem^  nMark0Context_X;
private: System::Windows::Forms::ToolStripSeparator^  tMark0Context_Sep0;



private: System::Windows::Forms::ToolStripMenuItem^  nMark0Context_1;
private: System::Windows::Forms::ToolStripMenuItem^  nMark1Context_1;







private: System::Windows::Forms::ToolStripMenuItem^  nMark1Context_X;

private: System::Windows::Forms::ToolStripMenuItem^  nMark1Context_0;
private: System::Windows::Forms::ToolStripSeparator^  tMark1Context_Sep0;








private: System::Windows::Forms::ToolStripSeparator^  tItemStrip_Sep0;
private: System::Windows::Forms::ToolStripButton^  mItemStrip_Naming;
private: System::Windows::Forms::ToolStripButton^  mItemStrip_Apply;













private: System::Windows::Forms::ToolStripMenuItem^  editToolStripMenuItem;
private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator12;
private: System::Windows::Forms::ToolStripMenuItem^  viewFilesToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  openInFolderToolStripMenuItem;
private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator11;
private: System::Windows::Forms::ToolStripMenuItem^  markToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  unmarkToolStripMenuItem1;
private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator13;
private: System::Windows::Forms::ToolStripMenuItem^  nMainContext_Remove;

private: System::Windows::Forms::ToolStripDropDownButton^  mControlStrip_Mark1;

private: System::Windows::Forms::ToolStripSeparator^  tControlStrip_Sep1;


private: System::Windows::Forms::ToolStripButton^  mControlStrip_Sel0;

private: System::Windows::Forms::ToolStripButton^  mControlStrip_SelX;
private: System::Windows::Forms::ToolStripDropDownButton^  mControlStrip_Mark0;







private: System::Windows::Forms::ToolStripButton^  mControlStrip_Sel1;
private: System::Windows::Forms::ToolStripButton^  mItemStrip_Edit;


private: System::Windows::Forms::ToolStripSeparator^  tItemStrip_Sep1;
private: System::Windows::Forms::ToolStripSeparator^  tControlStrip_Sep2;











	private: System::ComponentModel::IContainer^  components;


	protected: 

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(BRMListingControl::typeid));
			this->yList = (gcnew System::Windows::Forms::ToolStripContainer());
			this->yItemStrip = (gcnew System::Windows::Forms::ToolStrip());
			this->mItemStrip_Add = (gcnew System::Windows::Forms::ToolStripSplitButton());
			this->yAddContext = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->nAddContext_Files = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tAddContext_Sep0 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->nAddContext_Folder = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mItemStrip_Del = (gcnew System::Windows::Forms::ToolStripSplitButton());
			this->yDelContext = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->nDelContext_Selected = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nDelContext_Miss = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tDelContext_Sep0 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->nDelContext_Clear = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tItemStrip_Sep0 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->mItemStrip_Shell = (gcnew System::Windows::Forms::ToolStripSplitButton());
			this->yShellContext = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->nShellContext_Files = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tShellContext_Sep0 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->nShellContext_Folder = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mItemStrip_Edit = (gcnew System::Windows::Forms::ToolStripButton());
			this->tItemStrip_Sep1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->mItemStrip_Naming = (gcnew System::Windows::Forms::ToolStripButton());
			this->mItemStrip_Apply = (gcnew System::Windows::Forms::ToolStripButton());
			this->yControlStrip = (gcnew System::Windows::Forms::ToolStrip());
			this->mControlStrip_Sort0 = (gcnew System::Windows::Forms::ToolStripButton());
			this->mControlStrip_Sort1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->tControlStrip_Sep0 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->mControlStrip_Move0 = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->yUpContext = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->nMoveUpContext_Up = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tMoveUpContext_Sep0 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->nMoveUpContext_Top = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mControlStrip_Move1 = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->yDownContext = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->nMoveDownContext_Down = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tMoveDownContext_Sep0 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->nMoveDownContext_Bottom = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tControlStrip_Sep1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->mControlStrip_Mark1 = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->yMark1Context = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->nMark1Context_0 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nMark1Context_X = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tMark1Context_Sep0 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->nMark1Context_1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mControlStrip_Mark0 = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->yMark0Context = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->nMark0Context_0 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nMark0Context_X = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tMark0Context_Sep0 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->nMark0Context_1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tControlStrip_Sep2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->mControlStrip_SelX = (gcnew System::Windows::Forms::ToolStripButton());
			this->mControlStrip_Sel1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->mControlStrip_Sel0 = (gcnew System::Windows::Forms::ToolStripButton());
			this->xList = (gcnew System::Windows::Forms::ListView());
			this->yNew = (gcnew System::Windows::Forms::ColumnHeader());
			this->yOld = (gcnew System::Windows::Forms::ColumnHeader());
			this->yLoc = (gcnew System::Windows::Forms::ColumnHeader());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripMenuItem5 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->yMainContext = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator11 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->viewFilesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openInFolderToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator12 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->markToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->yMarkContext = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->nMark = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->unmarkToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator7 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->markExclusivelyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->unmarkExclusivelyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator8 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->markAllToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->unmarkAllToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->unmarkToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->yMoveContext = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->moveUpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->moveDownToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator10 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->moveToTopToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->moveToBottomToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator13 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->nMainContext_Remove = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->yList->BottomToolStripPanel->SuspendLayout();
			this->yList->ContentPanel->SuspendLayout();
			this->yList->SuspendLayout();
			this->yItemStrip->SuspendLayout();
			this->yAddContext->SuspendLayout();
			this->yDelContext->SuspendLayout();
			this->yShellContext->SuspendLayout();
			this->yControlStrip->SuspendLayout();
			this->yUpContext->SuspendLayout();
			this->yDownContext->SuspendLayout();
			this->yMark1Context->SuspendLayout();
			this->yMark0Context->SuspendLayout();
			this->yMainContext->SuspendLayout();
			this->yMarkContext->SuspendLayout();
			this->yMoveContext->SuspendLayout();
			this->SuspendLayout();
			// 
			// yList
			// 
			// 
			// yList.BottomToolStripPanel
			// 
			this->yList->BottomToolStripPanel->Controls->Add(this->yItemStrip);
			this->yList->BottomToolStripPanel->Controls->Add(this->yControlStrip);
			// 
			// yList.ContentPanel
			// 
			this->yList->ContentPanel->Controls->Add(this->xList);
			this->yList->ContentPanel->Size = System::Drawing::Size(558, 336);
			this->yList->Dock = System::Windows::Forms::DockStyle::Fill;
			this->yList->Location = System::Drawing::Point(0, 0);
			this->yList->Name = L"yList";
			this->yList->Size = System::Drawing::Size(558, 361);
			this->yList->TabIndex = 0;
			// 
			// yItemStrip
			// 
			this->yItemStrip->Dock = System::Windows::Forms::DockStyle::None;
			this->yItemStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {this->mItemStrip_Add, this->mItemStrip_Del, 
				this->tItemStrip_Sep0, this->mItemStrip_Shell, this->mItemStrip_Edit, this->tItemStrip_Sep1, this->mItemStrip_Naming, this->mItemStrip_Apply});
			this->yItemStrip->Location = System::Drawing::Point(3, 0);
			this->yItemStrip->Name = L"yItemStrip";
			this->yItemStrip->Size = System::Drawing::Size(220, 25);
			this->yItemStrip->TabIndex = 0;
			// 
			// mItemStrip_Add
			// 
			this->mItemStrip_Add->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->mItemStrip_Add->DoubleClickEnabled = true;
			this->mItemStrip_Add->DropDown = this->yAddContext;
			this->mItemStrip_Add->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"mItemStrip_Add.Image")));
			this->mItemStrip_Add->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->mItemStrip_Add->Name = L"mItemStrip_Add";
			this->mItemStrip_Add->Size = System::Drawing::Size(32, 22);
			this->mItemStrip_Add->Text = L"Add";
			// 
			// yAddContext
			// 
			this->yAddContext->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->nAddContext_Files, 
				this->tAddContext_Sep0, this->nAddContext_Folder});
			this->yAddContext->Name = L"yAdd";
			this->yAddContext->OwnerItem = this->mItemStrip_Add;
			this->yAddContext->Size = System::Drawing::Size(133, 54);
			// 
			// nAddContext_Files
			// 
			this->nAddContext_Files->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->nAddContext_Files->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"nAddContext_Files.Image")));
			this->nAddContext_Files->Name = L"nAddContext_Files";
			this->nAddContext_Files->Size = System::Drawing::Size(132, 22);
			this->nAddContext_Files->Text = L"Add file(s)";
			// 
			// tAddContext_Sep0
			// 
			this->tAddContext_Sep0->Name = L"tAddContext_Sep0";
			this->tAddContext_Sep0->Size = System::Drawing::Size(129, 6);
			// 
			// nAddContext_Folder
			// 
			this->nAddContext_Folder->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"nAddContext_Folder.Image")));
			this->nAddContext_Folder->Name = L"nAddContext_Folder";
			this->nAddContext_Folder->Size = System::Drawing::Size(132, 22);
			this->nAddContext_Folder->Text = L"Add folder";
			// 
			// mItemStrip_Del
			// 
			this->mItemStrip_Del->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->mItemStrip_Del->DoubleClickEnabled = true;
			this->mItemStrip_Del->DropDown = this->yDelContext;
			this->mItemStrip_Del->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"mItemStrip_Del.Image")));
			this->mItemStrip_Del->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->mItemStrip_Del->Name = L"mItemStrip_Del";
			this->mItemStrip_Del->Size = System::Drawing::Size(32, 22);
			this->mItemStrip_Del->Text = L"Remove";
			// 
			// yDelContext
			// 
			this->yDelContext->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->nDelContext_Selected, 
				this->nDelContext_Miss, this->tDelContext_Sep0, this->nDelContext_Clear});
			this->yDelContext->Name = L"yDel";
			this->yDelContext->OwnerItem = this->nMainContext_Remove;
			this->yDelContext->Size = System::Drawing::Size(173, 76);
			// 
			// nDelContext_Selected
			// 
			this->nDelContext_Selected->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->nDelContext_Selected->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"nDelContext_Selected.Image")));
			this->nDelContext_Selected->Name = L"nDelContext_Selected";
			this->nDelContext_Selected->Size = System::Drawing::Size(172, 22);
			this->nDelContext_Selected->Text = L"Remove selected";
			// 
			// nDelContext_Miss
			// 
			this->nDelContext_Miss->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"nDelContext_Miss.Image")));
			this->nDelContext_Miss->Name = L"nDelContext_Miss";
			this->nDelContext_Miss->Size = System::Drawing::Size(172, 22);
			this->nDelContext_Miss->Text = L"Remove missing files";
			// 
			// tDelContext_Sep0
			// 
			this->tDelContext_Sep0->Name = L"tDelContext_Sep0";
			this->tDelContext_Sep0->Size = System::Drawing::Size(169, 6);
			// 
			// nDelContext_Clear
			// 
			this->nDelContext_Clear->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"nDelContext_Clear.Image")));
			this->nDelContext_Clear->Name = L"nDelContext_Clear";
			this->nDelContext_Clear->Size = System::Drawing::Size(172, 22);
			this->nDelContext_Clear->Text = L"Clear all";
			// 
			// tItemStrip_Sep0
			// 
			this->tItemStrip_Sep0->Name = L"tItemStrip_Sep0";
			this->tItemStrip_Sep0->Size = System::Drawing::Size(6, 25);
			// 
			// mItemStrip_Shell
			// 
			this->mItemStrip_Shell->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->mItemStrip_Shell->DropDown = this->yShellContext;
			this->mItemStrip_Shell->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"mItemStrip_Shell.Image")));
			this->mItemStrip_Shell->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->mItemStrip_Shell->Name = L"mItemStrip_Shell";
			this->mItemStrip_Shell->Size = System::Drawing::Size(32, 22);
			this->mItemStrip_Shell->Text = L"Launch";
			// 
			// yShellContext
			// 
			this->yShellContext->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->nShellContext_Files, 
				this->tShellContext_Sep0, this->nShellContext_Folder});
			this->yShellContext->Name = L"yShell";
			this->yShellContext->OwnerItem = this->mItemStrip_Shell;
			this->yShellContext->Size = System::Drawing::Size(143, 54);
			// 
			// nShellContext_Files
			// 
			this->nShellContext_Files->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->nShellContext_Files->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"nShellContext_Files.Image")));
			this->nShellContext_Files->Name = L"nShellContext_Files";
			this->nShellContext_Files->Size = System::Drawing::Size(142, 22);
			this->nShellContext_Files->Text = L"View file(s)";
			// 
			// tShellContext_Sep0
			// 
			this->tShellContext_Sep0->Name = L"tShellContext_Sep0";
			this->tShellContext_Sep0->Size = System::Drawing::Size(139, 6);
			// 
			// nShellContext_Folder
			// 
			this->nShellContext_Folder->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"nShellContext_Folder.Image")));
			this->nShellContext_Folder->Name = L"nShellContext_Folder";
			this->nShellContext_Folder->Size = System::Drawing::Size(142, 22);
			this->nShellContext_Folder->Text = L"Open in folder";
			// 
			// mItemStrip_Edit
			// 
			this->mItemStrip_Edit->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->mItemStrip_Edit->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"mItemStrip_Edit.Image")));
			this->mItemStrip_Edit->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->mItemStrip_Edit->Name = L"mItemStrip_Edit";
			this->mItemStrip_Edit->Size = System::Drawing::Size(23, 22);
			this->mItemStrip_Edit->Text = L"Edit Item";
			// 
			// tItemStrip_Sep1
			// 
			this->tItemStrip_Sep1->Name = L"tItemStrip_Sep1";
			this->tItemStrip_Sep1->Size = System::Drawing::Size(6, 25);
			// 
			// mItemStrip_Naming
			// 
			this->mItemStrip_Naming->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->mItemStrip_Naming->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"mItemStrip_Naming.Image")));
			this->mItemStrip_Naming->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->mItemStrip_Naming->Name = L"mItemStrip_Naming";
			this->mItemStrip_Naming->Size = System::Drawing::Size(23, 22);
			this->mItemStrip_Naming->Text = L"Generate Name(s)";
			// 
			// mItemStrip_Apply
			// 
			this->mItemStrip_Apply->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->mItemStrip_Apply->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"mItemStrip_Apply.Image")));
			this->mItemStrip_Apply->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->mItemStrip_Apply->Name = L"mItemStrip_Apply";
			this->mItemStrip_Apply->Size = System::Drawing::Size(23, 22);
			this->mItemStrip_Apply->Text = L"Apply Changes";
			// 
			// yControlStrip
			// 
			this->yControlStrip->Dock = System::Windows::Forms::DockStyle::None;
			this->yControlStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(12) {this->mControlStrip_Sort0, 
				this->mControlStrip_Sort1, this->tControlStrip_Sep0, this->mControlStrip_Move0, this->mControlStrip_Move1, this->tControlStrip_Sep1, 
				this->mControlStrip_Mark1, this->mControlStrip_Mark0, this->tControlStrip_Sep2, this->mControlStrip_SelX, this->mControlStrip_Sel1, 
				this->mControlStrip_Sel0});
			this->yControlStrip->Location = System::Drawing::Point(223, 0);
			this->yControlStrip->Name = L"yControlStrip";
			this->yControlStrip->Size = System::Drawing::Size(261, 25);
			this->yControlStrip->TabIndex = 3;
			// 
			// mControlStrip_Sort0
			// 
			this->mControlStrip_Sort0->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->mControlStrip_Sort0->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"mControlStrip_Sort0.Image")));
			this->mControlStrip_Sort0->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->mControlStrip_Sort0->Name = L"mControlStrip_Sort0";
			this->mControlStrip_Sort0->Size = System::Drawing::Size(23, 22);
			this->mControlStrip_Sort0->Text = L"Sort in Ascending Order";
			// 
			// mControlStrip_Sort1
			// 
			this->mControlStrip_Sort1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->mControlStrip_Sort1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"mControlStrip_Sort1.Image")));
			this->mControlStrip_Sort1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->mControlStrip_Sort1->Name = L"mControlStrip_Sort1";
			this->mControlStrip_Sort1->Size = System::Drawing::Size(23, 22);
			this->mControlStrip_Sort1->Text = L"Sort in Descending Order";
			// 
			// tControlStrip_Sep0
			// 
			this->tControlStrip_Sep0->Name = L"tControlStrip_Sep0";
			this->tControlStrip_Sep0->Size = System::Drawing::Size(6, 25);
			// 
			// mControlStrip_Move0
			// 
			this->mControlStrip_Move0->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->mControlStrip_Move0->DropDown = this->yUpContext;
			this->mControlStrip_Move0->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"mControlStrip_Move0.Image")));
			this->mControlStrip_Move0->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->mControlStrip_Move0->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->mControlStrip_Move0->Name = L"mControlStrip_Move0";
			this->mControlStrip_Move0->Size = System::Drawing::Size(29, 22);
			this->mControlStrip_Move0->Text = L"Move Up";
			// 
			// yUpContext
			// 
			this->yUpContext->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->nMoveUpContext_Up, 
				this->tMoveUpContext_Sep0, this->nMoveUpContext_Top});
			this->yUpContext->Name = L"yUpContext";
			this->yUpContext->OwnerItem = this->mControlStrip_Move0;
			this->yUpContext->Size = System::Drawing::Size(133, 54);
			// 
			// nMoveUpContext_Up
			// 
			this->nMoveUpContext_Up->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->nMoveUpContext_Up->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"nMoveUpContext_Up.Image")));
			this->nMoveUpContext_Up->Name = L"nMoveUpContext_Up";
			this->nMoveUpContext_Up->Size = System::Drawing::Size(132, 22);
			this->nMoveUpContext_Up->Text = L"Move up";
			// 
			// tMoveUpContext_Sep0
			// 
			this->tMoveUpContext_Sep0->Name = L"tMoveUpContext_Sep0";
			this->tMoveUpContext_Sep0->Size = System::Drawing::Size(129, 6);
			// 
			// nMoveUpContext_Top
			// 
			this->nMoveUpContext_Top->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"nMoveUpContext_Top.Image")));
			this->nMoveUpContext_Top->Name = L"nMoveUpContext_Top";
			this->nMoveUpContext_Top->Size = System::Drawing::Size(132, 22);
			this->nMoveUpContext_Top->Text = L"Move to top";
			// 
			// mControlStrip_Move1
			// 
			this->mControlStrip_Move1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->mControlStrip_Move1->DropDown = this->yDownContext;
			this->mControlStrip_Move1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"mControlStrip_Move1.Image")));
			this->mControlStrip_Move1->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->mControlStrip_Move1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->mControlStrip_Move1->Name = L"mControlStrip_Move1";
			this->mControlStrip_Move1->Size = System::Drawing::Size(29, 22);
			this->mControlStrip_Move1->Text = L"Move Down";
			// 
			// yDownContext
			// 
			this->yDownContext->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->nMoveDownContext_Down, 
				this->tMoveDownContext_Sep0, this->nMoveDownContext_Bottom});
			this->yDownContext->Name = L"yDownContext";
			this->yDownContext->OwnerItem = this->mControlStrip_Move1;
			this->yDownContext->Size = System::Drawing::Size(151, 54);
			// 
			// nMoveDownContext_Down
			// 
			this->nMoveDownContext_Down->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->nMoveDownContext_Down->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"nMoveDownContext_Down.Image")));
			this->nMoveDownContext_Down->Name = L"nMoveDownContext_Down";
			this->nMoveDownContext_Down->Size = System::Drawing::Size(150, 22);
			this->nMoveDownContext_Down->Text = L"Move down";
			// 
			// tMoveDownContext_Sep0
			// 
			this->tMoveDownContext_Sep0->Name = L"tMoveDownContext_Sep0";
			this->tMoveDownContext_Sep0->Size = System::Drawing::Size(147, 6);
			// 
			// nMoveDownContext_Bottom
			// 
			this->nMoveDownContext_Bottom->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"nMoveDownContext_Bottom.Image")));
			this->nMoveDownContext_Bottom->Name = L"nMoveDownContext_Bottom";
			this->nMoveDownContext_Bottom->Size = System::Drawing::Size(150, 22);
			this->nMoveDownContext_Bottom->Text = L"Move to bottom";
			// 
			// tControlStrip_Sep1
			// 
			this->tControlStrip_Sep1->Name = L"tControlStrip_Sep1";
			this->tControlStrip_Sep1->Size = System::Drawing::Size(6, 25);
			// 
			// mControlStrip_Mark1
			// 
			this->mControlStrip_Mark1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->mControlStrip_Mark1->DropDown = this->yMark1Context;
			this->mControlStrip_Mark1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"mControlStrip_Mark1.Image")));
			this->mControlStrip_Mark1->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->mControlStrip_Mark1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->mControlStrip_Mark1->Name = L"mControlStrip_Mark1";
			this->mControlStrip_Mark1->Size = System::Drawing::Size(29, 22);
			this->mControlStrip_Mark1->Text = L"Mark";
			// 
			// yMark1Context
			// 
			this->yMark1Context->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->nMark1Context_0, 
				this->nMark1Context_X, this->tMark1Context_Sep0, this->nMark1Context_1});
			this->yMark1Context->Name = L"yMark1Context";
			this->yMark1Context->OwnerItem = this->mControlStrip_Mark1;
			this->yMark1Context->Size = System::Drawing::Size(155, 76);
			// 
			// nMark1Context_0
			// 
			this->nMark1Context_0->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->nMark1Context_0->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"nMark1Context_0.Image")));
			this->nMark1Context_0->Name = L"nMark1Context_0";
			this->nMark1Context_0->Size = System::Drawing::Size(154, 22);
			this->nMark1Context_0->Text = L"Mark selected";
			// 
			// nMark1Context_X
			// 
			this->nMark1Context_X->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"nMark1Context_X.Image")));
			this->nMark1Context_X->Name = L"nMark1Context_X";
			this->nMark1Context_X->Size = System::Drawing::Size(154, 22);
			this->nMark1Context_X->Text = L"Mark exclusively";
			// 
			// tMark1Context_Sep0
			// 
			this->tMark1Context_Sep0->Name = L"tMark1Context_Sep0";
			this->tMark1Context_Sep0->Size = System::Drawing::Size(151, 6);
			// 
			// nMark1Context_1
			// 
			this->nMark1Context_1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"nMark1Context_1.Image")));
			this->nMark1Context_1->Name = L"nMark1Context_1";
			this->nMark1Context_1->Size = System::Drawing::Size(154, 22);
			this->nMark1Context_1->Text = L"Mark all";
			// 
			// mControlStrip_Mark0
			// 
			this->mControlStrip_Mark0->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->mControlStrip_Mark0->DropDown = this->yMark0Context;
			this->mControlStrip_Mark0->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"mControlStrip_Mark0.Image")));
			this->mControlStrip_Mark0->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->mControlStrip_Mark0->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->mControlStrip_Mark0->Name = L"mControlStrip_Mark0";
			this->mControlStrip_Mark0->Size = System::Drawing::Size(29, 22);
			this->mControlStrip_Mark0->Text = L"Unmark";
			// 
			// yMark0Context
			// 
			this->yMark0Context->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->nMark0Context_0, 
				this->nMark0Context_X, this->tMark0Context_Sep0, this->nMark0Context_1});
			this->yMark0Context->Name = L"yMark0Context";
			this->yMark0Context->OwnerItem = this->mControlStrip_Mark0;
			this->yMark0Context->Size = System::Drawing::Size(171, 76);
			// 
			// nMark0Context_0
			// 
			this->nMark0Context_0->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->nMark0Context_0->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"nMark0Context_0.Image")));
			this->nMark0Context_0->Name = L"nMark0Context_0";
			this->nMark0Context_0->Size = System::Drawing::Size(170, 22);
			this->nMark0Context_0->Text = L"Unmark selected";
			// 
			// nMark0Context_X
			// 
			this->nMark0Context_X->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"nMark0Context_X.Image")));
			this->nMark0Context_X->Name = L"nMark0Context_X";
			this->nMark0Context_X->Size = System::Drawing::Size(170, 22);
			this->nMark0Context_X->Text = L"Unmark exclusively";
			// 
			// tMark0Context_Sep0
			// 
			this->tMark0Context_Sep0->Name = L"tMark0Context_Sep0";
			this->tMark0Context_Sep0->Size = System::Drawing::Size(167, 6);
			// 
			// nMark0Context_1
			// 
			this->nMark0Context_1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"nMark0Context_1.Image")));
			this->nMark0Context_1->Name = L"nMark0Context_1";
			this->nMark0Context_1->Size = System::Drawing::Size(170, 22);
			this->nMark0Context_1->Text = L"Unmark all";
			// 
			// tControlStrip_Sep2
			// 
			this->tControlStrip_Sep2->Name = L"tControlStrip_Sep2";
			this->tControlStrip_Sep2->Size = System::Drawing::Size(6, 25);
			// 
			// mControlStrip_SelX
			// 
			this->mControlStrip_SelX->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->mControlStrip_SelX->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"mControlStrip_SelX.Image")));
			this->mControlStrip_SelX->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->mControlStrip_SelX->Name = L"mControlStrip_SelX";
			this->mControlStrip_SelX->Size = System::Drawing::Size(23, 22);
			this->mControlStrip_SelX->Text = L"Select Inverse";
			// 
			// mControlStrip_Sel1
			// 
			this->mControlStrip_Sel1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->mControlStrip_Sel1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"mControlStrip_Sel1.Image")));
			this->mControlStrip_Sel1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->mControlStrip_Sel1->Name = L"mControlStrip_Sel1";
			this->mControlStrip_Sel1->Size = System::Drawing::Size(23, 22);
			this->mControlStrip_Sel1->Text = L"Select All";
			// 
			// mControlStrip_Sel0
			// 
			this->mControlStrip_Sel0->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->mControlStrip_Sel0->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"mControlStrip_Sel0.Image")));
			this->mControlStrip_Sel0->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->mControlStrip_Sel0->Name = L"mControlStrip_Sel0";
			this->mControlStrip_Sel0->Size = System::Drawing::Size(23, 22);
			this->mControlStrip_Sel0->Text = L"Clear Selection";
			// 
			// xList
			// 
			this->xList->CheckBoxes = true;
			this->xList->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {this->yNew, this->yOld, this->yLoc});
			this->xList->Dock = System::Windows::Forms::DockStyle::Fill;
			this->xList->FullRowSelect = true;
			this->xList->GridLines = true;
			this->xList->Location = System::Drawing::Point(0, 0);
			this->xList->Name = L"xList";
			this->xList->Size = System::Drawing::Size(558, 336);
			this->xList->TabIndex = 0;
			this->xList->UseCompatibleStateImageBehavior = false;
			this->xList->View = System::Windows::Forms::View::Details;
			// 
			// yNew
			// 
			this->yNew->Text = L"New name";
			this->yNew->Width = 103;
			// 
			// yOld
			// 
			this->yOld->Text = L"Original name";
			this->yOld->Width = 99;
			// 
			// yLoc
			// 
			this->yLoc->Text = L"Location";
			this->yLoc->Width = 328;
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripMenuItem1.Image")));
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(126, 22);
			this->toolStripMenuItem1->Text = L"Add File(s)";
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(123, 6);
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripMenuItem2.Image")));
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(126, 22);
			this->toolStripMenuItem2->Text = L"Add Folder";
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripMenuItem3.Image")));
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(174, 22);
			this->toolStripMenuItem3->Text = L"Remove Selected";
			// 
			// toolStripMenuItem4
			// 
			this->toolStripMenuItem4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripMenuItem4.Image")));
			this->toolStripMenuItem4->Name = L"toolStripMenuItem4";
			this->toolStripMenuItem4->Size = System::Drawing::Size(174, 22);
			this->toolStripMenuItem4->Text = L"Remove Missing Files";
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(171, 6);
			// 
			// toolStripMenuItem5
			// 
			this->toolStripMenuItem5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripMenuItem5.Image")));
			this->toolStripMenuItem5->Name = L"toolStripMenuItem5";
			this->toolStripMenuItem5->Size = System::Drawing::Size(174, 22);
			this->toolStripMenuItem5->Text = L"Clear all";
			// 
			// yMainContext
			// 
			this->yMainContext->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(9) {this->editToolStripMenuItem, 
				this->toolStripSeparator11, this->viewFilesToolStripMenuItem, this->openInFolderToolStripMenuItem, this->toolStripSeparator12, 
				this->markToolStripMenuItem, this->unmarkToolStripMenuItem1, this->toolStripSeparator13, this->nMainContext_Remove});
			this->yMainContext->Name = L"yContext";
			this->yMainContext->Size = System::Drawing::Size(143, 154);
			// 
			// editToolStripMenuItem
			// 
			this->editToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->editToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"editToolStripMenuItem.Image")));
			this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			this->editToolStripMenuItem->Size = System::Drawing::Size(142, 22);
			this->editToolStripMenuItem->Text = L"Edit Item";
			// 
			// toolStripSeparator11
			// 
			this->toolStripSeparator11->Name = L"toolStripSeparator11";
			this->toolStripSeparator11->Size = System::Drawing::Size(139, 6);
			// 
			// viewFilesToolStripMenuItem
			// 
			this->viewFilesToolStripMenuItem->Name = L"viewFilesToolStripMenuItem";
			this->viewFilesToolStripMenuItem->Size = System::Drawing::Size(142, 22);
			this->viewFilesToolStripMenuItem->Text = L"View file(s)";
			// 
			// openInFolderToolStripMenuItem
			// 
			this->openInFolderToolStripMenuItem->Name = L"openInFolderToolStripMenuItem";
			this->openInFolderToolStripMenuItem->Size = System::Drawing::Size(142, 22);
			this->openInFolderToolStripMenuItem->Text = L"Open in folder";
			// 
			// toolStripSeparator12
			// 
			this->toolStripSeparator12->Name = L"toolStripSeparator12";
			this->toolStripSeparator12->Size = System::Drawing::Size(139, 6);
			// 
			// markToolStripMenuItem
			// 
			this->markToolStripMenuItem->DropDown = this->yMarkContext;
			this->markToolStripMenuItem->Name = L"markToolStripMenuItem";
			this->markToolStripMenuItem->Size = System::Drawing::Size(142, 22);
			this->markToolStripMenuItem->Text = L"Mark";
			// 
			// yMarkContext
			// 
			this->yMarkContext->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {this->nMark, this->unmarkToolStripMenuItem, 
				this->toolStripSeparator7, this->markExclusivelyToolStripMenuItem, this->unmarkExclusivelyToolStripMenuItem, this->toolStripSeparator8, 
				this->markAllToolStripMenuItem, this->unmarkAllToolStripMenuItem});
			this->yMarkContext->Name = L"yMark";
			this->yMarkContext->OwnerItem = this->markToolStripMenuItem;
			this->yMarkContext->Size = System::Drawing::Size(166, 148);
			// 
			// nMark
			// 
			this->nMark->Name = L"nMark";
			this->nMark->Size = System::Drawing::Size(165, 22);
			this->nMark->Text = L"Mark";
			// 
			// unmarkToolStripMenuItem
			// 
			this->unmarkToolStripMenuItem->Name = L"unmarkToolStripMenuItem";
			this->unmarkToolStripMenuItem->Size = System::Drawing::Size(165, 22);
			this->unmarkToolStripMenuItem->Text = L"Unmark";
			// 
			// toolStripSeparator7
			// 
			this->toolStripSeparator7->Name = L"toolStripSeparator7";
			this->toolStripSeparator7->Size = System::Drawing::Size(162, 6);
			// 
			// markExclusivelyToolStripMenuItem
			// 
			this->markExclusivelyToolStripMenuItem->Name = L"markExclusivelyToolStripMenuItem";
			this->markExclusivelyToolStripMenuItem->Size = System::Drawing::Size(165, 22);
			this->markExclusivelyToolStripMenuItem->Text = L"Mark exclusively";
			// 
			// unmarkExclusivelyToolStripMenuItem
			// 
			this->unmarkExclusivelyToolStripMenuItem->Name = L"unmarkExclusivelyToolStripMenuItem";
			this->unmarkExclusivelyToolStripMenuItem->Size = System::Drawing::Size(165, 22);
			this->unmarkExclusivelyToolStripMenuItem->Text = L"Unmark exclusively";
			// 
			// toolStripSeparator8
			// 
			this->toolStripSeparator8->Name = L"toolStripSeparator8";
			this->toolStripSeparator8->Size = System::Drawing::Size(162, 6);
			// 
			// markAllToolStripMenuItem
			// 
			this->markAllToolStripMenuItem->Name = L"markAllToolStripMenuItem";
			this->markAllToolStripMenuItem->Size = System::Drawing::Size(165, 22);
			this->markAllToolStripMenuItem->Text = L"Mark all";
			// 
			// unmarkAllToolStripMenuItem
			// 
			this->unmarkAllToolStripMenuItem->Name = L"unmarkAllToolStripMenuItem";
			this->unmarkAllToolStripMenuItem->Size = System::Drawing::Size(165, 22);
			this->unmarkAllToolStripMenuItem->Text = L"Unmark all";
			// 
			// unmarkToolStripMenuItem1
			// 
			this->unmarkToolStripMenuItem1->DropDown = this->yMoveContext;
			this->unmarkToolStripMenuItem1->Name = L"unmarkToolStripMenuItem1";
			this->unmarkToolStripMenuItem1->Size = System::Drawing::Size(142, 22);
			this->unmarkToolStripMenuItem1->Text = L"Move";
			// 
			// yMoveContext
			// 
			this->yMoveContext->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->moveUpToolStripMenuItem, 
				this->moveDownToolStripMenuItem1, this->toolStripSeparator10, this->moveToTopToolStripMenuItem1, this->moveToBottomToolStripMenuItem1});
			this->yMoveContext->Name = L"yMove";
			this->yMoveContext->OwnerItem = this->unmarkToolStripMenuItem1;
			this->yMoveContext->Size = System::Drawing::Size(151, 98);
			// 
			// moveUpToolStripMenuItem
			// 
			this->moveUpToolStripMenuItem->Name = L"moveUpToolStripMenuItem";
			this->moveUpToolStripMenuItem->Size = System::Drawing::Size(150, 22);
			this->moveUpToolStripMenuItem->Text = L"Move up";
			// 
			// moveDownToolStripMenuItem1
			// 
			this->moveDownToolStripMenuItem1->Name = L"moveDownToolStripMenuItem1";
			this->moveDownToolStripMenuItem1->Size = System::Drawing::Size(150, 22);
			this->moveDownToolStripMenuItem1->Text = L"Move down";
			// 
			// toolStripSeparator10
			// 
			this->toolStripSeparator10->Name = L"toolStripSeparator10";
			this->toolStripSeparator10->Size = System::Drawing::Size(147, 6);
			// 
			// moveToTopToolStripMenuItem1
			// 
			this->moveToTopToolStripMenuItem1->Name = L"moveToTopToolStripMenuItem1";
			this->moveToTopToolStripMenuItem1->Size = System::Drawing::Size(150, 22);
			this->moveToTopToolStripMenuItem1->Text = L"Move to top";
			// 
			// moveToBottomToolStripMenuItem1
			// 
			this->moveToBottomToolStripMenuItem1->Name = L"moveToBottomToolStripMenuItem1";
			this->moveToBottomToolStripMenuItem1->Size = System::Drawing::Size(150, 22);
			this->moveToBottomToolStripMenuItem1->Text = L"Move to bottom";
			// 
			// toolStripSeparator13
			// 
			this->toolStripSeparator13->Name = L"toolStripSeparator13";
			this->toolStripSeparator13->Size = System::Drawing::Size(139, 6);
			// 
			// nMainContext_Remove
			// 
			this->nMainContext_Remove->DropDown = this->yDelContext;
			this->nMainContext_Remove->Name = L"nMainContext_Remove";
			this->nMainContext_Remove->Size = System::Drawing::Size(142, 22);
			this->nMainContext_Remove->Text = L"Remove";
			// 
			// BRMListingControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->yList);
			this->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F));
			this->Name = L"BRMListingControl";
			this->Size = System::Drawing::Size(558, 361);
			this->yList->BottomToolStripPanel->ResumeLayout(false);
			this->yList->BottomToolStripPanel->PerformLayout();
			this->yList->ContentPanel->ResumeLayout(false);
			this->yList->ResumeLayout(false);
			this->yList->PerformLayout();
			this->yItemStrip->ResumeLayout(false);
			this->yItemStrip->PerformLayout();
			this->yAddContext->ResumeLayout(false);
			this->yDelContext->ResumeLayout(false);
			this->yShellContext->ResumeLayout(false);
			this->yControlStrip->ResumeLayout(false);
			this->yControlStrip->PerformLayout();
			this->yUpContext->ResumeLayout(false);
			this->yDownContext->ResumeLayout(false);
			this->yMark1Context->ResumeLayout(false);
			this->yMark0Context->ResumeLayout(false);
			this->yMainContext->ResumeLayout(false);
			this->yMarkContext->ResumeLayout(false);
			this->yMoveContext->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

//---------------------------------------------------------------------------------------------------------






//Init
private:
	void jConstructor(){
		jInitGraphics();
	}
	void jInitGraphics(){
		//Menu
		//ToolStrip - Item
		


		//ToolStrip - Order
		//ToolStrip - Selection
		//Context - Main
		//Context - Add
		//Context - Del
		//Context - Shell
		//Context - Mark1
		//Context - Mark0
		//Context - Mark
		//Context - MoveUp
		//Context - MoveDown
		//Context - Move




	}
};
}
