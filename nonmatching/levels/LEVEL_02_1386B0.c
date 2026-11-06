/* LEVEL_02.REL:0x1386B0, bounded 184-byte candidate.
 * Isolated pinned C object: 176 bytes; first linked
 * difference at body byte +0. Not linked into the accepted
 * gate or counted.
 * Reopen: The retail keeps the c==0 return block out of line and uses `and -0x21` in a register; GCC inlines it and uses andi. Reopen with a bit-test temporary and an out-of-line early return.
 */
void func_1386B0(unsigned char *p, unsigned len)
{
    int prev = 1;
    unsigned i;

    if (len == 0)
        return;
    for (i = 0; i < len; i++) {
        unsigned c = *p;
        if (c == 0x20) { prev = 1; continue; }
        if (c == 0x2d) { prev = 1; continue; }
        if (c == 0x2f) { prev = 1; continue; }
        if ((c - 0x61 < 0x1a) || (c > 0xdf)) {
            if (c == 0)
                return;
            if (prev) {
                prev = 0;
                *p = *p & 0xFFFFFFDFu;
            }
            continue;
        }
        if (c - 0x41 < 0x1a) { prev = 0; continue; }
        if (((c + 0x40) & 0xff) < 0x20) prev = 0;
    }
}
