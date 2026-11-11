/* LEVEL_08:0x097E30 -- placement copy of LEVEL_01_08FF10.c: bump-allocates a 4-byte-granular block and returns its packed address. */
extern unsigned int D_0023F238;
extern int D_0023F23C;
extern char D_002B9400[];

int func_097E30(int amount)
{
    unsigned int old = D_0023F238;
    unsigned int next = old + ((amount + 3U) >> 2);
    unsigned int addr;

    if (next >= 0x4001U)
        return 0;
    D_0023F238 = next;
    addr = (old << 2) + (unsigned int)D_002B9400;
    return (D_0023F23C << 16) + (int)addr;
}
