//=========================================================================
// cmdmgr.h
// 
// header file for commandline / configuration management for runMag utility.
// 
// Author:      David Witten, KD0EAG
// Date:        June 19, 2020
// License:     GPL 3.0
//=========================================================================
#ifndef SWX3100CMDMGR_h
#define SWX3100CMDMGR_h

#include "runMag.h"

//------------------------------------------
// Parameter List struct
//------------------------------------------
typedef struct tag_pList
{
    int SBCType;
    int boardType;
    int boardMode;
    int doBistMask; 
    int buildLogPath;
    
    int cc_x;
    int cc_y;
    int cc_z;
 
    int x_gain;
    int y_gain;
    int z_gain;
    
    int TMRCRate;
    int mSampleRate;

    int samplingMode;

    int NOSRegValue;

    int readBackCCRegs;
    int magRevId;
    
    int hideRaw;
    int i2cBusNumber;
    int i2c_fd;
    int jsonFlag;

    int localTempOnly;
    int localTempAddr;

    int magnetometerOnly;
    int magnetometerAddr;

    int remoteTempOnly;
    int remoteTempAddr;

    int outDelay;
    int quietFlag;
    int showParameters;
    int singleRead;
    int tsMilliseconds;
    int verboseFlag;
    int showTotal;
    char *outputFilePath;
    char *sitePrefix;
    char *logOutputTime;
    int  logOutput;
    char *Version;
} pList;


//------------------------------------------
// Prototypes
//------------------------------------------
long currentTimeMillis();
struct tm *getUTC();
void listSBCs();
int buildLogFilePath(pList *p);
void showCountGainRelationship();
int readConfigFromFile(pList *p, char *cfgFile);
int saveConfigToFile(pList *p, char *cfgFile);
void showSettings(pList *p);
int getCommandLine(int argc, char** argv, pList *p);


#endif // SWX3100CMDMGR_h
