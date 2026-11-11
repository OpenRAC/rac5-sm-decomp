/* LEVEL_19:0x081618 -- placement copy of LEVEL_01_08FF10.c: bump-allocates a 4-byte-granular block and returns its packed address. */
extern unsigned int D_001A5528;
extern int D_001A552C;
extern char D_00220780[];

int func_081618(int amount)
{
    unsigned int old = D_001A5528;
    unsigned int next = old + ((amount + 3U) >> 2);
    unsigned int addr;

    if (next >= 0x4001U)
        return 0;
    D_001A5528 = next;
    addr = (old << 2) + (unsigned int)D_00220780;
    return (D_001A552C << 16) + (int)addr;
}
