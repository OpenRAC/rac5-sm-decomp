/* boot:0x01EBD108 -- run the device's loadmodule entry point. */
typedef struct fio_dev_s fio_dev_t;
struct fio_dev_s {
    unsigned int pad00[37];
    int (*op)(int, int, int);   /* +0x94 */
};

extern fio_dev_t *func_1EBB8C0(int);

int ps2fioLoadModule(int dev, int a1, int a2)
{
    fio_dev_t *d = func_1EBB8C0(dev);

    if (d == 0)
        return -0x13;
    if (d->op == 0)
        return -0x30;
    return d->op(dev, a1, a2);
}
