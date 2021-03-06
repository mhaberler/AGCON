
/* File generated by gen_cfile.py. Should not be modified. */

#include "ObjDict.h"

/**************************************************************************/
/* Declaration of mapped variables                                        */
/**************************************************************************/
REAL32 DHT22_Temperature = 0x0;		/* Mapped at index 0x2000, subindex 0x00 */
REAL32 DHT22_Humidity = 0x0;		/* Mapped at index 0x2001, subindex 0x00 */
REAL32 BMP_Pressure = 0x0;		/* Mapped at index 0x2002, subindex 0x00 */
REAL32 BMP_Temperature = 0x0;		/* Mapped at index 0x2003, subindex 0x00 */
INTEGER32 Counter = 0x0;		/* Mapped at index 0x2004, subindex 0x00 */
UNS8 Test_String[10] = "";		/* Mapped at index 0x2005, subindex 0x00 */
UNS8 Lock = 0x0;		/* Mapped at index 0x2006, subindex 0x00 */
UNS8 Switch1 = 0x0;		/* Mapped at index 0x2007, subindex 0x00 */
INTEGER32 Switch1_TimeOut = 0x0;		/* Mapped at index 0x2008, subindex 0x00 */
REAL32 Main_Voltage = 0x0;		/* Mapped at index 0x2009, subindex 0x00 */

/**************************************************************************/
/* Declaration of value range types                                       */
/**************************************************************************/

#define valueRange_EMC 0x9F /* Type for index 0x1003 subindex 0x00 (only set of value 0 is possible) */
UNS32 ObjDict_valueRangeTest (UNS8 typeValue, void * value)
{
  switch (typeValue) {
    case valueRange_EMC:
      if (*(UNS8*)value != (UNS8)0) return OD_VALUE_RANGE_EXCEEDED;
      break;
  }
  return 0;
}

/**************************************************************************/
/* The node id                                                            */
/**************************************************************************/
/* node_id default value.*/
UNS8 ObjDict_bDeviceNodeId = 0x23;

/**************************************************************************/
/* Array of message processing information */

const UNS8 ObjDict_iam_a_slave = 1;

TIMER_HANDLE ObjDict_heartBeatTimers[1];

/*
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

                               OBJECT DICTIONARY

$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
*/

/* index 0x1000 :   Device Type. */
                    UNS32 ObjDict_obj1000 = 0x0;	/* 0 */
                    subindex ObjDict_Index1000[] = 
                     {
                       { RO, CANopen_TYPE_uint32, sizeof (UNS32), (void*)&ObjDict_obj1000 }
                     };

/* index 0x1001 :   Error Register. */
                    UNS8 ObjDict_obj1001 = 0x0;	/* 0 */
                    subindex ObjDict_Index1001[] = 
                     {
                       { RO, CANopen_TYPE_uint8, sizeof (UNS8), (void*)&ObjDict_obj1001 }
                     };

/* index 0x1003 :   Pre-defined Error Field. */
                    UNS8 ObjDict_highestSubIndex_obj1003 = 0; /* number of subindex - 1*/
                    UNS32 ObjDict_obj1003[] = 
                    {
                      0x0,	/* 0 */
                      0x0,	/* 0 */
                      0x0,	/* 0 */
                      0x0	/* 0 */
                    };
                    ODCallback_t ObjDict_Index1003_callbacks[] = 
                     {
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                     };
                    subindex ObjDict_Index1003[] = 
                     {
                       { RW, valueRange_EMC, sizeof (UNS8), (void*)&ObjDict_highestSubIndex_obj1003 },
                       { RO, CANopen_TYPE_uint32, sizeof (UNS32), (void*)&ObjDict_obj1003[0] },
                       { RO, CANopen_TYPE_uint32, sizeof (UNS32), (void*)&ObjDict_obj1003[1] },
                       { RO, CANopen_TYPE_uint32, sizeof (UNS32), (void*)&ObjDict_obj1003[2] },
                       { RO, CANopen_TYPE_uint32, sizeof (UNS32), (void*)&ObjDict_obj1003[3] }
                     };

/* index 0x1005 :   SYNC COB ID. */
                    UNS32 ObjDict_obj1005 = 0x80;	/* 128 */
                    ODCallback_t ObjDict_Index1005_callbacks[] = 
                     {
                       NULL,
                     };
                    subindex ObjDict_Index1005[] = 
                     {
                       { RW, CANopen_TYPE_uint32, sizeof (UNS32), (void*)&ObjDict_obj1005 }
                     };

