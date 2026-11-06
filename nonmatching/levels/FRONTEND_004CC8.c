/* FRONTEND.REL:0x004CC8: Ghidra body 200 bytes.
 * Pure C with `pinned` links 200 bytes and first differs at +80.
 * Recheck sentinel signedness and the order of field stores. No matching credit.
 */
extern unsigned char D_0010C080[];
extern void *memset(void *, int, unsigned int);

void func_004CC8(int index, int preserve)
{
    unsigned char *record = D_0010C080 + index * 0x240;
    int saved_first = *(int *)(record + 0x100);
    unsigned int saved_second = *(unsigned int *)(record + 0x1f8);
    memset(record, 0, 0x240);
    record[0x153] = 0x80;
    *(unsigned int *)(record + 0x1f8) = 0xffffffffu;
    *(int *)(record + 0x230) = 0x80;
    record[0x234] = 1;
    record[0x10c] = 0x80;
    record[0x10d] = 0x80;
    record[0x10e] = 0x80;
    record[0x10f] = 0x80;
    record[0x150] = 0x80;
    record[0x151] = 0x80;
    record[0x152] = 0x80;
    *(unsigned int *)(record + 0x1ec) = 0xffffffffu;
    *(int *)(record + 0x224) = 0x80;
    *(int *)(record + 0x228) = 0x80;
    *(int *)(record + 0x22c) = 0x80;
    record[0x235] = 0;
    record[0x236] = 0;
    if (preserve != 0) {
        *(unsigned int *)(record + 0x1f8) = saved_second;
        *(int *)(record + 0x100) = saved_first;
    }
}
