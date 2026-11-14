/* boot:0x01EC74F0 -- stream read hook: read through the reent and advance the offset. */
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

extern long _read_r(struct _reent *ptr, int fd, void *buf, int n);

int __sread(struct _FILE *fp, char *buf, int n)
{
    int ret;

    ret = _read_r(fp->_data, fp->_file, buf, n);
    if (ret >= 0)
        fp->_offset += ret;
    else
        fp->_flags &= ~0x1000;
    return ret;
}
