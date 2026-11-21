/* USA SCUS_976.15 boot: MBOX_Send__FiP12HigMsgPacket, 0x01E8F0A0.
 * Observed body: 80 bytes; it fills its interval.
 * Measured 16 November 2026: all 80 body bytes are exact after independent
 * SN linking at the retail address under the rebuilt default GNU route and
 * gnu-ee-trial, with -O2 -G0 and the default GNU assembler.
 * The default tools are rebuilt, not hash-qualified. This is an unaccepted
 * witness: complete-program integration, boundaries, types and qualification
 * require separate review. No promotion or matching credit is claimed here.
 * Reconstructed from the retail boot. Rejects a box index of 16 or more or an
 * unallocated box with 0x80000001; otherwise links the packet in front of the
 * box's list and returns 0.
 * The two rejections are one condition, as in the
 * MBOX_Receive__FiPP12HigMsgPacketPUi witness: written as two separate early
 * returns, the compiler drops the negation of the one-bit allocation flag and
 * moves the failure return. The list head is tested for non-zero first.
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

    if ((unsigned int)id >= 16 || boxes[id].allocated == 0)
        return (int)0x80000001U;
    box = &boxes[id];
    if (box->head != 0)
        packet->word0 = (int)box->head;
    else
        packet->word0 = 0;
    box->head = packet;
    return 0;
}
