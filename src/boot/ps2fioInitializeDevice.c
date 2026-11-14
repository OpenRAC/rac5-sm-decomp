/* boot:0x01EBBA30 -- run the device's initialize entry point. */
typedef struct fio_dev_s fio_dev_t;
struct fio_dev_s {
    unsigned int pad00;
    int (*init)(int, int);   /* +0x04 */
};

extern fio_dev_t *func_1EBB8C0(int);

int ps2fioInitializeDevice(int dev, int arg)
{
    fio_dev_t *d = func_1EBB8C0(dev);
    int r;

    if (d == 0)
        return -0x13;
    if (d->init == 0)
        return -0x30;
    r = d->init(dev, arg);
    if (r < 0) return r; return 0;
}
