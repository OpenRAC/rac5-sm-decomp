/* LEVEL_08:0x1E7EF8 -- placement copy of LEVEL_02_1D2090.c: returns the global object pointer unless it is null or of kind 0xC. */
extern unsigned char *D_00252534;

void *func_1E7EF8(void)
{
    unsigned char *p = D_00252534;
    if (p != 0) {
        if ((p[0x45] ^ 12) != 0) return p;
    }
    return 0;
}
