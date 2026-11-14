/* boot:0x01EBC3E8 -- run the device's removepartition entry point. */
typedef struct fio_dev_s fio_dev_t;
struct fio_dev_s {
    unsigned int pad00[25];
    int (*op)(int, int);   /* +0x64 */
};

extern fio_dev_t *func_1EBB8C0(int);

int ps2fioRemovePartition(int dev, int a1)
{
    fio_dev_t *d = func_1EBB8C0(dev);

    if (d == 0)
        return -0x13;
    if (d->op == 0)
        return -0x30;
    return d->op(dev, a1);
}
