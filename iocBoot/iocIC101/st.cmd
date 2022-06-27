#!../../bin/linux-x86_64/IC101

#- You may have to change IC101 to something else
#- everywhere it appears in this file

epicsEnvSet("PORT", "NPort 5150A")
epicsEnvSet("EPICS_CA_AUTO_ADDR_LIST", "NO")
epicsEnvSet("EPICS_CA_ADDR_LIST", "192.168.127.253")

< envPaths

## configuration for stream
epicsEnvSet ("STREAM_PROTOCOL_PATH", "/home/jarzate/IOCs/IC101App/src")

cd "/home/jarzate/IOCs" 

## Register all support components
dbLoadDatabase ("/home/jarzate/IOCs/dbd/IC101.dbd",0,0)
## dbLoadDatabase ("/home/jarzate/IOCs/IC101App/src/IC101AppInclude.dbd",0,0)
dbLoadDatabase ("/usr/lib/epics/dbd/drvAsynIPPort.dbd",0,0)
IC101_registerRecordDeviceDriver(pdbbase)

## Load record instances
## dbLoadTemplate "db/user.substitutions"
dbLoadRecords "db/IC101Version.db", "user=root"
## dbLoadRecords "db/dbSubExample.db", "user=root"

#- Set this to see messages from mySub
## var mySubDebug 1

drvAsynIPPortConfigure("$(PORT)","192.168.127.254:4002",0,0,0)

#- Run this to trace the stages of iocInit
#traceIocInit

cd "/home/jarzate/IOCs/iocBoot/iocIC101"
iocInit()

## Start any sequence programs
#seq sncExample, "user=root"

date
