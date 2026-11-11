/* LEVEL_16:0x027A18 -- placement copy of FRONTEND_002DD8.c: receives or polls one mailbox message and dispatches on its type. */
typedef struct {
    int word0;
    unsigned char byte4;
    unsigned char byte5;
    unsigned char byte6;
    unsigned char byte7;
    int payload[3];
} tHigMsgPacket;

extern int func_0279F8(void);
extern void func_027970(int a);
extern void func_027980(int a);
extern int MBOX_Receive__FiPP12HigMsgPacketPUi(int, tHigMsgPacket **, unsigned int *);
extern int MBOX_Poll__FiPP12HigMsgPacket(int, tHigMsgPacket **);
extern int D_001A1E8C;

void func_027A18(int blocking)
{
    tHigMsgPacket *pkt;
    int *payload;

    if (blocking) {
        MBOX_Receive__FiPP12HigMsgPacketPUi(func_0279F8(), &pkt, 0);
    } else if (MBOX_Poll__FiPP12HigMsgPacket(func_0279F8(), &pkt)) {
        return;
    }

    payload = pkt->payload;
    switch (payload[0]) {
    case 0x40000004:
        D_001A1E8C = payload[1];
        payload[2] = 0;
        break;
    case 0x40000001:
        func_027970(payload[1]);
        break;
    case 0x40000003:
        break;
    case 0x40000002:
        func_027980(payload[1]);
        break;
    }
    payload[0] = 0x40000005;
}
