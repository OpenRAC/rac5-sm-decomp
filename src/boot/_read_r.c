/* _read_r, newlib reentrant wrapper: clears errno, calls read and copies a nonzero errno into the reent when the call returns -1. */
extern int errno;
struct _reent { int _errno; };
extern int read(int fd, void *buf, unsigned int n);

int _read_r(struct _reent *ptr, int fd, void *buf, unsigned int n)
{
    int r;
    errno = 0;
    r = read(fd, buf, n);
    if (r == (int)-1) {
        if (errno != 0) {
            ptr->_errno = errno;
        }
    }
    return r;
}
