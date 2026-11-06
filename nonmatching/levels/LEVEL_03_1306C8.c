/* LEVEL_03.REL:0x1306C8, bounded 184-byte candidate.
 * Isolated pinned C object: 172 bytes; first linked
 * difference at body byte +4. Not linked into the accepted
 * gate or counted.
 * Reopen: Recheck the measured register or order difference.
 */
void func_1306C8(unsigned char *p, unsigned len)
{
    int prev = 1;
    unsigned i = 0;

    while (i < len) {
        unsigned c = *p;
        if (c == 0x20) { prev = 1; }
        else if (c == 0x2d) { prev = 1; }
        else if (c == 0x2f) { prev = 1; }
        else if ((c - 0x61 < 0x1a) || (c > 0xdf)) {
            if (c == 0)
                return;
            if (prev) {
                prev = 0;
                *p = *p & 0xFFFFFFDFu;
            }
        }
        else if (c - 0x41 < 0x1a) { prev = 0; }
        else if (((c + 0x40) & 0xff) < 0x20) prev = 0;
        i++;
        p++;
    }
}
