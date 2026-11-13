/*
 * Symbol:  MBOX_Receive__FiPP12HigMsgPacketPUi
 * Address: 0x01E8F0F0
 * Body:    192 bytes
 *
 * Blocking receive on a message box: returns 0x80000001 if the box id is
 * invalid or unallocated, otherwise polls the box every 1000 microseconds
 * until a packet arrives (returns 0), or returns 0x80000003 once the optional
 * timeout (in microseconds) has been exceeded.
 *
 * Profile: pinned chain (cpp, cc1 -quiet -O2 -G0, as) built by
 * tools/compiler/build_gnu_ee.sh.
 * Rebuilt binaries are not hash-identical to the pins.
 * Measured: 192/192 matched bytes (full body, relocations resolved at the
 * retail addresses), 3 compiles; pre-screen only, not run through the official gate.
 * Exact but unaccepted witness (USA boot, SCUS_976.15). Missing: the campaign
 * integration and the qualifying gate with pinned tools, and the layout of
 * the message-box table `boxes` confirmed against its other users.
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

extern void DelayThread(unsigned int micros);
extern int MBOX_Poll__FiPP12HigMsgPacket(int id, tHigMsgPacket **packet);

int MBOX_Receive__FiPP12HigMsgPacketPUi(int id, tHigMsgPacket **packet, unsigned int *timeout) {
    unsigned int waited;

    if ((unsigned int)id >= 16 || !boxes[id].allocated) {
        return (int)0x80000001U;
    }
    waited = 0;
    for (;;) {
        if (MBOX_Poll__FiPP12HigMsgPacket(id, packet) == 0) {
            return 0;
        }
        DelayThread(1000);
        waited += 1000;
        if (timeout != 0 && *timeout < waited) {
            return (int)0x80000003U;
        }
    }
}
