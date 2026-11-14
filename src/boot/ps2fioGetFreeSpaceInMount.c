/* boot:0x01EBC5A8 -- run the device's free-space entry point and report success. */
typedef struct fio_dev_s fio_dev_t;
struct fio_dev_s {
    unsigned int pad00[34];
    int (*freespace)(int, int, int);   /* +0x88 */
};

extern fio_dev_t *func_1EBB8C0(int);

int ps2fioGetFreeSpaceInMount(int dev, int a1, int a2)
{
    fio_dev_t *d = func_1EBB8C0(dev);

    if (d == 0)
        return -0x13;
    if (d->freespace == 0)
        return -0x30;
    d->freespace(dev, a1, a2);
    return 0;
}
