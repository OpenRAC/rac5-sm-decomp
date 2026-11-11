/* LEVEL_10:0x13F270 -- placement copy of LEVEL_01_1413E8.c: clears a five-slot pointer list, releasing each non-null entry through a helper. */

extern int D_001FF398;

void func_097D08(void *a);

static inline void Release(int *slot)
{
    int p;

    do {
        p = slot[0];
        if (p != 0) {
            if (p == D_001FF398) {
                D_001FF398 = 0;
            } else {
                func_097D08((void *)p);
            }
            slot[0] = 0;
        }
    } while (0);
}

void func_13F270(char *a0)
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
