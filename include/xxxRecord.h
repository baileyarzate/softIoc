/* xxxRecord.h generated from xxxRecord.dbd */

#ifndef INC_xxxRecord_H
#define INC_xxxRecord_H

#include "epicsTypes.h"
#include "link.h"
#include "epicsMutex.h"
#include "ellLib.h"
#include "devSup.h"
#include "epicsTime.h"

typedef struct xxxRecord {
    char                name[61];   /* Record Name */
    char                desc[41];   /* Descriptor */
    char                asg[29];    /* Access Security Group */
    epicsEnum16         scan;       /* Scan Mechanism */
    epicsEnum16         pini;       /* Process at iocInit */
    epicsInt16          phas;       /* Scan Phase */
    char                evnt[40];   /* Event Name */
    epicsInt16          tse;        /* Time Stamp Event */
    DBLINK              tsel;       /* Time Stamp Link */
    epicsEnum16         dtyp;       /* Device Type */
    epicsInt16          disv;       /* Disable Value */
    epicsInt16          disa;       /* Disable */
    DBLINK              sdis;       /* Scanning Disable */
    epicsMutexId        mlok;       /* Monitor lock */
    ELLLIST             mlis;       /* Monitor List */
    ELLLIST             bklnk;      /* Backwards link tracking */
    epicsUInt8          disp;       /* Disable putField */
    epicsUInt8          proc;       /* Force Processing */
    epicsEnum16         stat;       /* Alarm Status */
    epicsEnum16         sevr;       /* Alarm Severity */
    epicsEnum16         nsta;       /* New Alarm Status */
    epicsEnum16         nsev;       /* New Alarm Severity */
    epicsEnum16         acks;       /* Alarm Ack Severity */
    epicsEnum16         ackt;       /* Alarm Ack Transient */
    epicsEnum16         diss;       /* Disable Alarm Sevrty */
    epicsUInt8          lcnt;       /* Lock Count */
    epicsUInt8          pact;       /* Record active */
    epicsUInt8          putf;       /* dbPutField process */
    epicsUInt8          rpro;       /* Reprocess  */
    struct asgMember    *asp;       /* Access Security Pvt */
    struct processNotify *ppn;      /* pprocessNotify */
    struct processNotifyRecord *ppnr; /* pprocessNotifyRecord */
    struct scan_element *spvt;      /* Scan Private */
    struct typed_rset   *rset;      /* Address of RSET */
    unambiguous_dset    *dset;      /* DSET address */
    void                *dpvt;      /* Device Private */
    struct dbRecordType *rdes;      /* Address of dbRecordType */
    struct lockRecord   *lset;      /* Lock Set */
    epicsEnum16         prio;       /* Scheduling Priority */
    epicsUInt8          tpro;       /* Trace Processing */
    epicsUInt8          bkpt;       /* Break Point */
    epicsUInt8          udf;        /* Undefined */
    epicsEnum16         udfs;       /* Undefined Alarm Sevrty */
    epicsTimeStamp      time;       /* Time */
    DBLINK              flnk;       /* Forward Process Link */
    epicsFloat64        val;        /* Current EGU Value */
    DBLINK              inp;        /* Input Specification */
    epicsInt16          prec;       /* Display Precision */
    char                egu[16];    /* Engineering Units */
    epicsFloat32        hopr;       /* High Operating Range */
    epicsFloat32        lopr;       /* Low Operating Range */
    epicsFloat32        hihi;       /* Hihi Alarm Limit */
    epicsFloat32        lolo;       /* Lolo Alarm Limit */
    epicsFloat32        high;       /* High Alarm Limit */
    epicsFloat32        low;        /* Low Alarm Limit */
    epicsEnum16         hhsv;       /* Hihi Severity */
    epicsEnum16         llsv;       /* Lolo Severity */
    epicsEnum16         hsv;        /* High Severity */
    epicsEnum16         lsv;        /* Low Severity */
    epicsFloat64        hyst;       /* Alarm Deadband */
    epicsFloat64        adel;       /* Archive Deadband */
    epicsFloat64        mdel;       /* Monitor Deadband */
    epicsFloat64        lalm;       /* Last Value Alarmed */
    epicsFloat64        alst;       /* Last Value Archived */
    epicsFloat64        mlst;       /* Last Val Monitored */
} xxxRecord;

