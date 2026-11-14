/* atexit 0x01EC8318 (14 November 2026).
 * Measured prodg2953: 20 differing words; first difference at 0x34.
 * Recover the observed types, statement order and lifetimes before retrying.
 * No matching credit.
 */
struct _atexit {
    struct _atexit *_next;        /* 0x00 */
    int _ind;                     /* 0x04 */
    void (*_fns[32])(void);       /* 0x08 */
};

struct _reent {
    unsigned char pad_0[0x148];
    struct _atexit *_atexit;      /* 0x148 */
    struct _atexit _atexit0;      /* 0x14C */
};

extern struct _reent *_impure_ptr;
extern void *malloc(unsigned int n);

int atexit(void (*fn)(void))
{
    struct _atexit *p;

    if ((p = _impure_ptr->_atexit) == 0)
        _impure_ptr->_atexit = p = &_impure_ptr->_atexit0;
    if (p->_ind >= 32) {
        if ((p = (struct _atexit *)malloc(sizeof(struct _atexit))) == 0)
            return -1;
        p->_ind = 0;
        p->_next = _impure_ptr->_atexit;
        _impure_ptr->_atexit = p;
    }
    p->_fns[p->_ind++] = fn;
    return 0;
}
