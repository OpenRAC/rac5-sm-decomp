/* LEVEL_01:0x029FC0 -- placement copy of FRONTEND_002DD8.c: receives or polls one mailbox message and dispatches on its type. */
typedef struct {
    int word0;
    unsigned char byte4;
    unsigned char byte5;
    unsigned char byte6;
    unsigned char byte7;
    int payload[3];
} tHigMsgPacket;

extern int func_029FA0(void);
extern void func_029F18(int a);
extern void func_029F28(int a);
extern int MBOX_Receive__FiPP12HigMsgPacketPUi(int, tHigMsgPacket **, unsigned int *);
extern int MBOX_Poll__FiPP12HigMsgPacket(int, tHigMsgPacket **);
extern int D_001F435C;

void func_029FC0(int blocking)
{
    tHigMsgPacket *pkt;
    int *payload;

    if (blocking) {
        MBOX_Receive__FiPP12HigMsgPacketPUi(func_029FA0(), &pkt, 0);
    } else if (MBOX_Poll__FiPP12HigMsgPacket(func_029FA0(), &pkt)) {
        return;
    }

    payload = pkt->payload;
    switch (payload[0]) {
    case 0x40000004:
        D_001F435C = payload[1];
        payload[2] = 0;
        break;
    case 0x40000001:
        func_029F18(payload[1]);
        break;
    case 0x40000003:
        break;
    case 0x40000002:
        func_029F28(payload[1]);
        break;
    }
    payload[0] = 0x40000005;
}