typedef enum {
	xxxRecordNAME = 0,
	xxxRecordDESC = 1,
	xxxRecordASG = 2,
	xxxRecordSCAN = 3,
	xxxRecordPINI = 4,
	xxxRecordPHAS = 5,
	xxxRecordEVNT = 6,
	xxxRecordTSE = 7,
	xxxRecordTSEL = 8,
	xxxRecordDTYP = 9,
	xxxRecordDISV = 10,
	xxxRecordDISA = 11,
	xxxRecordSDIS = 12,
	xxxRecordMLOK = 13,
	xxxRecordMLIS = 14,
	xxxRecordBKLNK = 15,
	xxxRecordDISP = 16,
	xxxRecordPROC = 17,
	xxxRecordSTAT = 18,
	xxxRecordSEVR = 19,
	xxxRecordNSTA = 20,
	xxxRecordNSEV = 21,
	xxxRecordACKS = 22,
	xxxRecordACKT = 23,
	xxxRecordDISS = 24,
	xxxRecordLCNT = 25,
	xxxRecordPACT = 26,
	xxxRecordPUTF = 27,
	xxxRecordRPRO = 28,
	xxxRecordASP = 29,
	xxxRecordPPN = 30,
	xxxRecordPPNR = 31,
	xxxRecordSPVT = 32,
	xxxRecordRSET = 33,
	xxxRecordDSET = 34,
	xxxRecordDPVT = 35,
	xxxRecordRDES = 36,
	xxxRecordLSET = 37,
	xxxRecordPRIO = 38,
	xxxRecordTPRO = 39,
	xxxRecordBKPT = 40,
	xxxRecordUDF = 41,
	xxxRecordUDFS = 42,
	xxxRecordTIME = 43,
	xxxRecordFLNK = 44,
	xxxRecordVAL = 45,
	xxxRecordINP = 46,
	xxxRecordPREC = 47,
	xxxRecordEGU = 48,
	xxxRecordHOPR = 49,
	xxxRecordLOPR = 50,
	xxxRecordHIHI = 51,
	xxxRecordLOLO = 52,
	xxxRecordHIGH = 53,
	xxxRecordLOW = 54,
	xxxRecordHHSV = 55,
	xxxRecordLLSV = 56,
	xxxRecordHSV = 57,
	xxxRecordLSV = 58,
	xxxRecordHYST = 59,
	xxxRecordADEL = 60,
	xxxRecordMDEL = 61,
	xxxRecordLALM = 62,
	xxxRecordALST = 63,
	xxxRecordMLST = 64
} xxxFieldIndex;

#ifdef GEN_SIZE_OFFSET

