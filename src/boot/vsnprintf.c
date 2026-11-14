/* boot:0x01EC8268 -- format into a bounded buffer from a va_list. */
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
extern int vfprintf(struct _FILE *fp, const char *fmt, void *ap);

int vsnprintf(char *str, unsigned int size, const char *fmt, void *ap)
{
    struct _FILE f;
    int ret;

    f._flags = 0x208;
    f._bf._base = f._p = (unsigned char *)str;
    f._bf._size = f._w = size;
    f._data = _impure_ptr;
    ret = vfprintf(&f, fmt, ap);
    *f._p = 0;
    if (size < (unsigned int)ret)
        ret = -1;
    return ret;
}