/* index 0x1006 :   Communication / Cycle Period. */
                    UNS32 ObjDict_obj1006 = 0x2710;	/* 10000 */
                    ODCallback_t ObjDict_Index1006_callbacks[] = 
                     {
                       NULL,
                     };
                    subindex ObjDict_Index1006[] = 
                     {
                       { RW, CANopen_TYPE_uint32, sizeof (UNS32), (void*)&ObjDict_obj1006 }
                     };

/* index 0x1008 :   Manufacturer Device Name. */
                    UNS8 ObjDict_obj1008[10] = "AGCON1";
                    subindex ObjDict_Index1008[] = 
                     {
                       { RO, CANopen_TYPE_visible_string, 10, (void*)&ObjDict_obj1008 }
                     };

/* index 0x1009 :   Manufacturer Hardware Version. */
                    UNS8 ObjDict_obj1009[10] = "0.1";
                    subindex ObjDict_Index1009[] = 
                     {
                       { RO, CANopen_TYPE_visible_string, 10, (void*)&ObjDict_obj1009 }
                     };

/* index 0x100A :   Manufacturer Software Version. */
                    UNS8 ObjDict_obj100A[10] = "0.7";
                    subindex ObjDict_Index100A[] = 
                     {
                       { RO, CANopen_TYPE_visible_string, 10, (void*)&ObjDict_obj100A }
                     };

/* index 0x100C :   Guard Time */ 
                    UNS16 ObjDict_obj100C = 0x0;   /* 0 */

/* index 0x100D :   Life Time Factor */ 
                    UNS8 ObjDict_obj100D = 0x0;   /* 0 */

/* index 0x1014 :   Emergency COB ID. */
                    UNS32 ObjDict_obj1014 = 0xA3;	/* 163 */
                    subindex ObjDict_Index1014[] = 
                     {
                       { RW, CANopen_TYPE_uint32, sizeof (UNS32), (void*)&ObjDict_obj1014 }
                     };

/* index 0x1016 :   Consumer Heartbeat Time */
                    UNS8 ObjDict_highestSubIndex_obj1016 = 0;
                    UNS32 ObjDict_obj1016[]={0};

/* index 0x1017 :   Producer Heartbeat Time. */
                    UNS16 ObjDict_obj1017 = 0x2710;	/* 10000 */
                    ODCallback_t ObjDict_Index1017_callbacks[] = 
                     {
                       NULL,
                     };
                    subindex ObjDict_Index1017[] = 
                     {
                       { RW, CANopen_TYPE_uint16, sizeof (UNS16), (void*)&ObjDict_obj1017 }
                     };

/* index 0x1018 :   Identity. */
                    UNS8 ObjDict_highestSubIndex_obj1018 = 4; /* number of subindex - 1*/
                    UNS32 ObjDict_obj1018_Vendor_ID = 0x154F12EE;	/* 357503726 */
                    UNS32 ObjDict_obj1018_Product_Code = 0xA6C0;	/* 42688 */
                    UNS32 ObjDict_obj1018_Revision_Number = 0x1;	/* 1 */
                    UNS32 ObjDict_obj1018_Serial_Number = 0x1;	/* 1 */
                    subindex ObjDict_Index1018[] = 
                     {
                       { RO, CANopen_TYPE_uint8, sizeof (UNS8), (void*)&ObjDict_highestSubIndex_obj1018 },
                       { RO, CANopen_TYPE_uint32, sizeof (UNS32), (void*)&ObjDict_obj1018_Vendor_ID },
                       { RO, CANopen_TYPE_uint32, sizeof (UNS32), (void*)&ObjDict_obj1018_Product_Code },
                       { RO, CANopen_TYPE_uint32, sizeof (UNS32), (void*)&ObjDict_obj1018_Revision_Number },
                       { RO, CANopen_TYPE_uint32, sizeof (UNS32), (void*)&ObjDict_obj1018_Serial_Number }
                     };

