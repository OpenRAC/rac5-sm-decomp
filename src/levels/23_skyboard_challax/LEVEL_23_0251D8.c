/* LEVEL_23:0x0251D8 -- placement copy of LEVEL_01_027480.c: sets bits of one byte in a table at offset 0x8C0 from a global base. */
extern unsigned char *D_001C73AC;

void func_0251D8(int index, unsigned char set, unsigned char clear)
{
    unsigned char *base = D_001C73AC;
    unsigned char *cell;
    cell = base + 0x8c0;
    cell = cell + index;
    *cell = set | (*cell & ~clear);
}
