/* Boot 0x01E8F0A0 -- links a packet in front of an allocated mailbox list; rejects a bad or unallocated box with 0x80000001. */
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
