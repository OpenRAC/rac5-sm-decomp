/* ps2fioReadFileToBuffer 0x01EBCBF0 (14 November 2026).
 * Measured sdk991111sq: 28 differing words; first difference at 0x24.
 * Recover the observed types, statement order and lifetimes before retrying.
 * No matching credit.
 */
extern int ps2fioOpen(const char *path, int flags, int mode);
extern int ps2fioRead(int fd, void *buf, int size);
extern int ps2fioClose(int fd);

int ps2fioReadFileToBuffer(const char *path, void *buf, int size)
{
    int fd;
    int n;
    int r;

    if (size != 0 && (size & 0x7FF) != 0)
        return -0x403;
    fd = ps2fioOpen(path, 1, 0);
    if (fd < 0)
        return fd;
    n = ps2fioRead(fd, buf, size);
    if (n >= 0) {
        r = ps2fioClose(fd);
        return r < 0 ? r : n;
    }
    ps2fioClose(fd);
    return n;
}