/* index 0x1200 :   Server SDO Parameter. */
                    UNS8 ObjDict_highestSubIndex_obj1200 = 2; /* number of subindex - 1*/
                    UNS32 ObjDict_obj1200_COB_ID_Client_to_Server_Receive_SDO = 0x623;	/* 1571 */
                    UNS32 ObjDict_obj1200_COB_ID_Server_to_Client_Transmit_SDO = 0x5A3;	/* 1443 */
                    subindex ObjDict_Index1200[] = 
                     {
                       { RO, CANopen_TYPE_uint8, sizeof (UNS8), (void*)&ObjDict_highestSubIndex_obj1200 },
                       { RO, CANopen_TYPE_uint32, sizeof (UNS32), (void*)&ObjDict_obj1200_COB_ID_Client_to_Server_Receive_SDO },
                       { RO, CANopen_TYPE_uint32, sizeof (UNS32), (void*)&ObjDict_obj1200_COB_ID_Server_to_Client_Transmit_SDO }
                     };

/* index 0x1400 :   Receive PDO 1 Parameter. */
                    UNS8 ObjDict_highestSubIndex_obj1400 = 6; /* number of subindex - 1*/
                    UNS32 ObjDict_obj1400_COB_ID_used_by_PDO = 0x223;	/* 547 */
                    UNS8 ObjDict_obj1400_Transmission_Type = 0x0;	/* 0 */
                    UNS16 ObjDict_obj1400_Inhibit_Time = 0x0;	/* 0 */
                    UNS8 ObjDict_obj1400_Compatibility_Entry = 0x0;	/* 0 */
                    UNS16 ObjDict_obj1400_Event_Timer = 0x0;	/* 0 */
                    UNS8 ObjDict_obj1400_SYNC_start_value = 0x0;	/* 0 */
                    subindex ObjDict_Index1400[] = 
                     {
                       { RO, CANopen_TYPE_uint8, sizeof (UNS8), (void*)&ObjDict_highestSubIndex_obj1400 },
                       { RW, CANopen_TYPE_uint32, sizeof (UNS32), (void*)&ObjDict_obj1400_COB_ID_used_by_PDO },
                       { RW, CANopen_TYPE_uint8, sizeof (UNS8), (void*)&ObjDict_obj1400_Transmission_Type },
                       { RW, CANopen_TYPE_uint16, sizeof (UNS16), (void*)&ObjDict_obj1400_Inhibit_Time },
                       { RW, CANopen_TYPE_uint8, sizeof (UNS8), (void*)&ObjDict_obj1400_Compatibility_Entry },
                       { RW, CANopen_TYPE_uint16, sizeof (UNS16), (void*)&ObjDict_obj1400_Event_Timer },
                       { RW, CANopen_TYPE_uint8, sizeof (UNS8), (void*)&ObjDict_obj1400_SYNC_start_value }
                     };

/* index 0x1600 :   Receive PDO 1 Mapping. */
                    UNS8 ObjDict_highestSubIndex_obj1600 = 1; /* number of subindex - 1*/
                    UNS32 ObjDict_obj1600[] = 
                    {
                      0x20070001	/* 537329665 */
                    };
                    subindex ObjDict_Index1600[] = 
                     {
                       { RW, CANopen_TYPE_uint8, sizeof (UNS8), (void*)&ObjDict_highestSubIndex_obj1600 },
                       { RW, CANopen_TYPE_uint32, sizeof (UNS32), (void*)&ObjDict_obj1600[0] }
                     };

/* index 0x1800 :   Transmit PDO 1 Parameter. */
                    UNS8 ObjDict_highestSubIndex_obj1800 = 6; /* number of subindex - 1*/
                    UNS32 ObjDict_obj1800_COB_ID_used_by_PDO = 0x1A3;	/* 419 */
                    UNS8 ObjDict_obj1800_Transmission_Type = 0x1;	/* 1 */
                    UNS16 ObjDict_obj1800_Inhibit_Time = 0x0;	/* 0 */
                    UNS8 ObjDict_obj1800_Compatibility_Entry = 0x0;	/* 0 */
                    UNS16 ObjDict_obj1800_Event_Timer = 0x0;	/* 0 */
                    UNS8 ObjDict_obj1800_SYNC_start_value = 0x0;	/* 0 */
                    ODCallback_t ObjDict_Index1800_callbacks[] = 
                     {
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                     };
                    subindex ObjDict_Index1800[] = 
                     {
                       { RO, CANopen_TYPE_uint8, sizeof (UNS8), (void*)&ObjDict_highestSubIndex_obj1800 },
                       { RW, CANopen_TYPE_uint32, sizeof (UNS32), (void*)&ObjDict_obj1800_COB_ID_used_by_PDO },
                       { RW, CANopen_TYPE_uint8, sizeof (UNS8), (void*)&ObjDict_obj1800_Transmission_Type },
                       { RW, CANopen_TYPE_uint16, sizeof (UNS16), (void*)&ObjDict_obj1800_Inhibit_Time },
                       { RW, CANopen_TYPE_uint8, sizeof (UNS8), (void*)&ObjDict_obj1800_Compatibility_Entry },
                       { RW, CANopen_TYPE_uint16, sizeof (UNS16), (void*)&ObjDict_obj1800_Event_Timer },
                       { RW, CANopen_TYPE_uint8, sizeof (UNS8), (void*)&ObjDict_obj1800_SYNC_start_value }
                     };

