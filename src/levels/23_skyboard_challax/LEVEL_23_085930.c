/* LEVEL_23:0x085930 -- placement copy of LEVEL_01_08FF10.c: bump-allocates a 4-byte-granular block and returns its packed address. */
extern unsigned int D_001C9778;
extern int D_001C977C;
extern char D_0023B5C0[];

int func_085930(int amount)
{
    unsigned int old = D_001C9778;
    unsigned int next = old + ((amount + 3U) >> 2);
    unsigned int addr;

    if (next >= 0x4001U)
        return 0;
    D_001C9778 = next;
    addr = (old << 2) + (unsigned int)D_0023B5C0;
    return (D_001C977C << 16) + (int)addr;
}
