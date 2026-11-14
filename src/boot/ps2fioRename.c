/* boot:0x01EBBF80 -- run the device's rename entry point. */
typedef struct fio_dev_s fio_dev_t;
struct fio_dev_s {
    unsigned int pad00[11];
    int (*rename)(int, int);   /* +0x2C */
};

extern fio_dev_t *func_1EBB8C0(int);

int ps2fioRename(int dev, int arg)
{
    fio_dev_t *d = func_1EBB8C0(dev);

    if (d == 0)
        return -0x13;
    if (d->rename == 0)
        return -0x30;
    return d->rename(dev, arg);
}
