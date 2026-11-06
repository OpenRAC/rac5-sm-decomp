/* LEVEL_01.REL:0x0A2A00, bounded 156-byte candidate.
 * Isolated pinned C object: 156 bytes; first linked
 * difference at body byte +127. Not linked into the accepted
 * gate or counted.
 * Reopen: The body and size are exact except the 32-bit mask encoding: the retail forms -1 with addiu + dsrl32, GCC with lui 0xFFFF + dsrl32. Reopen by forcing a non-folded SImode -1 into the and.
 */
extern unsigned long GetTimerSystemTime(void);
extern long func_1EA378(unsigned long a);
extern long func_1EA888(long a, long b);
extern long func_1EABF0(long a, unsigned long b);
extern long func_1EA948(long a, unsigned long b);
extern long func_1EA190(long a);

int func_0A2A00(void)
{
    unsigned long t;
    long v;

    t = GetTimerSystemTime();
    if ((long)t >= 0) {
        v = func_1EA378(t);
    } else {
        v = func_1EA378((t & 1) | (t >> 1));
        v = func_1EA888(v, v);
    }
    v = func_1EABF0(v, 0x41a1940000000000UL);
    v = func_1EA948(v, 0x412e848000000000UL);
    return func_1EA190(v) & 0xFFFFFFFF;
}
