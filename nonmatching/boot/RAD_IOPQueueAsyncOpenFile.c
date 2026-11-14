/* RAD_IOPQueueAsyncOpenFile 0x01EAF5C8 (14 November 2026).
 * Measured pinned: 18 differing words; first difference at 0x1C.
 * Recover the observed types, statement order and lifetimes before retrying.
 * No matching credit.
 */
struct iop_req {
    int state;                    /* 0x00 */
    int result;                   /* 0x04 */
    int arg;                      /* 0x08 */
    int pad_c[3];
    struct iop_req *next;         /* 0x18 */
    struct iop_req *prev;         /* 0x1C */
};

extern int D_01EFC160;
extern struct iop_req D_01FD3D58;
extern int DIntr(void);
extern int EIntr(void);
extern void iop_wake_01EAE198(void);

int RAD_IOPQueueAsyncOpenFile(struct iop_req *req)
{
    int old;

    if (D_01EFC160 == 0)
        return 0;
    old = DIntr();
    req->state = 1;
    req->arg = 0;
    req->result = -1;
    req->next = D_01FD3D58.next;
    D_01FD3D58.next = req;
    req->next->prev = req;
    req->prev = &D_01FD3D58;
    if (old)
        EIntr();
    iop_wake_01EAE198();
    return 1;
}
