/* LEVEL_01.REL:0x03A4E8, bounded 188-byte candidate.
 * Isolated pinned C object: 188 bytes; first linked
 * difference at body byte +38. Not linked into the accepted
 * gate or counted.
 * Reopen: The operand order and register differ (retail addu v0,s0,s2 with lw v1; chain addu v0,s2,s0 with lw a0). Reopen by forcing base+index*4.
 */
extern void func_03A370(int *, int, int, int);
extern void func_03A470(int *, int);
extern int D_0020B498[];

void func_0003A4E8(int *base, int index, int value)
{
    int obj;
    int table;
    int off;

    obj = *(int *)((char *)base + index * 4 + 0x5B8);
    if (obj == 0) {
        func_03A370(base, index, D_0020B498[index], value);
    } else {
        off = *(unsigned char *)(obj + 0x44) * 0x34;
        table = *(int *)(obj + 0x40);
        if (*(int *)(off + table + 4 + 0x20) != value) {
            func_03A470(base, index);
            func_03A370(base, index, D_0020B498[index], value);
        }
    }
}
