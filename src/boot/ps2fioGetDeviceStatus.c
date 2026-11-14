/* boot:0x01EBD000 -- run the device's status entry point. */
typedef struct fio_dev_s fio_dev_t;
struct fio_dev_s {
    unsigned int pad00[3];
    int (*op)(int, int);   /* +0xC */
};

extern fio_dev_t *func_1EBB8C0(int);

int ps2fioGetDeviceStatus(int dev, int a1)
{
    fio_dev_t *d = func_1EBB8C0(dev);

    if (d == 0)
        return -0x13;
    if (d->op == 0)
        return -0x30;
    return d->op(dev, a1);
}
