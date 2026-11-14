/* __sinit, retail 0x01ECF400 (newlib sinit): installs the cleanup hook, marks the reent initialised and sets up the three standard streams. */
struct _glue { void *_next; int _niobs; void *_iobs; };
struct _reent {
    char pad00[0x38];
    int __sdidinit;
    void (*__cleanup)(struct _reent *);
    char pad40[0x1D8 - 0x40];
    struct _glue _glue;
    char pad1E4[0x23C - 0x1E4];
};

extern void _cleanup_r(struct _reent *ptr);
extern void std_01ECF398(void *fp, int flags, int file, struct _reent *data);

void __sinit(struct _reent *s)
{
    char *base = (char *)s;
    s->__cleanup = _cleanup_r;
    s->__sdidinit = 1;
    std_01ECF398(base + 0x1E4, 4, 0, s);
    std_01ECF398(base + 0x23C, 9, 1, s);
    std_01ECF398(base + 0x294, 10, 2, s);
    s->_glue._next = 0;
    s->_glue._niobs = 3;
    s->_glue._iobs = base + 0x1E4;
}
