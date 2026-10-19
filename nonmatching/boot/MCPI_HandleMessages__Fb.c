typedef struct {
    int word0;
    unsigned char byte4;
    unsigned char byte5;
    unsigned char byte6;
    unsigned char byte7;
    int payload[3];
} tHigMsgPacket;

extern int MCPI_GetMyMsgBoxId__Fv(void);
extern void MCPI_SetTheirMsgBoxId__Fi(int);
extern int MBOX_Receive__FiPP12HigMsgPacketPUi(int, tHigMsgPacket **, unsigned int *);
extern int MBOX_Poll__FiPP12HigMsgPacket(int, tHigMsgPacket **);
extern int MCPI_GetGameId__Fv(void);
extern void MCPI_SetGameId__Fi(int);
extern void MODULE_StopModule__FiiPCvPiT2(int, int, const void *, int *, int *);
extern int MODULE_UnloadModule__Fi(int);
extern void MCP_SetState__F10mcpState_t(int);
extern int D_01EDC7DC;

void MCPI_HandleMessages__Fb(int blocking) {
    tHigMsgPacket *pkt;
    int *payload;

    if (blocking) {
        MBOX_Receive__FiPP12HigMsgPacketPUi(MCPI_GetMyMsgBoxId__Fv(), &pkt, 0);
    } else if (MBOX_Poll__FiPP12HigMsgPacket(MCPI_GetMyMsgBoxId__Fv(), &pkt)) {
        return;
    }

    payload = pkt->payload;
    switch (payload[0]) {
    case 0x40000004:
        D_01EDC7DC = payload[1];
        payload[2] = 0;
        break;
    case 0x40000001:
        MCPI_SetTheirMsgBoxId__Fi(payload[1]);
        break;
    case 0x40000003:
        break;
    case 0x40000000:
        MODULE_StopModule__FiiPCvPiT2(MCPI_GetGameId__Fv(), 0, 0, 0, 0);
        MODULE_UnloadModule__Fi(MCPI_GetGameId__Fv());
        MCPI_SetGameId__Fi(-1);
        MCP_SetState__F10mcpState_t(3);
        break;
    }
    payload[0] = 0x40000005;
}
