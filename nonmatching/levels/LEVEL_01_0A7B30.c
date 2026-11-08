/* LEVEL_01.REL:0x0A7B30: reviewed 136-byte candidate.
 * pinned C with gnu-ee-trial links 132 bytes; first differs at +49.
 * Retry: Recover the original 16-bit row-offset and bit-grid register allocation. The
 * retained defined C links 132/136 and first differs at byte 49 after four controlled
 * source forms; no qualified cc1 route resolves it.
 * No matching credit.
 */
extern int func_0A69B8(void);
extern unsigned char D_00315560[];

int func_0A7B30(unsigned short x, unsigned short y)
{
    unsigned int col = x;
    unsigned int row = y;
    int shift;
    unsigned int index;
    unsigned short row_offset;
    int bit;
    if (func_0A69B8() == 0 || col > 0x200 || row > 0x200)
        return 0;
    row_offset = row << 6;
    index = row_offset + (col >> 3);
    shift = (~col) & 7;
    bit = D_00315560[index] & ((1 << shift) & 0xff);
    return bit >> shift;
}
