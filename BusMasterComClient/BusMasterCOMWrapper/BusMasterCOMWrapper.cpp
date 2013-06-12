#include "stdafx.h"
#include "BusMasterCOMWrapper.h"

BusMasterCOMWrapper::BusMasterCOMWrapper()
{
	/* Init the busmaster object */			 
	objBUSMASTERApp = gcnew CAN_MonitorApp::Application();

}

BusMasterCOMWrapper::~BusMasterCOMWrapper()
{
	delete objBUSMASTERApp;
}



void BusMasterCOMWrapper::GetErrorCounter(unsigned char ChanelNo, unsigned char RX_Errors, unsigned char Tx_Errors)
{
	objBUSMASTERApp->GetErrorCounter(ChanelNo,RX_Errors,Tx_Errors);
}

void BusMasterCOMWrapper::GetMsgInfo(String^ msgName,CAN_MonitorApp::sMESSAGESTRUCT msgStruct)
{
	objBUSMASTERApp->GetMsgInfo(msgName, msgStruct);
}

void BusMasterCOMWrapper::LoadAllDll()
{
	objBUSMASTERApp->LoadAllDll();
}

void BusMasterCOMWrapper::UnLoadAllDll()
{
	objBUSMASTERApp->UnLoadAllDll();
}

void BusMasterCOMWrapper::SendKeyValue(unsigned char key)
{
	objBUSMASTERApp->SendKeyValue(key);
}

void BusMasterCOMWrapper::SaveConfiguration()
{
	objBUSMASTERApp->SaveConfiguration();
}

UINT BusMasterCOMWrapper::SendCANMSg(CAN_MonitorApp::CAN_MSGS msg)
{
	objBUSMASTERApp->SendCANMSg(msg);
	return 0;
}

void BusMasterCOMWrapper::StopTxMsgBlock()
{
	objBUSMASTERApp->StopTxMsgBlock();
}

void BusMasterCOMWrapper::ClearTxBlockList()
{
	objBUSMASTERApp->ClearTxBlockList();
}

void BusMasterCOMWrapper::StartTxMsgBlock()
{
	objBUSMASTERApp->StartTxMsgBlock();
}

void BusMasterCOMWrapper::StartLogging ()
{
	objBUSMASTERApp->StartLogging();
}

void BusMasterCOMWrapper::StopLogging()
{
	objBUSMASTERApp->StopLogging();
}

void BusMasterCOMWrapper::WriteToLogFile(char* log)
{
	/*to do*/
}


void BusMasterCOMWrapper::ResetHW()
{
	objBUSMASTERApp->ResetHW();
}
	


void BusMasterCOMWrapper::Disconnect()
{
	objBUSMASTERApp->Connect(false);
}

void BusMasterCOMWrapper::Connect()
{
	objBUSMASTERApp->Connect(true);
}
