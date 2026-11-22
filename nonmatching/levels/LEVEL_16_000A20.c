/* USA LEVEL_16.REL:0x000A20, 460-byte candidate (22 November 2026).
 * Measured pinned: 1 differing words; first difference at 0xDC.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    char b[0x40];
} Blk;

typedef struct {
    Blk *(*fn)(float *a, float *b, int idx, int arg);
    int arg;
} Handler;

extern char *D_0019ACCC;
extern unsigned int D_0019ACD0;

extern void func_000BF0(int index);
extern void func_0264A0(void *idx);
extern void func_001050(float value);
extern void func_001038(void);

#define G(T, o) (*(T *)(D_0019ACCC + (o)))
#define S(T, o) (*(T *)(s + (o)))

void func_000A20(void)
{
    unsigned int n;
    int i;
    int p;
    char *s;
    char *g;
    Handler *hp;

    for (n = 0; n < D_0019ACD0; n++) {
        func_000BF0(n);
        for (i = 0; i < 2; i++) {
            s = D_0019ACCC + 0x90 + i * 0x30;
            S(float, 0x28) = G(float, 0xF4);
            hp = (Handler *)(s + S(int, 0x20) * 8);
            S(float, 0x2C) = G(float, 0xF8);
            if (hp->fn != 0) {
                func_0264A0((void *)n);
                S(Blk *, 0x24) = hp->fn((float *)(s + 0x28), (float *)(s + 0x2C), i, hp->arg);
            } else {
                S(int, 0x24) = 0;
            }
        }
        p = G(int, 0xF0);
        p = p * 0x30;
        p = p + 0x90;
        p = (int)D_0019ACCC + p;
        *(Blk *)D_0019ACCC = **(Blk **)(p + 0x24);
        g = D_0019ACCC;
        g[0x115] = 1;
        g[0x114] = 1;
        func_001050(*(float *)(p + 0x28));
        G(float, 0xF8) = *(float *)(p + 0x2C);
        func_001038();
    }
}
