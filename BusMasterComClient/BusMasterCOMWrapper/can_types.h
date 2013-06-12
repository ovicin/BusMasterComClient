#ifndef CAN_TYPES_H
#define CAN_TYPES_H

typedef struct sTCAN_MSG
{
    unsigned int  m_unMsgID;    // 11/29 Bit-
    unsigned char m_ucEXTENDED; // true, for (29 Bit) Frame
    unsigned char m_ucRTR;      // true, for remote request
    unsigned char m_ucDataLen;  // Data len (0..8)
    unsigned char m_ucChannel;  // Message Length
    unsigned char m_ucData[64];  // Databytes 0..63
    //unsigned char* m_aucCANFDData;   // Databytes 0..63
    bool        m_bCANFD;
} STCAN_MSG, *PSTCAN_MSG;
//typedef sTCAN_MSG* PSTCAN_MSG;

typedef struct __MIDL___MIDL_itf_BUSMASTER_0000_0000_0009
{
    unsigned int m_unMsgID;
    unsigned char m_bEXTENDED;
    unsigned char m_bRTR;
    unsigned char m_ucDataLen;
    unsigned char m_ucData[ 8 ];
    unsigned char m_ucChannel;
}CAN_MSGS;

#endif
