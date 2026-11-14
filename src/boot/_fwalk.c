/* boot:0x01EC6FD0 -- apply a function to every open stream and OR the results. */
struct _FILE {
    unsigned char pad_0[0xC];
    short _flags;                 /* 0x0C */
    unsigned char pad_e[0x4A];
};

struct _glue {
    struct _glue *_next;          /* 0x00 */
    int _niobs;                   /* 0x04 */
    struct _FILE *_iobs;          /* 0x08 */
};

struct _reent {
    unsigned char pad_0[0x1D8];
    struct _glue __sglue;         /* 0x1D8 */
};

int _fwalk(struct _reent *ptr, int (*function)(struct _FILE *))
{
    struct _FILE *fp;
    int n, ret;
    struct _glue *g;

    ret = 0;
    for (g = &ptr->__sglue; g != 0; g = g->_next)
        for (fp = g->_iobs, n = g->_niobs; --n >= 0; fp++)
            if (fp->_flags != 0)
                ret |= (*function)(fp);
    return ret;
}
