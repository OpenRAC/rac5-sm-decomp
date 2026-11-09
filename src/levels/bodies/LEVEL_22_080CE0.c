/* LEVEL_22:0x080CE0 -- placement copy of LEVEL_01_08FF10.c: bump-allocates a 4-byte-granular block and returns its packed address. */
extern unsigned int D_001556F8;
extern int D_001556FC;
extern char D_001BFD40[];

int func_080CE0(int amount)
{
    unsigned int old = D_001556F8;
    unsigned int next = old + ((amount + 3U) >> 2);
    unsigned int addr;

    if (next >= 0x4001U)
        return 0;
    D_001556F8 = next;
    addr = (old << 2) + (unsigned int)D_001BFD40;
    return (D_001556FC << 16) + (int)addr;
}
