#pragma once
#include "BusMasterCOMWrapper\BusMasterCOMWrapper.h"

namespace BusMasterComClient {

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
//using namespace CAN_MonitorApp;

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
    BusMasterCOMWrapper *objBUSMASTER;

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

private: System::Windows::Forms::Button^  BtnConnect;
private: System::Windows::Forms::Button^  BtnDisconnect;

protected: 

private:
    /// <summary>
    /// Required designer variable.
    /// </summary>
    System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
///
/// Required method for Designer support - do not modify
/// the contents of this method with the code editor.
///
void InitializeComponent(void)
{
	this->BtnConnect = (gcnew System::Windows::Forms::Button());
	this->BtnDisconnect = (gcnew System::Windows::Forms::Button());
	this->SuspendLayout();
	// 
	// BtnConnect
	// 
	this->BtnConnect->Location = System::Drawing::Point(12, 12);
	this->BtnConnect->Name = L"BtnConnect";
	this->BtnConnect->Size = System::Drawing::Size(75, 23);
	this->BtnConnect->TabIndex = 1;
	this->BtnConnect->Text = L"Connect";
	this->BtnConnect->UseVisualStyleBackColor = true;
	this->BtnConnect->Click += gcnew System::EventHandler(this, &Form1::BtnConnect_Click);
	// 
	// BtnDisconnect
	// 
	this->BtnDisconnect->Location = System::Drawing::Point(93, 12);
	this->BtnDisconnect->Name = L"BtnDisconnect";
	this->BtnDisconnect->Size = System::Drawing::Size(75, 23);
	this->BtnDisconnect->TabIndex = 2;
	this->BtnDisconnect->Text = L"Disconnect";
	this->BtnDisconnect->UseVisualStyleBackColor = true;
	this->BtnDisconnect->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
	// 
	// Form1
	// 
	this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
	this->ClientSize = System::Drawing::Size(493, 386);
	this->Controls->Add(this->BtnDisconnect);
	this->Controls->Add(this->BtnConnect);
	this->Name = L"Form1";
	this->Text = L"Form1";
	this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
	this->ResumeLayout(false);

}

#pragma endregion
private: System::Void BtnInitialize_Click(System::Object^ sender, System::EventArgs^ e) {


}

private: System::Void BtnConnect_Click(System::Object^ sender, System::EventArgs^ e) {
objBUSMASTER->Connect();
}


private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
objBUSMASTER->Disconnect();
}



private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 
/* Init the busmaster object */			 
objBUSMASTER = new BusMasterCOMWrapper();

}
};
}