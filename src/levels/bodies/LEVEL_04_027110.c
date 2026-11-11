/* LEVEL_04:0x027110 -- placement copy of LEVEL_01_027480.c: sets bits of one byte in a table at offset 0x8C0 from a global base. */
extern unsigned char *D_0020D12C;

void func_027110(int index, unsigned char set, unsigned char clear)
{
    unsigned char *base = D_0020D12C;
    unsigned char *cell;
    cell = base + 0x8c0;
    cell = cell + index;
    *cell = set | (*cell & ~clear);
}
