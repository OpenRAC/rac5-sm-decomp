/* LEVEL_20:0x000A08 -- placement copy of LEVEL_16_000A20.c: per-frame update of every player block: runs the two slot handlers of each block, then copies the selected slot's 64-byte result into the block head, raises the two ready flags and hands the slot's pair of floats to the next stage. */

typedef struct {
    char b[0x40];
} Blk;

typedef struct {
    Blk *(*fn)(float *a, float *b, int idx, int arg);
    int arg;
} Handler;

extern char *D_000FD3B4;
extern unsigned int D_000FD3B8;

extern void func_000BD8(int index);
extern void func_022FA8(void *idx);
extern void func_001010(float value);
extern void func_000FF8(void);

#define G(T, o) (*(T *)(D_000FD3B4 + (o)))
#define S(T, o) (*(T *)(s + (o)))

void func_000A08(void)
{
    unsigned int n;
    int i;
    int p;
    char *q;
    char *s;
    char *g;
    Handler *hp;

    for (n = 0; n < D_000FD3B8; n++) {
        func_000BD8(n);
        for (i = 0; i < 2; i++) {
            s = D_000FD3B4 + 0x90 + i * 0x30;
            S(float, 0x28) = G(float, 0xF4);
            hp = (Handler *)(s + S(int, 0x20) * 8);
            S(float, 0x2C) = G(float, 0xF8);
            if (hp->fn != 0) {
                func_022FA8((void *)n);
                S(Blk *, 0x24) = hp->fn((float *)(s + 0x28), (float *)(s + 0x2C), i, hp->arg);
            } else {
                S(int, 0x24) = 0;
            }
        }
        p = G(int, 0xF0);
        p = p * 0x30;
        p = p + 0x90;
        q = D_000FD3B4 + p;
        *(Blk *)D_000FD3B4 = **(Blk **)(q + 0x24);
        g = D_000FD3B4;
        g[0x115] = 1;
        g[0x114] = 1;
        func_001010(*(float *)(q + 0x28));
        G(float, 0xF8) = *(float *)(q + 0x2C);
        func_000FF8();
    }
}
