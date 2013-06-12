#ifndef BUS_MASTER_COM_WRAPPER_H
#define BUS_MASTER_COM_WRAPPER_H

#include <vcclr.h>
#include "types_adapt.h"
#include "can_types.h"

using namespace System;
using namespace CAN_MonitorApp;

class BusMasterCOMWrapper{
private:
	gcroot<CAN_MonitorApp::Application^> objBUSMASTERApp;
	
public:	
	
	BusMasterCOMWrapper();
	~BusMasterCOMWrapper();
	void GetErrorCounter(unsigned char ChanelNo, unsigned char RX_Errors, unsigned char Tx_Errors);
	UINT SendCANMSg(CAN_MonitorApp::CAN_MSGS);
	void GetMsgInfo(String^,CAN_MonitorApp::sMESSAGESTRUCT);
	void GetNetworkStatistics(); //todo
	void LoadAllDll();
	void UnLoadAllDll();
	void SendKeyValue(unsigned char); //ASCII value of the key
	void EnableDisableHandlers();//todo
	void ImportDatabase();//todo
	void LoadConfiguration();//todo
	void SaveConfiguration();
	void SaveConfigurationAs(); //todo
	void GetTxBlockCount(); //todo
	void ClearTxBlockList();
	void StartTxMsgBlock();
	void StopTxMsgBlock();
	void EnableFilterSch();//todo
	void GetLoggingBlockCount();//todo
	void RemoveLoggingBlock();//todo
	void StartLogging();
	void StopLogging();
	void WriteToLogFile(char*) ; //todo
	void ResetHW() ;
	void Disconnect() ;
	void Connect() ;
	
};

#endif