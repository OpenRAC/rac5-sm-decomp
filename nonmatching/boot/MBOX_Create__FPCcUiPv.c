/* USA SCUS_976.15 boot: MBOX_Create__FPCcUiPv, 0x01E8F018.
 * Observed body: 124 bytes in a 136-byte named interval; the last 12 bytes
 * are an unreachable zero word, a stray store and a zero word after both
 * returns and are not part of this source.
 * Measured 16 November 2026: all 124 body bytes are exact after independent
 * SN linking at the retail address under the rebuilt default GNU route and
 * gnu-ee-trial, with -O2 -G0 and the default GNU assembler.
 * The default tools are rebuilt, not hash-qualified. This is an unaccepted
 * witness: complete-program integration, boundaries, types and qualification
 * require separate review. No promotion or matching credit is claimed here.
 * Reconstructed from the retail boot. Scans boxes 1 to 15 for the first
 * unallocated one, clears its list, marks it allocated and returns its index;
 * returns 0x80000000 when all fifteen are taken. The three parameters are not
 * read.
 * The index is signed and the scan ends on a comparison with 16 after the
 * loop; an unsigned index with the claim inside the loop gives 80 bytes.
 * The result is a signed int, like the box index that MBOX_Send and MBOX_Poll
 * take: with a pointer or unsigned result the failure constant is loaded
 * before its return instead of in the return's delay slot (116 of 124 bytes).
 * The accepted caller MCPI_CreateMsgBoxes__Fv declares a `void *` result; its
 * assembler output is the same with either declaration, so the two
 * prototypes still have to be reconciled in review.
 */
typedef struct tHigMsgPacket tHigMsgPacket;

typedef struct {
    tHigMsgPacket *head;
    signed int allocated : 1;
    unsigned int reserved : 31;
} MsgBox;

extern MsgBox boxes[16];

int MBOX_Create__FPCcUiPv(const char *name, unsigned int size, void *context)
{
    int id;

    for (id = 1; id < 16 && boxes[id].allocated != 0; id++)
        ;
    if (id == 16)
        return (int)0x80000000U;
    boxes[id].head = 0;
    boxes[id].allocated = 1;
    return id;
}
