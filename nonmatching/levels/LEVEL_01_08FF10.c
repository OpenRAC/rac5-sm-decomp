/* LEVEL_01.REL:0x08FF10: Ghidra body 76 bytes.
 * Pinned pure C links 76 bytes and first differs at +24.
 * Recheck global bump arithmetic and returned address construction. No matching credit.
 */
extern unsigned int D_001F6378;
extern int D_001F637C;

int func_08FF10(int amount)
{
    unsigned int next = D_001F6378 + ((amount + 3U) >> 2);
    if (next < 0x4001U) {
        int offset = D_001F6378 * 4;
        D_001F6378 = next;
        return D_001F637C * 0x10000 + offset + 0x26a180;
    }
    return 0;
}
