/* _fstat_r, newlib reentrant wrapper: clears errno, calls fstat and copies a nonzero errno into the reent when the call returns -1. */
extern int errno;
struct _reent { int _errno; };
extern int fstat(int fd, void *st);

int _fstat_r(struct _reent *ptr, int fd, void *st)
{
    int r;
    errno = 0;
    r = fstat(fd, st);
    if (r == (int)-1) {
        if (errno != 0) {
            ptr->_errno = errno;
        }
    }
    return r;
}
