/* LEVEL_02:0x1D2090 -- returns the global object pointer unless it is null or of kind 0xC. */
extern unsigned char *D_0021DE0C;

void *func_1D2090(void)
{
    unsigned char *p = D_0021DE0C;
    if (p != 0) {
        if ((p[0x45] ^ 12) != 0) return p;
    }
    return 0;
}