/* index 0x1801 :   Transmit PDO 2 Parameter. */
                    UNS8 ObjDict_highestSubIndex_obj1801 = 6; /* number of subindex - 1*/
                    UNS32 ObjDict_obj1801_COB_ID_used_by_PDO = 0x2A3;	/* 675 */
                    UNS8 ObjDict_obj1801_Transmission_Type = 0x1;	/* 1 */
                    UNS16 ObjDict_obj1801_Inhibit_Time = 0x0;	/* 0 */
                    UNS8 ObjDict_obj1801_Compatibility_Entry = 0x0;	/* 0 */
                    UNS16 ObjDict_obj1801_Event_Timer = 0x0;	/* 0 */
                    UNS8 ObjDict_obj1801_SYNC_start_value = 0x0;	/* 0 */
                    ODCallback_t ObjDict_Index1801_callbacks[] = 
                     {
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                     };
                    subindex ObjDict_Index1801[] = 
                     {
                       { RO, CANopen_TYPE_uint8, sizeof (UNS8), (void*)&ObjDict_highestSubIndex_obj1801 },
                       { RW, CANopen_TYPE_uint32, sizeof (UNS32), (void*)&ObjDict_obj1801_COB_ID_used_by_PDO },
                       { RW, CANopen_TYPE_uint8, sizeof (UNS8), (void*)&ObjDict_obj1801_Transmission_Type },
                       { RW, CANopen_TYPE_uint16, sizeof (UNS16), (void*)&ObjDict_obj1801_Inhibit_Time },
                       { RW, CANopen_TYPE_uint8, sizeof (UNS8), (void*)&ObjDict_obj1801_Compatibility_Entry },
                       { RW, CANopen_TYPE_uint16, sizeof (UNS16), (void*)&ObjDict_obj1801_Event_Timer },
                       { RW, CANopen_TYPE_uint8, sizeof (UNS8), (void*)&ObjDict_obj1801_SYNC_start_value }
                     };

/* index 0x1802 :   Transmit PDO 3 Parameter. */
                    UNS8 ObjDict_highestSubIndex_obj1802 = 6; /* number of subindex - 1*/
                    UNS32 ObjDict_obj1802_COB_ID_used_by_PDO = 0x3A3;	/* 931 */
                    UNS8 ObjDict_obj1802_Transmission_Type = 0x0;	/* 0 */
                    UNS16 ObjDict_obj1802_Inhibit_Time = 0x0;	/* 0 */
                    UNS8 ObjDict_obj1802_Compatibility_Entry = 0x0;	/* 0 */
                    UNS16 ObjDict_obj1802_Event_Timer = 0x0;	/* 0 */
                    UNS8 ObjDict_obj1802_SYNC_start_value = 0x0;	/* 0 */
                    ODCallback_t ObjDict_Index1802_callbacks[] = 
                     {
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                     };
                    subindex ObjDict_Index1802[] = 
                     {
                       { RO, CANopen_TYPE_uint8, sizeof (UNS8), (void*)&ObjDict_highestSubIndex_obj1802 },
                       { RW, CANopen_TYPE_uint32, sizeof (UNS32), (void*)&ObjDict_obj1802_COB_ID_used_by_PDO },
                       { RW, CANopen_TYPE_uint8, sizeof (UNS8), (void*)&ObjDict_obj1802_Transmission_Type },
                       { RW, CANopen_TYPE_uint16, sizeof (UNS16), (void*)&ObjDict_obj1802_Inhibit_Time },
                       { RW, CANopen_TYPE_uint8, sizeof (UNS8), (void*)&ObjDict_obj1802_Compatibility_Entry },
                       { RW, CANopen_TYPE_uint16, sizeof (UNS16), (void*)&ObjDict_obj1802_Event_Timer },
                       { RW, CANopen_TYPE_uint8, sizeof (UNS8), (void*)&ObjDict_obj1802_SYNC_start_value }
                     };

