/* LEVEL_24:0x088D10 -- placement copy of LEVEL_01_08FF10.c: bump-allocates a 4-byte-granular block and returns its packed address. */
extern unsigned int D_001C6FF8;
extern int D_001C6FFC;
extern char D_00236040[];

int func_088D10(int amount)
{
    unsigned int old = D_001C6FF8;
    unsigned int next = old + ((amount + 3U) >> 2);
    unsigned int addr;

    if (next >= 0x4001U)
        return 0;
    D_001C6FF8 = next;
    addr = (old << 2) + (unsigned int)D_00236040;
    return (D_001C6FFC << 16) + (int)addr;
}
