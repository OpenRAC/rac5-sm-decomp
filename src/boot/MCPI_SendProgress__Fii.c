/* Boot 0x01E64EB0 -- fills the progress message packet and sends it to the given mailbox. */
typedef struct {
    int word0;
    unsigned char byte4;
    unsigned char byte5;
    unsigned char byte6;
    unsigned char byte7;
    int payload[3];
} tHigMsgPacket;
extern tHigMsgPacket D_01EDC7E0;
extern int MBOX_Send__FiP12HigMsgPacket(int, tHigMsgPacket *);

void MCPI_SendProgress__Fii(int box, int progress) {
    tHigMsgPacket *packet = &D_01EDC7E0;
    int *payload = packet->payload;
    payload[1] = progress;
    payload[2] = 0xABACAB;
    packet->payload[0] = 0x40000004;
    packet->byte4 = 0;
    packet->byte5 = 0;
    packet->byte6 = 0;
    packet->byte7 = 0;
    MBOX_Send__FiP12HigMsgPacket(box, packet);
}
