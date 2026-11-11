/* LEVEL_10:0x090280 -- placement copy of LEVEL_01_08FF10.c: bump-allocates a 4-byte-granular block and returns its packed address. */
extern unsigned int D_001FF378;
extern int D_001FF37C;
extern char D_00273580[];

int func_090280(int amount)
{
    unsigned int old = D_001FF378;
    unsigned int next = old + ((amount + 3U) >> 2);
    unsigned int addr;

    if (next >= 0x4001U)
        return 0;
    D_001FF378 = next;
    addr = (old << 2) + (unsigned int)D_00273580;
    return (D_001FF37C << 16) + (int)addr;
}
