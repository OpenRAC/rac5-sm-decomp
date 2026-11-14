/* boot:0x01EBCC88 -- create a file and write a buffer to it. */
extern int ps2fioOpen(const char *path, int flags, int mode);
extern int ps2fioWrite(int fd, void *buf, int size);
extern int ps2fioClose(int fd);

int ps2fioWriteFileFromBuffer(const char *path, void *buf, int size)
{
    int fd;
    int n;

    fd = ps2fioOpen(path, 0x202, 0x1B6);
    if (fd < 0)
        return fd;
    n = ps2fioWrite(fd, buf, size);
    if (n >= 0) {
        fd = ps2fioClose(fd);
        return fd < 0 ? fd : n;
    }
    ps2fioClose(fd);
    return n;
}
