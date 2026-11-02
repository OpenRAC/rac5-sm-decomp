extern int ps2fioRead(int fd, void *buffer, unsigned int count);

int higIoRead__FiPvUi(int fd, void *buffer, unsigned int count) {
    return ps2fioRead(fd, buffer, count);
}
