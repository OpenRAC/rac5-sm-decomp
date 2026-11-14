/* boot:0x01EBD900 -- queue an asynchronous open request for the worker thread. */
typedef struct {
    char name[0xA00];
    int arg0;
    int arg1;
    int arg2;
} ps2fio_req_t;

extern int ps2fio_sema[1];
extern ps2fio_req_t ps2fio_ctx;
extern int ps2fioBglock(int op);
extern char *strcpy(char *dst, const char *src);
extern int SignalSema(int sema);

int asyncPs2fioOpen(const char *path, int flags, unsigned short mode)
{
    if (ps2fioBglock(4) < 0)
        return -0x40E;
    strcpy(ps2fio_ctx.name, path);
    ps2fio_ctx.arg0 = flags;
    ps2fio_ctx.arg1 = mode;
    SignalSema(ps2fio_sema[0]);
    return 0;
}
