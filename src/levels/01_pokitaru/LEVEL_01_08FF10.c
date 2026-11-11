/* LEVEL_01:0x08FF10 -- bump-allocates a 4-byte-granular block and returns its packed address. */
extern unsigned int D_001F6378;
extern int D_001F637C;
extern char D_0026A180[];

int func_08FF10(int amount)
{
    unsigned int old = D_001F6378;
    unsigned int next = old + ((amount + 3U) >> 2);
    unsigned int addr;

    if (next >= 0x4001U)
        return 0;
    D_001F6378 = next;
    addr = (old << 2) + (unsigned int)D_0026A180;
    return (D_001F637C << 16) + (int)addr;
}
