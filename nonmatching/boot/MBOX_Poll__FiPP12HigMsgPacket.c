/* USA SCUS_976.15 boot: MBOX_Poll__FiPP12HigMsgPacket, 0x01E8F1B0.
 * Observed body: 100 bytes, followed by one zero alignment word.
 * Measured 15 November 2026 with the rebuilt default GNU route, gnu-ee-trial
 * and gnu-ee-trial-divpad-blockmove, -O2 -G0, default GNU assembler and
 * independent SN link at the retail address: 96 compiled bytes, 43 equal
 * positions in the compared prefix, first differing byte +0x04. The three
 * routes agree.
 * Not exact; no complete-program gate, promotion or C matching credit.
 * Rejects a box index of 16 or more or an unallocated box with 0x80000001,
 * returns 0x80000002 for an empty box, and otherwise hands back the first
 * packet and unlinks it.
 * As in MBOX_Send__FiP12HigMsgPacket, retail negates the masked one-bit
 * allocation flag before testing it and the compiler drops the negation;
 * retail also reads the list head from the box again before unlinking.
 * Reopen together with MBOX_Send.
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
    tHigMsgPacket *head;

    if ((unsigned int)id < 16) {
        box = &boxes[id];
        if (box->allocated) {
            head = box->head;
            if (head != 0) {
                *packet = head;
                box->head = head->next;
                return 0;
            }
            return (int)0x80000002U;
        }
    }
    return (int)0x80000001U;
}