/* index 0x1803 :   Transmit PDO 4 Parameter. */
                    UNS8 ObjDict_highestSubIndex_obj1803 = 6; /* number of subindex - 1*/
                    UNS32 ObjDict_obj1803_COB_ID_used_by_PDO = 0x4A3;	/* 1187 */
                    UNS8 ObjDict_obj1803_Transmission_Type = 0x0;	/* 0 */
                    UNS16 ObjDict_obj1803_Inhibit_Time = 0x0;	/* 0 */
                    UNS8 ObjDict_obj1803_Compatibility_Entry = 0x0;	/* 0 */
                    UNS16 ObjDict_obj1803_Event_Timer = 0x0;	/* 0 */
                    UNS8 ObjDict_obj1803_SYNC_start_value = 0x0;	/* 0 */
                    ODCallback_t ObjDict_Index1803_callbacks[] = 
                     {
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                     };
                    subindex ObjDict_Index1803[] = 
                     {
                       { RO, CANopen_TYPE_uint8, sizeof (UNS8), (void*)&ObjDict_highestSubIndex_obj1803 },
                       { RW, CANopen_TYPE_uint32, sizeof (UNS32), (void*)&ObjDict_obj1803_COB_ID_used_by_PDO },
                       { RW, CANopen_TYPE_uint8, sizeof (UNS8), (void*)&ObjDict_obj1803_Transmission_Type },
                       { RW, CANopen_TYPE_uint16, sizeof (UNS16), (void*)&ObjDict_obj1803_Inhibit_Time },
                       { RW, CANopen_TYPE_uint8, sizeof (UNS8), (void*)&ObjDict_obj1803_Compatibility_Entry },
                       { RW, CANopen_TYPE_uint16, sizeof (UNS16), (void*)&ObjDict_obj1803_Event_Timer },
                       { RW, CANopen_TYPE_uint8, sizeof (UNS8), (void*)&ObjDict_obj1803_SYNC_start_value }
                     };

/* index 0x1A00 :   Transmit PDO 1 Mapping. */
                    UNS8 ObjDict_highestSubIndex_obj1A00 = 2; /* number of subindex - 1*/
                    UNS32 ObjDict_obj1A00[] = 
                    {
                      0x20000020,	/* 536870944 */
                      0x20010020	/* 536936480 */
                    };
                    subindex ObjDict_Index1A00[] = 
                     {
                       { RW, CANopen_TYPE_uint8, sizeof (UNS8), (void*)&ObjDict_highestSubIndex_obj1A00 },
                       { RW, CANopen_TYPE_uint32, sizeof (UNS32), (void*)&ObjDict_obj1A00[0] },
                       { RW, CANopen_TYPE_uint32, sizeof (UNS32), (void*)&ObjDict_obj1A00[1] }
                     };

/* index 0x1A01 :   Transmit PDO 2 Mapping. */
                    UNS8 ObjDict_highestSubIndex_obj1A01 = 2; /* number of subindex - 1*/
                    UNS32 ObjDict_obj1A01[] = 
                    {
                      0x20020020,	/* 537002016 */
                      0x20030020	/* 537067552 */
                    };
                    subindex ObjDict_Index1A01[] = 
                     {
                       { RW, CANopen_TYPE_uint8, sizeof (UNS8), (void*)&ObjDict_highestSubIndex_obj1A01 },
                       { RW, CANopen_TYPE_uint32, sizeof (UNS32), (void*)&ObjDict_obj1A01[0] },
                       { RW, CANopen_TYPE_uint32, sizeof (UNS32), (void*)&ObjDict_obj1A01[1] }
                     };

/* index 0x1A02 :   Transmit PDO 3 Mapping. */
                    UNS8 ObjDict_highestSubIndex_obj1A02 = 1; /* number of subindex - 1*/
                    UNS32 ObjDict_obj1A02[] = 
                    {
                      0x20040020	/* 537133088 */
                    };
                    subindex ObjDict_Index1A02[] = 
                     {
                       { RW, CANopen_TYPE_uint8, sizeof (UNS8), (void*)&ObjDict_highestSubIndex_obj1A02 },
                       { RW, CANopen_TYPE_uint32, sizeof (UNS32), (void*)&ObjDict_obj1A02[0] }
                     };

