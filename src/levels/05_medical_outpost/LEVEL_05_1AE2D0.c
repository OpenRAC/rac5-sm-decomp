/* LEVEL_05:0x1AE2D0 -- placement copy of LEVEL_02_1D2090.c: returns the global object pointer unless it is null or of kind 0xC. */
extern unsigned char *D_001F7E4C;

void *func_1AE2D0(void)
{
    unsigned char *p = D_001F7E4C;
    if (p != 0) {
        if ((p[0x45] ^ 12) != 0) return p;
    }
    return 0;
}
