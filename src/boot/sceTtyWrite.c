/* boot:0x01ED1F18 -- copies a string into the TTY packet (adding a CR before each LF) and sends it through DECI2, waiting for completion. Ported from OpenRAC/rac3-decomp src/boot_elf/core/1200E0.c (func_00120278). */
typedef struct {
    int sock;
    volatile int len;
    int pad8;
    volatile int busy;
    signed char *pkt;
} St_TTY;

extern volatile St_TTY D_01FE3A90;
extern unsigned char D_01FE3AC0[];
extern int DIntr(void);
extern int EIntr(void);
extern int sceDeci2ReqSend(int, signed char);
extern int sceDeci2Poll(int);

int sceTtyWrite(signed char *buf, int len)
{
    int count = 0;
    int i = 0;
    int r;
    signed char *pkt;
    signed char *dst;

    if (D_01FE3A90.busy != 0) {
        return -1;
    }
    r = DIntr();
    pkt = (signed char *)((unsigned int)D_01FE3AC0 | 0x20000000);
    D_01FE3A90.busy = 1;
    D_01FE3A90.pkt = pkt;
    dst = pkt + 0xC;
    while (--len != -1) {
        if (*buf == '\n') {
            *dst++ = '\r';
            if (++i >= 0x100) {
                break;
            }
        }
        *dst++ = *buf++;
        count++;
        if (++i >= 0x100) {
            break;
        }
    }
    D_01FE3A90.len = i + 0xC;
    *(unsigned short *)pkt = D_01FE3A90.len;
    if (sceDeci2ReqSend(D_01FE3A90.sock, pkt[7]) < 0) {
        D_01FE3A90.busy = 0;
        if (r != 0) {
            EIntr();
        }
        return -1;
    }
    while (D_01FE3A90.busy != 0) {
        ((void (*)(int))sceDeci2Poll)(D_01FE3A90.sock);
    }
    if (r != 0) {
        EIntr();
    }
    return count;
}
