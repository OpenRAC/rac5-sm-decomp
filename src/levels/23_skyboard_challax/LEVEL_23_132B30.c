/* LEVEL_23:0x132B30 -- placement copy of LEVEL_01_1413E8.c: clears a five-slot pointer list, releasing each non-null entry through a helper. */

extern int D_001C9798;

void func_08D1C8(void *a);

static inline void Release(int *slot)
{
    int p;

    do {
        p = slot[0];
        if (p != 0) {
            if (p == D_001C9798) {
                D_001C9798 = 0;
            } else {
                func_08D1C8((void *)p);
            }
            slot[0] = 0;
        }
    } while (0);
}

void func_132B30(char *a0)
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
