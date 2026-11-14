/* boot:0x01EBC120 -- run the device's mkdir entry point. */
typedef struct fio_dev_s fio_dev_t;
struct fio_dev_s {
    unsigned int pad00[12];
    int (*mkdir)(int, int);   /* +0x30 */
};

extern fio_dev_t *func_1EBB8C0(int);

int ps2fioMkdir(int dev, int arg)
{
    fio_dev_t *d = func_1EBB8C0(dev);

    if (d == 0)
        return -0x13;
    if (d->mkdir == 0)
        return -0x30;
    return d->mkdir(dev, arg);
}
