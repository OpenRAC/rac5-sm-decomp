/* LEVEL_04:0x093008 -- placement copy of LEVEL_01_08FF10.c: bump-allocates a 4-byte-granular block and returns its packed address. */
extern unsigned int D_0020F838;
extern int D_0020F83C;
extern char D_00284980[];

int func_093008(int amount)
{
    unsigned int old = D_0020F838;
    unsigned int next = old + ((amount + 3U) >> 2);
    unsigned int addr;

    if (next >= 0x4001U)
        return 0;
    D_0020F838 = next;
    addr = (old << 2) + (unsigned int)D_00284980;
    return (D_0020F83C << 16) + (int)addr;
}
