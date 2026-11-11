/* LEVEL_06:0x088B60 -- placement copy of LEVEL_01_08FF10.c: bump-allocates a 4-byte-granular block and returns its packed address. */
extern unsigned int D_001E5278;
extern int D_001E527C;
extern char D_00256F00[];

int func_088B60(int amount)
{
    unsigned int old = D_001E5278;
    unsigned int next = old + ((amount + 3U) >> 2);
    unsigned int addr;

    if (next >= 0x4001U)
        return 0;
    D_001E5278 = next;
    addr = (old << 2) + (unsigned int)D_00256F00;
    return (D_001E527C << 16) + (int)addr;
}
