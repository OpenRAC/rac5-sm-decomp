/* LEVEL_01.REL:0x0D8420: Ghidra body 148 bytes.
 * Pinned pure C links 152 bytes and first differs at +76.
 * Recheck the record field store order after the imported clear. No matching credit.
 */
extern void *memset(void *, int, unsigned int);

int func_0D8420(unsigned int *record, unsigned int mode)
{
    if (mode & 1) {
        record[0x13] = 0xffffffffu;
        return 0;
    }
    memset(record, 0, 100);
    record[2] = 5;
    record[0] = mode;
    record[0x15] = 0xe0;
    record[0x17] = 0x100;
    record[0xe] = 0x110;
    record[6] = 8;
    record[0x13] = 0;
    record[0xb] = 0xe0;
    record[0xd] = 0x100;
    record[0xc] = 0;
    record[0x14] = 0;
    return 1;
}
