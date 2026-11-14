/* boot:0x01EC7328 -- format into a bounded buffer. */
struct _reent;
struct _FILE {
    unsigned char *_p;                          /* 0x00 */
    int _r;                                     /* 0x04 */
    int _w;                                     /* 0x08 */
    short _flags;                               /* 0x0C */
    short _file;                                /* 0x0E */
    struct { unsigned char *_base; int _size; } _bf;  /* 0x10 */
    unsigned char _pad[0x3C];                   /* 0x18 */
    struct _reent *_data;                       /* 0x54 */
};

extern struct _reent *_impure_ptr;
extern int vfprintf(struct _FILE *fp, const char *fmt, void *ap);

int snprintf(char *str, unsigned int size, const char *fmt, ...)
{
    struct _FILE f;
    char *ap;
    int ret;

    f._flags = 0x208;
    f._bf._base = f._p = (unsigned char *)str;
    f._bf._size = f._w = size;
    f._data = _impure_ptr;
    ap = (char *)&f + 0xC8;
    ret = vfprintf(&f, fmt, ap);
    if ((unsigned int)ret < size)
        *f._p = 0;
    else if (size < (unsigned int)ret)
        ret = -1;
    return ret;
}
