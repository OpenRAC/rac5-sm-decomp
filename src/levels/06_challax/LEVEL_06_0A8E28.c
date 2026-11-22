/* LEVEL_06:0x0A8E28 -- placement copy of LEVEL_01_0AE658.c: sets or clears the 0x10000000 bit of the entry with the given index in the current record's table; returns 1 on success. */
extern unsigned int D_001EAD0C;
extern unsigned char D_001EACF6;

int func_0A8E28(unsigned int index, int enable)
{
    unsigned int *p;
    unsigned int flag;
    unsigned int *table;
    unsigned int *entry;
    unsigned int n;
    unsigned int count;

    p = (unsigned int *)D_001EAD0C;
    if (p == 0) {
        return 0;
    }
    flag = p[1] & 1;
    D_001EACF6 = (unsigned char)flag;
    if ((p[1] & 2) == 0) {
        return 0;
    }
    table = (unsigned int *)((char *)p + (flag ? 0x14 : 0x10));
    n = *table++;
    table = table + n;
    if (flag) {
        table = table + 1;
    }
    count = *table++;
    if (index >= count) {
        return 0;
    }
    entry = (unsigned int *)table[index];
    if (flag) {
        entry = entry + 1;
    }
    if (enable != 0) {
        *entry = *entry | 0x10000000;
    } else {
        *entry = *entry & 0xEFFFFFFF;
    }
    return 1;
}
