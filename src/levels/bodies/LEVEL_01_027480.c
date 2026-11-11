/* LEVEL_01:0x027480 -- sets bits of one byte in a table at offset 0x8C0 from a global base. */
extern unsigned char *D_001F3FAC;

void func_027480(int index, unsigned char set, unsigned char clear)
{
    unsigned char *base = D_001F3FAC;
    unsigned char *cell;
    cell = base + 0x8c0;
    cell = cell + index;
    *cell = set | (*cell & ~clear);
}
