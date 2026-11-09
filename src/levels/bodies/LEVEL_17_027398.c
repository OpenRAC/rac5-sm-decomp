/* LEVEL_17:0x027398 -- placement copy of FRONTEND_002DD8.c: receives or polls one mailbox message and dispatches on its type. */
typedef struct {
    int word0;
    unsigned char byte4;
    unsigned char byte5;
    unsigned char byte6;
    unsigned char byte7;
    int payload[3];
} tHigMsgPacket;

extern int func_027378(void);
extern void func_0272F0(int a);
extern void func_027300(int a);
extern int MBOX_Receive__FiPP12HigMsgPacketPUi(int, tHigMsgPacket **, unsigned int *);
extern int MBOX_Poll__FiPP12HigMsgPacket(int, tHigMsgPacket **);
extern int D_0019548C;

void func_027398(int blocking)
{
    tHigMsgPacket *pkt;
    int *payload;

    if (blocking) {
        MBOX_Receive__FiPP12HigMsgPacketPUi(func_027378(), &pkt, 0);
    } else if (MBOX_Poll__FiPP12HigMsgPacket(func_027378(), &pkt)) {
        return;
    }

    payload = pkt->payload;
    switch (payload[0]) {
    case 0x40000004:
        D_0019548C = payload[1];
        payload[2] = 0;
        break;
    case 0x40000001:
        func_0272F0(payload[1]);
        break;
    case 0x40000003:
        break;
    case 0x40000002:
        func_027300(payload[1]);
        break;
    }
    payload[0] = 0x40000005;
}
