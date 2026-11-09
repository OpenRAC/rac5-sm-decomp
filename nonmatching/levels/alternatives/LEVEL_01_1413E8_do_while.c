/* LEVEL_01.REL:0x1413E8: clears a five-slot pointer list, releasing each non-null entry.
 * Pinned C links 164/164 bytes here, but only because the release step of an inline helper
 * is wrapped in `do { ... } while (0)`: its loop note makes the compiler align the else
 * label and emit the retail nop before each call, and the wrapper has no other purpose in
 * a function. The same helper without the wrapper links 152 bytes (31 differing words,
 * first at +0x18). Not accepted.
 * Retry: recover a natural form, for example evidence of a statement macro in the original,
 * that keeps the retail alignment. No matching credit.
 */
extern int D_001F6398;

void func_097840(void *a);

static inline void Release(int *slot)
{
    int p;

    do {
        p = slot[0];
        if (p != 0) {
            if (p == D_001F6398) {
                D_001F6398 = 0;
            } else {
                func_097840((void *)p);
            }
            slot[0] = 0;
        }
    } while (0);
}

void func_1413E8(char *a0)
{
    int *s0;
    unsigned int i;

    s0 = *(int **)(a0 + 0x58);
    Release(s0);
    s0 += 4;
    for (i = 0; i < 5; i++) {
        Release(s0);
        s0++;
    }
}
