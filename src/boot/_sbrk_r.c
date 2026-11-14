/* _sbrk_r, newlib reentrant wrapper: clears errno, calls sbrk and copies a nonzero errno into the reent when the call returns -1. */
extern int errno;
struct _reent { int _errno; };
extern char *sbrk(int incr);

char * _sbrk_r(struct _reent *ptr, int incr)
{
    char * r;
    errno = 0;
    r = sbrk(incr);
    if (r == (char *)-1) {
        if (errno != 0) {
            ptr->_errno = errno;
        }
    }
    return r;
}
