/* LEVEL_03:0x08FB40 -- placement copy of LEVEL_01_08FF10.c: bump-allocates a 4-byte-granular block and returns its packed address. */
extern unsigned int D_0020E9F8;
extern int D_0020E9FC;
extern char D_00285000[];

int func_08FB40(int amount)
{
    unsigned int old = D_0020E9F8;
    unsigned int next = old + ((amount + 3U) >> 2);
    unsigned int addr;

    if (next >= 0x4001U)
        return 0;
    D_0020E9F8 = next;
    addr = (old << 2) + (unsigned int)D_00285000;
    return (D_0020E9FC << 16) + (int)addr;
}
