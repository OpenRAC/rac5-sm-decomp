/* LEVEL_16:0x081168 -- placement copy of LEVEL_01_08FF10.c: bump-allocates a 4-byte-granular block and returns its packed address. */
extern unsigned int D_001A43A8;
extern int D_001A43AC;
extern char D_00220600[];

int func_081168(int amount)
{
    unsigned int old = D_001A43A8;
    unsigned int next = old + ((amount + 3U) >> 2);
    unsigned int addr;

    if (next >= 0x4001U)
        return 0;
    D_001A43A8 = next;
    addr = (old << 2) + (unsigned int)D_00220600;
    return (D_001A43AC << 16) + (int)addr;
}
