/* boot:0x01EBBA90 -- run the device's shutdown entry point. */
typedef struct fio_dev_s fio_dev_t;
struct fio_dev_s {
    unsigned int pad00[2];
    int (*shutdown)(int);   /* +0x08 */
};

extern fio_dev_t *func_1EBB8C0(int);

int ps2fioShutdownDevice(int dev)
{
    fio_dev_t *d = func_1EBB8C0(dev);
    int r;

    if (d == 0)
        return -0x13;
    if (d->shutdown == 0)
        return -0x30;
    r = d->shutdown(dev);
    if (r < 0)
        return r;
    return 0;
}
