/* LEVEL_01.REL:0x0276A8: Ghidra body 68 bytes.
 * Pinned pure C links 76 bytes and first differs at +10.
 * Recheck index width, byte signedness and conditional bit store. No matching credit.
 */
extern char *D_001F3FAC;

int func_0276A8(unsigned long long index, long long enabled)
{
    unsigned char *flag;
    if (index > 99) {
        return 0;
    }
    flag = (unsigned char *)(D_001F3FAC + 0x1b60 + (int)index);
    if (enabled == 0) {
        *flag &= (unsigned char)~2;
    } else {
        *flag |= 2;
    }
    return 1;
}