#include <epicsExport.h>
#include <cantProceed.h>
#ifdef __cplusplus
extern "C" {
#endif
static int xxxRecordSizeOffset(dbRecordType *prt)
{
    xxxRecord *prec = 0;

    if (prt->no_fields != 65) {
        cantProceed("IOC build or installation error:\n"
            "    The xxxRecord defined in the DBD file has %d fields,\n"
            "    but the record support code was built with 65.\n",
            prt->no_fields);
    }
    prt->papFldDes[xxxRecordNAME]->size = sizeof(prec->name);
    prt->papFldDes[xxxRecordNAME]->offset = (unsigned short)((char *)&prec->name - (char *)prec);
    prt->papFldDes[xxxRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[xxxRecordDESC]->offset = (unsigned short)((char *)&prec->desc - (char *)prec);
    prt->papFldDes[xxxRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[xxxRecordASG]->offset = (unsigned short)((char *)&prec->asg - (char *)prec);
    prt->papFldDes[xxxRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[xxxRecordSCAN]->offset = (unsigned short)((char *)&prec->scan - (char *)prec);
    prt->papFldDes[xxxRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[xxxRecordPINI]->offset = (unsigned short)((char *)&prec->pini - (char *)prec);
    prt->papFldDes[xxxRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[xxxRecordPHAS]->offset = (unsigned short)((char *)&prec->phas - (char *)prec);
    prt->papFldDes[xxxRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[xxxRecordEVNT]->offset = (unsigned short)((char *)&prec->evnt - (char *)prec);
    prt->papFldDes[xxxRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[xxxRecordTSE]->offset = (unsigned short)((char *)&prec->tse - (char *)prec);
    prt->papFldDes[xxxRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[xxxRecordTSEL]->offset = (unsigned short)((char *)&prec->tsel - (char *)prec);
    prt->papFldDes[xxxRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[xxxRecordDTYP]->offset = (unsigned short)((char *)&prec->dtyp - (char *)prec);
    prt->papFldDes[xxxRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[xxxRecordDISV]->offset = (unsigned short)((char *)&prec->disv - (char *)prec);
    prt->papFldDes[xxxRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[xxxRecordDISA]->offset = (unsigned short)((char *)&prec->disa - (char *)prec);
    prt->papFldDes[xxxRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[xxxRecordSDIS]->offset = (unsigned short)((char *)&prec->sdis - (char *)prec);
    prt->papFldDes[xxxRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[xxxRecordMLOK]->offset = (unsigned short)((char *)&prec->mlok - (char *)prec);
    prt->papFldDes[xxxRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[xxxRecordMLIS]->offset = (unsigned short)((char *)&prec->mlis - (char *)prec);
    prt->papFldDes[xxxRecordBKLNK]->size = sizeof(prec->bklnk);
    prt->papFldDes[xxxRecordBKLNK]->offset = (unsigned short)((char *)&prec->bklnk - (char *)prec);
    prt->papFldDes[xxxRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[xxxRecordDISP]->offset = (unsigned short)((char *)&prec->disp - (char *)prec);
    prt->papFldDes[xxxRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[xxxRecordPROC]->offset = (unsigned short)((char *)&prec->proc - (char *)prec);
    prt->papFldDes[xxxRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[xxxRecordSTAT]->offset = (unsigned short)((char *)&prec->stat - (char *)prec);
    prt->papFldDes[xxxRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[xxxRecordSEVR]->offset = (unsigned short)((char *)&prec->sevr - (char *)prec);
    prt->papFldDes[xxxRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[xxxRecordNSTA]->offset = (unsigned short)((char *)&prec->nsta - (char *)prec);
    prt->papFldDes[xxxRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[xxxRecordNSEV]->offset = (unsigned short)((char *)&prec->nsev - (char *)prec);
    prt->papFldDes[xxxRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[xxxRecordACKS]->offset = (unsigned short)((char *)&prec->acks - (char *)prec);
    prt->papFldDes[xxxRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[xxxRecordACKT]->offset = (unsigned short)((char *)&prec->ackt - (char *)prec);
    prt->papFldDes[xxxRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[xxxRecordDISS]->offset = (unsigned short)((char *)&prec->diss - (char *)prec);
    prt->papFldDes[xxxRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[xxxRecordLCNT]->offset = (unsigned short)((char *)&prec->lcnt - (char *)prec);
    prt->papFldDes[xxxRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[xxxRecordPACT]->offset = (unsigned short)((char *)&prec->pact - (char *)prec);
    prt->papFldDes[xxxRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[xxxRecordPUTF]->offset = (unsigned short)((char *)&prec->putf - (char *)prec);
    prt->papFldDes[xxxRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[xxxRecordRPRO]->offset = (unsigned short)((char *)&prec->rpro - (char *)prec);
    prt->papFldDes[xxxRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[xxxRecordASP]->offset = (unsigned short)((char *)&prec->asp - (char *)prec);
    prt->papFldDes[xxxRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[xxxRecordPPN]->offset = (unsigned short)((char *)&prec->ppn - (char *)prec);
    prt->papFldDes[xxxRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[xxxRecordPPNR]->offset = (unsigned short)((char *)&prec->ppnr - (char *)prec);
    prt->papFldDes[xxxRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[xxxRecordSPVT]->offset = (unsigned short)((char *)&prec->spvt - (char *)prec);
    prt->papFldDes[xxxRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[xxxRecordRSET]->offset = (unsigned short)((char *)&prec->rset - (char *)prec);
    prt->papFldDes[xxxRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[xxxRecordDSET]->offset = (unsigned short)((char *)&prec->dset - (char *)prec);
    prt->papFldDes[xxxRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[xxxRecordDPVT]->offset = (unsigned short)((char *)&prec->dpvt - (char *)prec);
    prt->papFldDes[xxxRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[xxxRecordRDES]->offset = (unsigned short)((char *)&prec->rdes - (char *)prec);
    prt->papFldDes[xxxRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[xxxRecordLSET]->offset = (unsigned short)((char *)&prec->lset - (char *)prec);
    prt->papFldDes[xxxRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[xxxRecordPRIO]->offset = (unsigned short)((char *)&prec->prio - (char *)prec);
    prt->papFldDes[xxxRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[xxxRecordTPRO]->offset = (unsigned short)((char *)&prec->tpro - (char *)prec);
    prt->papFldDes[xxxRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[xxxRecordBKPT]->offset = (unsigned short)((char *)&prec->bkpt - (char *)prec);
    prt->papFldDes[xxxRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[xxxRecordUDF]->offset = (unsigned short)((char *)&prec->udf - (char *)prec);
    prt->papFldDes[xxxRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[xxxRecordUDFS]->offset = (unsigned short)((char *)&prec->udfs - (char *)prec);
    prt->papFldDes[xxxRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[xxxRecordTIME]->offset = (unsigned short)((char *)&prec->time - (char *)prec);
    prt->papFldDes[xxxRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[xxxRecordFLNK]->offset = (unsigned short)((char *)&prec->flnk - (char *)prec);
    prt->papFldDes[xxxRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[xxxRecordVAL]->offset = (unsigned short)((char *)&prec->val - (char *)prec);
    prt->papFldDes[xxxRecordINP]->size = sizeof(prec->inp);
    prt->papFldDes[xxxRecordINP]->offset = (unsigned short)((char *)&prec->inp - (char *)prec);
    prt->papFldDes[xxxRecordPREC]->size = sizeof(prec->prec);
    prt->papFldDes[xxxRecordPREC]->offset = (unsigned short)((char *)&prec->prec - (char *)prec);
    prt->papFldDes[xxxRecordEGU]->size = sizeof(prec->egu);
    prt->papFldDes[xxxRecordEGU]->offset = (unsigned short)((char *)&prec->egu - (char *)prec);
    prt->papFldDes[xxxRecordHOPR]->size = sizeof(prec->hopr);
    prt->papFldDes[xxxRecordHOPR]->offset = (unsigned short)((char *)&prec->hopr - (char *)prec);
    prt->papFldDes[xxxRecordLOPR]->size = sizeof(prec->lopr);
    prt->papFldDes[xxxRecordLOPR]->offset = (unsigned short)((char *)&prec->lopr - (char *)prec);
    prt->papFldDes[xxxRecordHIHI]->size = sizeof(prec->hihi);
    prt->papFldDes[xxxRecordHIHI]->offset = (unsigned short)((char *)&prec->hihi - (char *)prec);
    prt->papFldDes[xxxRecordLOLO]->size = sizeof(prec->lolo);
    prt->papFldDes[xxxRecordLOLO]->offset = (unsigned short)((char *)&prec->lolo - (char *)prec);
    prt->papFldDes[xxxRecordHIGH]->size = sizeof(prec->high);
    prt->papFldDes[xxxRecordHIGH]->offset = (unsigned short)((char *)&prec->high - (char *)prec);
    prt->papFldDes[xxxRecordLOW]->size = sizeof(prec->low);
    prt->papFldDes[xxxRecordLOW]->offset = (unsigned short)((char *)&prec->low - (char *)prec);
    prt->papFldDes[xxxRecordHHSV]->size = sizeof(prec->hhsv);
    prt->papFldDes[xxxRecordHHSV]->offset = (unsigned short)((char *)&prec->hhsv - (char *)prec);
    prt->papFldDes[xxxRecordLLSV]->size = sizeof(prec->llsv);
    prt->papFldDes[xxxRecordLLSV]->offset = (unsigned short)((char *)&prec->llsv - (char *)prec);
    prt->papFldDes[xxxRecordHSV]->size = sizeof(prec->hsv);
    prt->papFldDes[xxxRecordHSV]->offset = (unsigned short)((char *)&prec->hsv - (char *)prec);
    prt->papFldDes[xxxRecordLSV]->size = sizeof(prec->lsv);
    prt->papFldDes[xxxRecordLSV]->offset = (unsigned short)((char *)&prec->lsv - (char *)prec);
    prt->papFldDes[xxxRecordHYST]->size = sizeof(prec->hyst);
    prt->papFldDes[xxxRecordHYST]->offset = (unsigned short)((char *)&prec->hyst - (char *)prec);
    prt->papFldDes[xxxRecordADEL]->size = sizeof(prec->adel);
    prt->papFldDes[xxxRecordADEL]->offset = (unsigned short)((char *)&prec->adel - (char *)prec);
    prt->papFldDes[xxxRecordMDEL]->size = sizeof(prec->mdel);
    prt->papFldDes[xxxRecordMDEL]->offset = (unsigned short)((char *)&prec->mdel - (char *)prec);
    prt->papFldDes[xxxRecordLALM]->size = sizeof(prec->lalm);
    prt->papFldDes[xxxRecordLALM]->offset = (unsigned short)((char *)&prec->lalm - (char *)prec);
    prt->papFldDes[xxxRecordALST]->size = sizeof(prec->alst);
    prt->papFldDes[xxxRecordALST]->offset = (unsigned short)((char *)&prec->alst - (char *)prec);
    prt->papFldDes[xxxRecordMLST]->size = sizeof(prec->mlst);
    prt->papFldDes[xxxRecordMLST]->offset = (unsigned short)((char *)&prec->mlst - (char *)prec);
    prt->rec_size = sizeof(*prec);
    return 0;
}
epicsExportRegistrar(xxxRecordSizeOffset);

#ifdef __cplusplus
}
#endif
#endif /* GEN_SIZE_OFFSET */

#endif /* INC_xxxRecord_H */
