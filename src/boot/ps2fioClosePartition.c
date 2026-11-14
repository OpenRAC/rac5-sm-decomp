/* boot:0x01EBC6E8 -- close a partition handle through the device, then release the slot. */
typedef struct fio_dev_s fio_dev_t;
struct fio_dev_s {
    unsigned int pad00[33];
    int (*closepart)(int);   /* +0x84 */
};

typedef struct {
    fio_dev_t *dev;
    short fd;
    short used;
} fio_handle_t;

extern fio_handle_t ps2fio_dev_table[16];
extern void ps2fioFreeHandle(int);

int ps2fioClosePartition(unsigned int idx)
{
    fio_dev_t *d;
    int r;

    if (idx >= 16)
        return -0x9;
    if (ps2fio_dev_table[idx].used == 0)
        return -0x9;
    d = ps2fio_dev_table[idx].dev;
    if (d->closepart == 0)
        return -0x30;
    r = d->closepart(ps2fio_dev_table[idx].fd);
    if (r < 0)
        return r;
    ps2fioFreeHandle(idx);
    return 0;
}
