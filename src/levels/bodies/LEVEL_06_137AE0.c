/* LEVEL_06:0x137AE0 -- placement copy of LEVEL_01_1413E8.c: clears a five-slot pointer list, releasing each non-null entry through a helper. */

extern int D_001E5298;

void func_090550(void *a);

static inline void Release(int *slot)
{
    int p;

    do {
        p = slot[0];
        if (p != 0) {
            if (p == D_001E5298) {
                D_001E5298 = 0;
            } else {
                func_090550((void *)p);
            }
            slot[0] = 0;
        }
    } while (0);
}

void func_137AE0(char *a0)
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
