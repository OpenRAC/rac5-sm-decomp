/* _lseek_r, newlib reentrant wrapper: clears errno, calls lseek and copies a nonzero errno into the reent when the call returns -1. */
extern int errno;
struct _reent { int _errno; };
extern int lseek(int fd, int off, int whence);

int _lseek_r(struct _reent *ptr, int fd, int off, int whence)
{
    int r;
    errno = 0;
    r = lseek(fd, off, whence);
    if (r == (int)-1) {
        if (errno != 0) {
            ptr->_errno = errno;
        }
    }
    return r;
}
