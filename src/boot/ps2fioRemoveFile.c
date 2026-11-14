/* boot:0x01EBC0D0 -- run the device's remove entry point. */
typedef struct fio_dev_s fio_dev_t;
struct fio_dev_s {
    unsigned int pad00[9];
    int (*remove)(int);   /* +0x24 */
};

extern fio_dev_t *func_1EBB8C0(int);

int ps2fioRemoveFile(int dev)
{
    fio_dev_t *d = func_1EBB8C0(dev);
    int r;

    if (d == 0)
        return -0x13;
    if (d->remove == 0)
        return -0x30;
    r = d->remove(dev);
    if (r < 0)
        return r;
    return 0;
}
