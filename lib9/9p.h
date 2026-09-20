#ifndef _LIB9_9P_H
#define _LIB9_9P_H

#include <types.h>

/* 19P message headers */
struct p9mhead {
    uchar_t type;
    ushort_t size;
};

struct p9thead {
    uchar_t type;
    ushort_t size;
    ulong_t xid;
};

struct p9tversion {
    uchar_t version[MAXNAMELEN];
    ulong_t maxsize;
};

struct p9tauth {
    uchar_t uname[MAXNAMELEN];
    uchar_t aname[MAXNAMELEN];
};

struct p9trw {
    uchar_t fname[MAXNAMELEN];
    uchar_t iounit;
};

#endif