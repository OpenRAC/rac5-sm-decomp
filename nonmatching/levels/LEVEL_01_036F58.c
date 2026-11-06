/* LEVEL_01.REL:0x036F58, bounded 160-byte candidate.
 * Isolated pinned C object: 148 bytes; first linked difference
 * at body byte +8. Not linked into the accepted gate or counted.
 * Reopen: The loop body is identical instruction by instruction. Three instructions are missing from the prologue: GCC keeps one register for `heap` where the retail keeps two, and it merges the guard's `end - heap` with the count's. All six qualified cc1 profiles were measured and none is exact. Reopen with a form that prevents that CSE and materialises a second heap register.
 */
extern void func_00036E20(unsigned short *heap, int start, int count, unsigned short value);

void func_00036F58(unsigned short *heap, unsigned short *end)
{
    unsigned short *p = end;
    int n;

    if (p - heap < 2)
        return;
    n = (int)end - (int)heap;
    for (;;) {
        unsigned short top = heap[0];
        unsigned short last;

        p--;
        last = *p;
        n -= 2;
        *p = top;
        func_00036E20(heap, 0, n >> 1, last);
        end--;
        if (end - heap < 2)
            break;
    }
}
