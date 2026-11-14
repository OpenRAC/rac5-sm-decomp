/* _write_r, newlib reentrant wrapper: clears errno, calls write and copies a nonzero errno into the reent when the call returns -1. */
extern int errno;
struct _reent { int _errno; };
extern int write(int fd, const void *buf, unsigned int n);

int _write_r(struct _reent *ptr, int fd, const void *buf, unsigned int n)
{
    int r;
    errno = 0;
    r = write(fd, buf, n);
    if (r == (int)-1) {
        if (errno != 0) {
            ptr->_errno = errno;
        }
    }
    return r;
}
