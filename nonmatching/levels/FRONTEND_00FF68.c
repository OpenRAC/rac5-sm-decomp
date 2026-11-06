/* FRONTEND.REL:0x00FF68: Ghidra body 176 bytes.
 * Pure C with `pinned` links 172 bytes and first differs at +46.
 * Recheck table pointer roles and register selection. No matching credit.
 */
extern int *D_0002FE1C;
extern unsigned char D_0002FE01;

int func_00FF68(unsigned int index, int enabled)
{
    int *context = D_0002FE1C;
    unsigned int flag;
    int count;
    int *entry;
    unsigned int *table;
    unsigned int *target;
    if (context == 0)
        return 0;
    flag = (unsigned int)context[1] & 1;
    D_0002FE01 = flag;
    if (((unsigned int)context[1] & 2) == 0)
        return 0;
    entry = flag != 0 ? context + 5 : context + 4;
    count = *entry;
    entry++;
    table = (unsigned int *)(entry + count);
    if (flag != 0)
        table++;
    if (index >= *table)
        return 0;
    target = (unsigned int *)(unsigned int)table[index + 1];
    if (flag != 0)
        target++;
    if (enabled == 0)
        *target &= 0xefffffffu;
    else
        *target |= 0x10000000u;
    return 1;
}