/* index 0x1A03 :   Transmit PDO 4 Mapping. */
                    UNS8 ObjDict_highestSubIndex_obj1A03 = 1; /* number of subindex - 1*/
                    UNS32 ObjDict_obj1A03[] = 
                    {
                      0x20090020	/* 537460768 */
                    };
                    subindex ObjDict_Index1A03[] = 
                     {
                       { RW, CANopen_TYPE_uint8, sizeof (UNS8), (void*)&ObjDict_highestSubIndex_obj1A03 },
                       { RW, CANopen_TYPE_uint32, sizeof (UNS32), (void*)&ObjDict_obj1A03[0] }
                     };

/* index 0x2000 :   Mapped variable DHT22 Temperature */
                    ODCallback_t DHT22_Temperature_callbacks[] = 
                     {
                       NULL,
                     };
                    subindex ObjDict_Index2000[] = 
                     {
                       { RO, CANopen_TYPE_real32, sizeof (REAL32), (void*)&DHT22_Temperature }
                     };

/* index 0x2001 :   Mapped variable DHT22 Humidity */
                    ODCallback_t DHT22_Humidity_callbacks[] = 
                     {
                       NULL,
                     };
                    subindex ObjDict_Index2001[] = 
                     {
                       { RO, CANopen_TYPE_real32, sizeof (REAL32), (void*)&DHT22_Humidity }
                     };

/* index 0x2002 :   Mapped variable BMP Pressure */
                    ODCallback_t BMP_Pressure_callbacks[] = 
                     {
                       NULL,
                     };
                    subindex ObjDict_Index2002[] = 
                     {
                       { RO, CANopen_TYPE_real32, sizeof (REAL32), (void*)&BMP_Pressure }
                     };

/* index 0x2003 :   Mapped variable BMP Temperature */
                    ODCallback_t BMP_Temperature_callbacks[] = 
                     {
                       NULL,
                     };
                    subindex ObjDict_Index2003[] = 
                     {
                       { RO, CANopen_TYPE_real32, sizeof (REAL32), (void*)&BMP_Temperature }
                     };

/* index 0x2004 :   Mapped variable Counter */
                    ODCallback_t Counter_callbacks[] = 
                     {
                       NULL,
                     };
                    subindex ObjDict_Index2004[] = 
                     {
                       { RO, CANopen_TYPE_int32, sizeof (INTEGER32), (void*)&Counter }
                     };

/* index 0x2005 :   Mapped variable Test String */
                    subindex ObjDict_Index2005[] = 
                     {
                       { RW, CANopen_TYPE_visible_string, 10, (void*)&Test_String }
                     };

/* index 0x2006 :   Mapped variable Lock */
                    ODCallback_t Lock_callbacks[] = 
                     {
                       NULL,
                     };
                    subindex ObjDict_Index2006[] = 
                     {
                       { RW, CANopen_TYPE_boolean, sizeof (UNS8), (void*)&Lock }
                     };

/* index 0x2007 :   Mapped variable Switch1 */
                    ODCallback_t Switch1_callbacks[] = 
                     {
                       NULL,
                     };
                    subindex ObjDict_Index2007[] = 
                     {
                       { RW, CANopen_TYPE_boolean, sizeof (UNS8), (void*)&Switch1 }
                     };

/* index 0x2008 :   Mapped variable Switch1 TimeOut */
                    subindex ObjDict_Index2008[] = 
                     {
                       { RW, CANopen_TYPE_int32, sizeof (INTEGER32), (void*)&Switch1_TimeOut }
                     };

/* index 0x2009 :   Mapped variable Main Voltage */
                    ODCallback_t Main_Voltage_callbacks[] = 
                     {
                       NULL,
                     };
                    subindex ObjDict_Index2009[] = 
                     {
                       { RO, CANopen_TYPE_real32, sizeof (REAL32), (void*)&Main_Voltage }
                     };

/**************************************************************************/
/* Declaration of pointed variables                                       */
/**************************************************************************/

