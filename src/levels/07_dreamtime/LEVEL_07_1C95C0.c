/* LEVEL_07:0x1C95C0 -- placement copy of LEVEL_02_1D2090.c: returns the global object pointer unless it is null or of kind 0xC. */
extern unsigned char *D_0021DA5C;

void *func_1C95C0(void)
{
    unsigned char *p = D_0021DA5C;
    if (p != 0) {
        if ((p[0x45] ^ 12) != 0) return p;
    }
    return 0;
}
