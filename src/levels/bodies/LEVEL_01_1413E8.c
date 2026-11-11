/* LEVEL_01:0x1413E8 -- clears a five-slot pointer list, releasing each non-null entry through a helper. */

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
