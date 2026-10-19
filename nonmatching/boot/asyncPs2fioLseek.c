/* asyncPs2fioLseek - RAC5 boot body, 0x01EBD9F0..0x01EBDA60 (112 bytes).
   Reconstructed from the retail disassembly: register the async seek request
   in the ps2fio context and wake the lseek thread. */

struct ps2fio_ctx {
    unsigned char pad000[0xA00];
    int request;            /* +0xA00 */
    int offset32;           /* +0xA04 */
    unsigned char padA08[8];
    unsigned long offset64; /* +0xA10 */
};

extern struct ps2fio_ctx ps2fio_ctx;    /* 0x01FD4240 */
extern int ps2fio_sema;                 /* 0x01FD4C6C */
extern int ps2fioBglock(int);           /* 0x01EBD2C0 */
extern int SignalSema(int);

int asyncPs2fioLseek(int fd, unsigned long offset, int whence)
{
    if (ps2fioBglock(6) < 0)
        return -0x40E;

    ps2fio_ctx.request = fd;
    ps2fio_ctx.offset64 = offset;
    ps2fio_ctx.offset32 = whence;
    SignalSema(ps2fio_sema);
    return 0;
}
