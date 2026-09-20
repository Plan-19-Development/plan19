#ifndef _PROTOCOL_H
#define _PROTOCOL_H

#define ANAMELEN 255
#define WNAMELEN 1023

/* 19P message types */
enum {
    Tversion    = 0,
    Rversion    = 0,
    Tauth       = 1,
    Rauth       = 1,
    Tattach     = 2,
    Rattach     = 2,
    Twalk       = 3,
    Rwalk       = 3,
    Tcreate     = 4,
    Rcreate     = 4,
    Topen       = 5,
    Ropen       = 5,
    Tread       = 6,
    Rread       = 6,
    Twrite      = 7,
    Rwrite      = 7,
    Tflush      = 8,
    Rflush      = 8,
    Tstat       = 9,
    Rstat       = 9,
    Twalkbeg    = 10,
    Rwalkbeg    = 10,
    Tgetattr    = 11,
    Rgetattr    = 11,
    Tsetattr    = 12,
    Rsetattr    = 12,

    QidType     = 0x10000,
    QidDir      = 0x4000,
    QidAlias    = 0x2000,

    OmodeCreate = 01000,
    OmodeExcl   = 02000,
    OmodeTrunc  = 04000,
    OmodeDeref  = 010000,

    Mversion    = 0,
    Mauth       = 1,
    Mattach     = 2,
    Mwalk       = 3,
    Mcreate     = 4,
    Mopen       = 5,
    Mread       = 6,
    Mwrite      = 7,
    Mclose      = 8,
    Mflush      = 9,
    Mstat       = 10,
    Mwalkbeg    = 11,
    Mgetattr    = 12,
    Msetattr    = 13,
};

struct qid {
    ulong_t type;
    ulong_t version;
    ulong_t path;
};

struct iovec {
    void *iov_base;
    size_t iov_len;
};

#endif