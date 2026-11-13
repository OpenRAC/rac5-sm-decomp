/* USA LEVEL_03.REL:0x1791D8, 100-byte candidate.
 * Measured pinned/gnu-ee-trial: 100 linked bytes; first differing word +0x4.
 * Recover the observed types and lifetimes before retrying the same mismatch class.
 */
extern char D_0024A578[];
extern void func_095488(void *, unsigned int);
void func_1791D8(char *owner)
{
    void *record;
    unsigned short handle;
    unsigned short *child = *(unsigned short **)(owner + 88);
    *(unsigned int *)(owner + 100) |= 48;
    record = D_0024A578 + ((unsigned char *)child)[3] * 104;
    handle = *child;
    if (handle != 65535) {
        func_095488(record, handle);
    }
    *child = 65535;
}
