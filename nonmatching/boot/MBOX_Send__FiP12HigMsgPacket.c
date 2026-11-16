/* USA SCUS_976.15 boot: MBOX_Send__FiP12HigMsgPacket, 0x01E8F0A0.
 * Observed body: 80 bytes; it fills its interval.
 * Measured 15 November 2026 with the rebuilt default GNU route, gnu-ee-trial
 * and gnu-ee-trial-divpad-blockmove, -O2 -G0, default GNU assembler and
 * independent SN link at the retail address: 80 compiled bytes, 35 equal
 * positions, first differing byte +0x04. The three routes agree.
 * Not exact; no complete-program gate, promotion or C matching credit.
 * Rejects a box index of 16 or more or an unallocated box with 0x80000001;
 * otherwise links the packet in front of the box's list and returns 0.
 * The allocation flag is a signed one-bit field: retail masks it and negates
 * it before testing. The compiler drops that negation here and lays the two
 * failure paths out differently. MBOX_Poll__FiPP12HigMsgPacket has the same
 * prefix. Reopen with a form in which the negated flag has a second use, or
 * with the original validity helper.
 */
typedef struct {
    int word0;
    unsigned char byte4, byte5, byte6, byte7;
    int payload[3];
} tHigMsgPacket;

typedef struct {
    tHigMsgPacket *head;
    signed int allocated : 1;
    unsigned int reserved : 31;
} MsgBox;
extern MsgBox boxes[16];

int MBOX_Send__FiP12HigMsgPacket(int id, tHigMsgPacket *packet)
{
    MsgBox *box;
    if ((unsigned int)id >= 16)
        return (int)0x80000001U;
    box = &boxes[id];
    if (!box->allocated)
        return (int)0x80000001U;
    if (box->head == 0)
        packet->word0 = 0;
    else
        packet->word0 = (int)box->head;
    box->head = packet;
    return 0;
}
