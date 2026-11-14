/* boot:0x01EBBAE0 -- open a file through its device and allocate a handle slot. */
typedef struct fio_dev_s fio_dev_t;
struct fio_dev_s {
    unsigned int pad00[4];
    int (*open)(const char *, int, int);   /* +0x10 */
};

typedef struct {
    fio_dev_t *dev;
    short fd;
    short used;
} fio_handle_t;

extern fio_handle_t ps2fio_dev_table[16];
extern fio_dev_t *func_1EBB8C0(const char *);
extern int ps2fioAllocHandle(void);
extern void ps2fioFreeHandle(int);

int ps2fioOpen(const char *path, int flags, unsigned short mode)
{
    fio_dev_t *d = func_1EBB8C0(path);
    fio_handle_t *h;
    int idx;
    int r;

    if (d == 0)
        return -0x13;
    if (d->open == 0)
        return -0x30;
    idx = ps2fioAllocHandle();
    h = &ps2fio_dev_table[idx];
    h->dev = d;
    r = d->open(path, flags, mode);
    if (r < 0) {
        ps2fioFreeHandle(idx);
        return r;
    }
    h->fd = r;
    return idx;
}
