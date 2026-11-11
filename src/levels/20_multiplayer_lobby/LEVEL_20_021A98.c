/* LEVEL_20:0x021A98 -- placement copy of LEVEL_01_027480.c: sets bits of one byte in a table at offset 0x8C0 from a global base. */
extern unsigned char *D_00104194;

void func_021A98(int index, unsigned char set, unsigned char clear)
{
    unsigned char *base = D_00104194;
    unsigned char *cell;
    cell = base + 0x8c0;
    cell = cell + index;
    *cell = set | (*cell & ~clear);
}
