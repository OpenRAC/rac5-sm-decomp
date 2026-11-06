/* LEVEL_01.REL:0x0374B8: Ghidra body 132 bytes.
 * Pinned pure C links 128 bytes and first differs at +2.
 * Recheck unsigned load, signed comparisons and branch order. No matching credit.
 */
int func_0374B8(const char *record)
{
    unsigned short raw = *(const unsigned short *)(record + 0x100);
    short kind = (short)raw;
    return (unsigned)(raw - 3) < 2 || kind == 6 || kind == 7 ||
           kind == 8 || kind == 14 || kind == 16 || kind == 17 ||
           kind == 18 || kind == 15 || kind == 29 || kind == 54 ||
           kind == 64;
}
