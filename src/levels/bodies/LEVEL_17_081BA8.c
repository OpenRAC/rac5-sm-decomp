/* LEVEL_17:0x081BA8 -- placement copy of LEVEL_01_08FF10.c: bump-allocates a 4-byte-granular block and returns its packed address. */
extern unsigned int D_001979A8;
extern int D_001979AC;
extern char D_00211900[];

int func_081BA8(int amount)
{
    unsigned int old = D_001979A8;
    unsigned int next = old + ((amount + 3U) >> 2);
    unsigned int addr;

    if (next >= 0x4001U)
        return 0;
    D_001979A8 = next;
    addr = (old << 2) + (unsigned int)D_00211900;
    return (D_001979AC << 16) + (int)addr;
}
