/* MCPI_SendProgress__Fii 0x01E64EB0 (14 November 2026).
 * Measured pinned: 14 differing words; first difference at 0x0.
 * Recover the observed types, statement order and lifetimes before retrying.
 * No matching credit.
 */
typedef struct {
    unsigned char type[4];
    unsigned int command;
    int progress;
    unsigned int magic;
} HigMsgPacket;

extern unsigned char D_01EDC7DC[];
extern void MBOX_Send__FiP12HigMsgPacket(int box, HigMsgPacket *packet);

void MCPI_SendProgress__Fii(int box, int progress) {
    HigMsgPacket *p = (HigMsgPacket *)(D_01EDC7DC + 4);
    unsigned int *w = &p->command;

    w[1] = progress;
    w[2] = 0xABACAB;
    p->command = 0x40000004;
    p->type[0] = 0;
    p->type[1] = 0;
    p->type[2] = 0;
    p->type[3] = 0;
    MBOX_Send__FiP12HigMsgPacket(box, p);
}
