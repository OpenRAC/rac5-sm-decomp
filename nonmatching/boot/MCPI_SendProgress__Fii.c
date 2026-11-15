/* USA SCUS_976.15 boot: MCPI_SendProgress__Fii, 0x01E64EB0.
 * Observed body: 84 bytes, followed by one zero alignment word.
 * Measured 14 November 2026: all 84 body bytes are exact after independent
 * SN linking at the retail address under both the rebuilt default GNU route
 * and gnu-ee-trial, with -O2 -G0 and the default GNU assembler.
 * The default tools are rebuilt, not hash-qualified. This is an unaccepted
 * witness: complete-program integration, boundaries, types and qualification
 * require separate review. No promotion or matching credit is claimed here.
 * Reconstructed from the retail boot. Packet layout and MBOX_Send prototype
 * follow the accepted MCPI_SendNewLevel__Fi source. The body writes progress
 * at +0xC, marker 0xABACAB at +0x10 and command 0x40000004 at +8, clears
 * bytes +4..+7 and sends the packet to the supplied mailbox. Both the packet
 * and payload pointers are retained; using only the payload pointer changes
 * the address materialization and prologue order.
 */
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
