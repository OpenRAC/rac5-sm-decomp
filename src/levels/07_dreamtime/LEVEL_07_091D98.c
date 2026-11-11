/* LEVEL_07:0x091D98 -- placement copy of LEVEL_01_08FF10.c: bump-allocates a 4-byte-granular block and returns its packed address. */
extern unsigned int D_0020A678;
extern int D_0020A67C;
extern char D_0027FA80[];

int func_091D98(int amount)
{
    unsigned int old = D_0020A678;
    unsigned int next = old + ((amount + 3U) >> 2);
    unsigned int addr;

    if (next >= 0x4001U)
        return 0;
    D_0020A678 = next;
    addr = (old << 2) + (unsigned int)D_0027FA80;
    return (D_0020A67C << 16) + (int)addr;
}
