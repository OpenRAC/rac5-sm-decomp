/* USA SCUS_976.15 boot: MBOX_Poll__FiPP12HigMsgPacket, 0x01E8F1B0.
 * Observed body: 100 bytes, followed by one zero alignment word.
 * Measured 16 November 2026: all 100 body bytes are exact after independent
 * SN linking at the retail address under the rebuilt default GNU route and
 * gnu-ee-trial, with -O2 -G0 and the default GNU assembler.
 * The default tools are rebuilt, not hash-qualified. This is an unaccepted
 * witness: complete-program integration, boundaries, types and qualification
 * require separate review. No promotion or matching credit is claimed here.
 * Reconstructed from the retail boot. Rejects a box index of 16 or more or an
 * unallocated box with 0x80000001, returns 0x80000002 for an empty box, and
 * otherwise hands back the first packet and unlinks it.
 * The two rejections are one condition (see MBOX_Send__FiP12HigMsgPacket),
 * the empty box returns early, and the list head is named through the box
 * again after the store through `packet`, which retail reads back.
 */
typedef struct tHigMsgPacket {
    struct tHigMsgPacket *next;
    unsigned char byte4, byte5, byte6, byte7;
    int payload[3];
} tHigMsgPacket;

typedef struct {
    tHigMsgPacket *head;
    signed int allocated : 1;
    unsigned int reserved : 31;
} MsgBox;

extern MsgBox boxes[16];

int MBOX_Poll__FiPP12HigMsgPacket(int id, tHigMsgPacket **packet)
{
    MsgBox *box;

    if ((unsigned int)id >= 16 || boxes[id].allocated == 0)
        return (int)0x80000001U;
    box = &boxes[id];
    if (box->head == 0)
        return (int)0x80000002U;
    *packet = box->head;
    box->head = box->head->next;
    return 0;
}
