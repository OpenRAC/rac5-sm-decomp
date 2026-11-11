/* FRONTEND:0x002620 -- forwards fd, offset and whence to the lseek import. */
extern int asyncPs2fioLseek(int, long long, int);

int func_002620(int fd, int offset, int whence)
{
    return asyncPs2fioLseek(fd, offset, whence);
}
