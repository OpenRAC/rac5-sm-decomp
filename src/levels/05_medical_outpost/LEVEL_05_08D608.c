/* LEVEL_05:0x08D608 -- placement copy of LEVEL_01_08FF10.c: bump-allocates a 4-byte-granular block and returns its packed address. */
extern unsigned int D_001E56F8;
extern int D_001E56FC;
extern char D_00256040[];

int func_08D608(int amount)
{
    unsigned int old = D_001E56F8;
    unsigned int next = old + ((amount + 3U) >> 2);
    unsigned int addr;

    if (next >= 0x4001U)
        return 0;
    D_001E56F8 = next;
    addr = (old << 2) + (unsigned int)D_00256040;
    return (D_001E56FC << 16) + (int)addr;
}
