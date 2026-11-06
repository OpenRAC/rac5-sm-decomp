/* LEVEL_01.REL:0x0275A0: Ghidra body 124 bytes.
 * Pinned pure C links 104 bytes and first differs at +2.
 * Recheck byte-list count and 0x1be0 data stride. No matching credit.
 */
extern char *D_001F3FAC;

int func_0275A0(unsigned int value)
{
    char *base = D_001F3FAC;
    unsigned int count = *(unsigned char *)(base + 0x1c60);
    unsigned int index = 0;
    if (count > 99) {
        return 0;
    }
    if (count != 0) {
        unsigned char *items = (unsigned char *)(base + 0x1be0);
        do {
            index++;
            if (*items == value) {
                return 0;
            }
            items = (unsigned char *)(base + 0x1be0) + index;
        } while (index < *(unsigned char *)(base + 0x1c60));
    }
    *(unsigned char *)(base + 0x1c60) = count + 1;
    *(unsigned char *)(base + 0x1be0 + count) = value;
    return 1;
}
