/* boot:0x01EBC2D8 -- run the device's createpartition entry point. */
typedef struct fio_dev_s fio_dev_t;
struct fio_dev_s {
    unsigned int pad00[23];
    int (*op)(int, int, int, int, int);   /* +0x5C */
};

extern fio_dev_t *func_1EBB8C0(int);

int ps2fioCreatePartition(int dev, int a1, int a2, int a3, int a4)
{
    fio_dev_t *d = func_1EBB8C0(dev);

    if (d == 0)
        return -0x13;
    if (d->op == 0)
        return -0x30;
    return d->op(dev, a1, a2, a3, a4);
}
