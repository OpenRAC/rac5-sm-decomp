/* LEVEL_07:0x0277E0 -- placement copy of LEVEL_01_027480.c: sets bits of one byte in a table at offset 0x8C0 from a global base. */
extern unsigned char *D_002082AC;

void func_0277E0(int index, unsigned char set, unsigned char clear)
{
    unsigned char *base = D_002082AC;
    unsigned char *cell;
    cell = base + 0x8c0;
    cell = cell + index;
    *cell = set | (*cell & ~clear);
}
