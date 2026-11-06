/* LEVEL_01.REL:0x0D9248, bounded 176-byte candidate.
 * Isolated pinned C object: 180 bytes; first linked
 * difference at body byte +50. Not linked into the accepted
 * gate or counted.
 * Reopen: The first 50 bytes and the constant materialisation order are right; the five constants are allocated in a rotated register order. Reopen with a different declaration/materialisation order.
 */
extern void memset(void *ptr, int value, unsigned int size);

int func_000D9248(unsigned int *p, unsigned int flags)
{
    unsigned int half;
    unsigned int other;

    if (flags & 1) {
        p[0x32] = 0xFFFFFFFF;
        return 0;
    }
    memset(p, 0, 0xE0);
    half = 0xF0 - (int)p[8] / 2;
    other = (int)p[8] / 2 + 0xF0;
    p[0x11] = 0x110;
    p[7] = 8;
    p[8] = 0x20;
    p[2] = 4;
    p[0] = flags;
    p[0x34] = half;
    p[0x36] = other;
    p[0x32] = 0;
    p[0xE] = half;
    p[0x10] = other;
    p[0xF] = 0;
    p[0x33] = 0;
    return 1;
}
