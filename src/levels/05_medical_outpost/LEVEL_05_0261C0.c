/* LEVEL_05:0x0261C0 -- placement copy of LEVEL_01_027480.c: sets bits of one byte in a table at offset 0x8C0 from a global base. */
extern unsigned char *D_001E332C;

void func_0261C0(int index, unsigned char set, unsigned char clear)
{
    unsigned char *base = D_001E332C;
    unsigned char *cell;
    cell = base + 0x8c0;
    cell = cell + index;
    *cell = set | (*cell & ~clear);
}
