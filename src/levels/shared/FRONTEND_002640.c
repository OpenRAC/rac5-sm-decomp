/* Forward to ps2fioRead. */
extern int ps2fioRead(int fd, void *buffer, int size);

int func_002640(int fd, void *buffer, int size)
{
    return ps2fioRead(fd, buffer, size);
}
