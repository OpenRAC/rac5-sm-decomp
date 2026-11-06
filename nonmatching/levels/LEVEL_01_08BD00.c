/* LEVEL_01.REL:0x08BD00: Ghidra body 100 bytes.
 * Pinned pure C links 88 bytes and first differs at +0.
 * Recheck byte remapping and fallback pointer roles. No matching credit.
 */
extern char *D_0023F034;
extern char D_00217DC0[];
extern char *D_001F6274;

void *func_08BD00(unsigned int index, int adjust)
{
    char *record = D_0023F034;
    unsigned int value;
    if (adjust != 0 && *(int *)(record + 0x14) != 0) {
        index = *(unsigned char *)(*(char **)(record + 0x14) + index);
    }
    value = *(unsigned char *)(*(char **)(record + 8) + index * 0x50 + 0x44);
    if (value == 0xff) {
        return D_00217DC0;
    }
    return D_001F6274 + value * 0x40;
}
