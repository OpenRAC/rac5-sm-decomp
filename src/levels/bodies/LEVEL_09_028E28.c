/* LEVEL_09:0x028E28 -- placement copy of FRONTEND_002DD8.c: receives or polls one mailbox message and dispatches on its type. */
typedef struct {
    int word0;
    unsigned char byte4;
    unsigned char byte5;
    unsigned char byte6;
    unsigned char byte7;
    int payload[3];
} tHigMsgPacket;

extern int func_028E08(void);
extern void func_028D80(int a);
extern void func_028D90(int a);
extern int MBOX_Receive__FiPP12HigMsgPacketPUi(int, tHigMsgPacket **, unsigned int *);
extern int MBOX_Poll__FiPP12HigMsgPacket(int, tHigMsgPacket **);
extern int D_001DE15C;

void func_028E28(int blocking)
{
    tHigMsgPacket *pkt;
    int *payload;

    if (blocking) {
        MBOX_Receive__FiPP12HigMsgPacketPUi(func_028E08(), &pkt, 0);
    } else if (MBOX_Poll__FiPP12HigMsgPacket(func_028E08(), &pkt)) {
        return;
    }

    payload = pkt->payload;
    switch (payload[0]) {
    case 0x40000004:
        D_001DE15C = payload[1];
        payload[2] = 0;
        break;
    case 0x40000001:
        func_028D80(payload[1]);
        break;
    case 0x40000003:
        break;
    case 0x40000002:
        func_028D90(payload[1]);
        break;
    }
    payload[0] = 0x40000005;
}
