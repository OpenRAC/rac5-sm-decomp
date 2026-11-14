/* boot:0x01EBD980 -- queue an asynchronous read request for the worker thread. */
typedef struct {
    char name[0xA00];
    int arg0;
    int arg1;
    int arg2;
} ps2fio_req_t;

extern ps2fio_req_t ps2fio_ctx;
extern int ps2fio_sema;
extern int ps2fioBglock(int op);
extern int SignalSema(int sema);

int asyncPs2fioRead(int fd, void *buf, int size)
{
    if (ps2fioBglock(5) < 0)
        return -0x40E;
    ps2fio_ctx.arg0 = fd;
    ps2fio_ctx.arg1 = (int)buf;
    ps2fio_ctx.arg2 = size;
    SignalSema(ps2fio_sema);
    return 0;
}
