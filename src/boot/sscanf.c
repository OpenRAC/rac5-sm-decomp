/* boot:0x01EC7458 -- scan a string through a read-only string stream. */
struct _reent;
struct _FILE {
    unsigned char *_p;                          /* 0x00 */
    int _r;                                     /* 0x04 */
    int _w;                                     /* 0x08 */
    short _flags;                               /* 0x0C */
    short _file;                                /* 0x0E */
    struct { unsigned char *_base; int _size; } _bf;  /* 0x10 */
    int _lbfsize;                               /* 0x18 */
    void *_cookie;                              /* 0x1C */
    int (*_read)(struct _FILE *, char *, int);  /* 0x20 */
    int (*_write)(struct _FILE *, const char *, int); /* 0x24 */
    long (*_seek)(struct _FILE *, long, int);   /* 0x28 */
    int (*_close)(struct _FILE *);              /* 0x2C */
    struct { unsigned char *_base; int _size; } _ub;  /* 0x30 */
    unsigned char *_up;                         /* 0x38 */
    int _ur;                                    /* 0x3C */
    unsigned char _ubuf[3];                     /* 0x40 */
    unsigned char _nbuf[1];                     /* 0x43 */
    struct { unsigned char *_base; int _size; } _lb;  /* 0x44 */
    int _blksize;                               /* 0x4C */
    int _offset;                                /* 0x50 */
    struct _reent *_data;                       /* 0x54 */
};

extern struct _reent *_impure_ptr;
extern unsigned int strlen(const char *s);
extern int eofread_01EC7450(struct _FILE *fp, char *buf, int n);
extern int __svfscanf(struct _FILE *fp, const char *fmt, void *ap);

int sscanf(const char *str, const char *fmt, ...)
{
    struct _FILE f;
    char *ap;

    f._flags = 4;
    f._bf._base = f._p = (unsigned char *)str;
    f._bf._size = f._r = strlen(str);
    f._read = eofread_01EC7450;
    f._ub._base = 0;
    f._lb._base = 0;
    f._data = _impure_ptr;
    ap = (char *)&f + 0xC0;
    return __svfscanf(&f, fmt, ap);
}