const indextable ObjDict_objdict[] = 
{
  { (subindex*)ObjDict_Index1000,sizeof(ObjDict_Index1000)/sizeof(ObjDict_Index1000[0]), 0x1000},
  { (subindex*)ObjDict_Index1001,sizeof(ObjDict_Index1001)/sizeof(ObjDict_Index1001[0]), 0x1001},
  { (subindex*)ObjDict_Index1003,sizeof(ObjDict_Index1003)/sizeof(ObjDict_Index1003[0]), 0x1003},
  { (subindex*)ObjDict_Index1005,sizeof(ObjDict_Index1005)/sizeof(ObjDict_Index1005[0]), 0x1005},
  { (subindex*)ObjDict_Index1006,sizeof(ObjDict_Index1006)/sizeof(ObjDict_Index1006[0]), 0x1006},
  { (subindex*)ObjDict_Index1008,sizeof(ObjDict_Index1008)/sizeof(ObjDict_Index1008[0]), 0x1008},
  { (subindex*)ObjDict_Index1009,sizeof(ObjDict_Index1009)/sizeof(ObjDict_Index1009[0]), 0x1009},
  { (subindex*)ObjDict_Index100A,sizeof(ObjDict_Index100A)/sizeof(ObjDict_Index100A[0]), 0x100A},
  { (subindex*)ObjDict_Index1014,sizeof(ObjDict_Index1014)/sizeof(ObjDict_Index1014[0]), 0x1014},
  { (subindex*)ObjDict_Index1017,sizeof(ObjDict_Index1017)/sizeof(ObjDict_Index1017[0]), 0x1017},
  { (subindex*)ObjDict_Index1018,sizeof(ObjDict_Index1018)/sizeof(ObjDict_Index1018[0]), 0x1018},
  { (subindex*)ObjDict_Index1200,sizeof(ObjDict_Index1200)/sizeof(ObjDict_Index1200[0]), 0x1200},
  { (subindex*)ObjDict_Index1400,sizeof(ObjDict_Index1400)/sizeof(ObjDict_Index1400[0]), 0x1400},
  { (subindex*)ObjDict_Index1600,sizeof(ObjDict_Index1600)/sizeof(ObjDict_Index1600[0]), 0x1600},
  { (subindex*)ObjDict_Index1800,sizeof(ObjDict_Index1800)/sizeof(ObjDict_Index1800[0]), 0x1800},
  { (subindex*)ObjDict_Index1801,sizeof(ObjDict_Index1801)/sizeof(ObjDict_Index1801[0]), 0x1801},
  { (subindex*)ObjDict_Index1802,sizeof(ObjDict_Index1802)/sizeof(ObjDict_Index1802[0]), 0x1802},
  { (subindex*)ObjDict_Index1803,sizeof(ObjDict_Index1803)/sizeof(ObjDict_Index1803[0]), 0x1803},
  { (subindex*)ObjDict_Index1A00,sizeof(ObjDict_Index1A00)/sizeof(ObjDict_Index1A00[0]), 0x1A00},
  { (subindex*)ObjDict_Index1A01,sizeof(ObjDict_Index1A01)/sizeof(ObjDict_Index1A01[0]), 0x1A01},
  { (subindex*)ObjDict_Index1A02,sizeof(ObjDict_Index1A02)/sizeof(ObjDict_Index1A02[0]), 0x1A02},
  { (subindex*)ObjDict_Index1A03,sizeof(ObjDict_Index1A03)/sizeof(ObjDict_Index1A03[0]), 0x1A03},
  { (subindex*)ObjDict_Index2000,sizeof(ObjDict_Index2000)/sizeof(ObjDict_Index2000[0]), 0x2000},
  { (subindex*)ObjDict_Index2001,sizeof(ObjDict_Index2001)/sizeof(ObjDict_Index2001[0]), 0x2001},
  { (subindex*)ObjDict_Index2002,sizeof(ObjDict_Index2002)/sizeof(ObjDict_Index2002[0]), 0x2002},
  { (subindex*)ObjDict_Index2003,sizeof(ObjDict_Index2003)/sizeof(ObjDict_Index2003[0]), 0x2003},
  { (subindex*)ObjDict_Index2004,sizeof(ObjDict_Index2004)/sizeof(ObjDict_Index2004[0]), 0x2004},
  { (subindex*)ObjDict_Index2005,sizeof(ObjDict_Index2005)/sizeof(ObjDict_Index2005[0]), 0x2005},
  { (subindex*)ObjDict_Index2006,sizeof(ObjDict_Index2006)/sizeof(ObjDict_Index2006[0]), 0x2006},
  { (subindex*)ObjDict_Index2007,sizeof(ObjDict_Index2007)/sizeof(ObjDict_Index2007[0]), 0x2007},
  { (subindex*)ObjDict_Index2008,sizeof(ObjDict_Index2008)/sizeof(ObjDict_Index2008[0]), 0x2008},
  { (subindex*)ObjDict_Index2009,sizeof(ObjDict_Index2009)/sizeof(ObjDict_Index2009[0]), 0x2009},
};

