/* RAD_IOPQueueAsyncReadAtTop 0x01EAF658 (14 November 2026).
 * Measured pinned: 19 differing words; first difference at 0x1C.
 * Recover the observed types, statement order and lifetimes before retrying.
 * No matching credit.
 */
struct iop_req {
    int state;                    /* 0x00 */
    int result;                   /* 0x04 */
    int pad_8[6];
    struct iop_req *prev;         /* 0x20 */
    struct iop_req *next;         /* 0x24 */
};

extern int D_01EFC160;
extern int D_01EFC1C8;
extern struct iop_req D_01FD3D78;
extern int DIntr(void);
extern int EIntr(void);
extern void iop_wake_01EAE198(void);

int RAD_IOPQueueAsyncReadAtTop(struct iop_req *req)
{
    int old;

    if (D_01EFC160 == 0)
        return 0;
    old = DIntr();
    req->state = 1;
    req->result = 0;
    req->next = D_01FD3D78.next;
    D_01FD3D78.next = req;
    req->next->prev = req;
    req->prev = &D_01FD3D78;
    if (old)
        EIntr();
    if (D_01EFC1C8 == 0)
        iop_wake_01EAE198();
    return 1;
}
