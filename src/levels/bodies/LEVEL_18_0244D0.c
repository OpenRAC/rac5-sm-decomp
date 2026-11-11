/* LEVEL_18:0x0244D0 -- placement copy of LEVEL_01_027480.c: sets bits of one byte in a table at offset 0x8C0 from a global base. */
extern unsigned char *D_001A2F34;

void func_0244D0(int index, unsigned char set, unsigned char clear)
{
    unsigned char *base = D_001A2F34;
    unsigned char *cell;
    cell = base + 0x8c0;
    cell = cell + index;
    *cell = set | (*cell & ~clear);
}
