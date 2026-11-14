/* _close_r, newlib reentrant wrapper: clears errno, calls close and copies a nonzero errno into the reent when the call returns -1. */
extern int errno;
struct _reent { int _errno; };
extern int close(int fd);

int _close_r(struct _reent *ptr, int fd)
{
    int r;
    errno = 0;
    r = close(fd);
    if (r == (int)-1) {
        if (errno != 0) {
            ptr->_errno = errno;
        }
    }
    return r;
}
