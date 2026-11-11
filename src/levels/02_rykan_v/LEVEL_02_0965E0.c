/* LEVEL_02:0x0965E0 -- placement copy of LEVEL_01_08FF10.c: bump-allocates a 4-byte-granular block and returns its packed address. */
extern unsigned int D_0020B338;
extern int D_0020B33C;
extern char D_00281680[];

int func_0965E0(int amount)
{
    unsigned int old = D_0020B338;
    unsigned int next = old + ((amount + 3U) >> 2);
    unsigned int addr;

    if (next >= 0x4001U)
        return 0;
    D_0020B338 = next;
    addr = (old << 2) + (unsigned int)D_00281680;
    return (D_0020B33C << 16) + (int)addr;
}
