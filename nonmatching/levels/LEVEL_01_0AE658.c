/* LEVEL_01.REL:0x0AE658, bounded 176-byte candidate.
 * Isolated pinned C object: 172 bytes; first linked
 * difference at body byte +92. Not linked into the accepted
 * gate or counted.
 * Reopen: The +4 of table[index+1] is folded into `lw 4(v0)` instead of `addiu a0,a0,4` in the bnez delay slot. Reopen with an address expression the compiler cannot fold.
 */
extern unsigned int D_001FBE0C;
extern unsigned char D_001FBDF6;

int func_000AE658(unsigned int index, int enable)
{
    unsigned int *p;
    unsigned int flag;
    unsigned int *table;
    unsigned int *entry;
    unsigned int n;

    p = (unsigned int *)D_001FBE0C;
    if (p == 0) {
        return 0;
    }
    flag = p[1] & 1;
    D_001FBDF6 = (unsigned char)flag;
    if ((p[1] & 2) == 0) {
        return 0;
    }
    table = (unsigned int *)((char *)p + (flag ? 0x14 : 0x10));
    n = table[0];
    table = table + 1;
    table = table + n;
    if (flag) {
        table = table + 1;
    }
    if (index >= table[0]) {
        return 0;
    }
    entry = (unsigned int *)table[index + 1];
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
