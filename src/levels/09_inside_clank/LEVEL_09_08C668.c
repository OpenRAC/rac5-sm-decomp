/* LEVEL_09:0x08C668 -- placement copy of LEVEL_01_08FF10.c: bump-allocates a 4-byte-granular block and returns its packed address. */
extern unsigned int D_001E0178;
extern int D_001E017C;
extern char D_00251900[];

int func_08C668(int amount)
{
    unsigned int old = D_001E0178;
    unsigned int next = old + ((amount + 3U) >> 2);
    unsigned int addr;

    if (next >= 0x4001U)
        return 0;
    D_001E0178 = next;
    addr = (old << 2) + (unsigned int)D_00251900;
    return (D_001E017C << 16) + (int)addr;
}
