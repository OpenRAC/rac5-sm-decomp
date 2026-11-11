typedef struct {
    char pad[0x14];
    float f14;
    float f18;
    float f1C;
    float f20;
} Inner;

typedef struct {
    char pad[0x58];
    int f58;
} Q;

typedef struct {
    char pad[0x58];
    Q *p58;
} S;

extern char *D_0021F750;

void func_0807B0(void *a0, void *a1, void *a2, void *a3, int t0, int t1,
                 int t2, int t3, float f12, float f13, float f14,
                 float f15);

void func_1349D8(S *a0)
{
    Inner *p = (Inner *)D_0021F750;
    Q *q = a0->p58;

    if (p != 0)
        func_0807B0(a0, p, 0, 0, 0, 0, 0, 1,
                    p->f14, p->f18, p->f1C, p->f20);
    q->f58 |= 1;
}
