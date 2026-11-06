/* LEVEL_01.REL:0x0A32A0: Ghidra body 68 bytes.
 * Pinned pure C links 64 bytes and first differs at +20.
 * Recheck the pointer-range guard and callee return width. No matching credit.
 */
extern char D_0029F008[];
extern long long func_0A07E0(void *, int, int);

long long func_0A32A0(int index)
{
    char *entry = D_0029F008 + index * 100;
    if (entry != 0) {
        return func_0A07E0(entry, 0, 0);
    }
    return 0;
}
