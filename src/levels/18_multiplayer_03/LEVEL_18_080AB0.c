/* LEVEL_18:0x080AB0 -- placement copy of LEVEL_01_08FF10.c: bump-allocates a 4-byte-granular block and returns its packed address. */
extern unsigned int D_001A5828;
extern int D_001A582C;
extern char D_00220980[];

int func_080AB0(int amount)
{
    unsigned int old = D_001A5828;
    unsigned int next = old + ((amount + 3U) >> 2);
    unsigned int addr;

    if (next >= 0x4001U)
        return 0;
    D_001A5828 = next;
    addr = (old << 2) + (unsigned int)D_00220980;
    return (D_001A582C << 16) + (int)addr;
}