const indextable * ObjDict_scanIndexOD (UNS16 wIndex, UNS32 * errorCode, ODCallback_t **callbacks)
{
	int i;
	*callbacks = NULL;
	switch(wIndex){
		case 0x1000: i = 0;break;
		case 0x1001: i = 1;break;
		case 0x1003: i = 2;*callbacks = ObjDict_Index1003_callbacks; break;
		case 0x1005: i = 3;*callbacks = ObjDict_Index1005_callbacks; break;
		case 0x1006: i = 4;*callbacks = ObjDict_Index1006_callbacks; break;
		case 0x1008: i = 5;break;
		case 0x1009: i = 6;break;
		case 0x100A: i = 7;break;
		case 0x1014: i = 8;break;
		case 0x1017: i = 9;*callbacks = ObjDict_Index1017_callbacks; break;
		case 0x1018: i = 10;break;
		case 0x1200: i = 11;break;
		case 0x1400: i = 12;break;
		case 0x1600: i = 13;break;
		case 0x1800: i = 14;*callbacks = ObjDict_Index1800_callbacks; break;
		case 0x1801: i = 15;*callbacks = ObjDict_Index1801_callbacks; break;
		case 0x1802: i = 16;*callbacks = ObjDict_Index1802_callbacks; break;
		case 0x1803: i = 17;*callbacks = ObjDict_Index1803_callbacks; break;
		case 0x1A00: i = 18;break;
		case 0x1A01: i = 19;break;
		case 0x1A02: i = 20;break;
		case 0x1A03: i = 21;break;
		case 0x2000: i = 22;*callbacks = DHT22_Temperature_callbacks; break;
		case 0x2001: i = 23;*callbacks = DHT22_Humidity_callbacks; break;
		case 0x2002: i = 24;*callbacks = BMP_Pressure_callbacks; break;
		case 0x2003: i = 25;*callbacks = BMP_Temperature_callbacks; break;
		case 0x2004: i = 26;*callbacks = Counter_callbacks; break;
		case 0x2005: i = 27;break;
		case 0x2006: i = 28;*callbacks = Lock_callbacks; break;
		case 0x2007: i = 29;*callbacks = Switch1_callbacks; break;
		case 0x2008: i = 30;break;
		case 0x2009: i = 31;*callbacks = Main_Voltage_callbacks; break;
		default:
			*errorCode = OD_NO_SUCH_OBJECT;
			return NULL;
	}
	*errorCode = OD_SUCCESSFUL;
	return &ObjDict_objdict[i];
}

/* 
 * To count at which received SYNC a PDO must be sent.
 * Even if no pdoTransmit are defined, at least one entry is computed
 * for compilations issues.
 */
s_PDO_status ObjDict_PDO_status[4] = {s_PDO_status_Initializer,s_PDO_status_Initializer,s_PDO_status_Initializer,s_PDO_status_Initializer};

const quick_index ObjDict_firstIndex = {
  11, /* SDO_SVR */
  0, /* SDO_CLT */
  12, /* PDO_RCV */
  13, /* PDO_RCV_MAP */
  14, /* PDO_TRS */
  18 /* PDO_TRS_MAP */
};

const quick_index ObjDict_lastIndex = {
  11, /* SDO_SVR */
  0, /* SDO_CLT */
  12, /* PDO_RCV */
  13, /* PDO_RCV_MAP */
  17, /* PDO_TRS */
  21 /* PDO_TRS_MAP */
};

const UNS16 ObjDict_ObjdictSize = sizeof(ObjDict_objdict)/sizeof(ObjDict_objdict[0]); 

CO_Data ObjDict_Data = CANOPEN_NODE_DATA_INITIALIZER(ObjDict);

