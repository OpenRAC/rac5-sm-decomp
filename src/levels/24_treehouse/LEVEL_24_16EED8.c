/* LEVEL_24:0x16EED8 -- placement copy of LEVEL_01_1917D0.c: forwards a record's vector and flags to a helper when two links exist. */
typedef struct {
    char pad_00[0x14];
    float f_14;
    float f_18;
    float f_1C;
    float f_20;
} Q;

typedef struct {
    char pad_00[0x04];
    Q *f_04;
} P;

typedef struct {
    char pad_00[0x1C];
    P *f_1C;
} M;

typedef struct {
    char pad_00[0x54];
    char *f_54;
    M *f_58;
} S;

extern void func_07B0B0(S *a0, Q *a1, char *a2, int a3, int t0, int t1, int t2, int t3,
                        float f0, float f1, float f2, float f3);

void func_16EED8(S *a0)
{
    P *p;
    Q *q;
    char *base;

    base = a0->f_54;
    p = a0->f_58->f_1C;
    if (p == 0) {
        return;
    }
    q = p->f_04;
    if (q == 0) {
        return;
    }
    func_07B0B0(a0, q, base + 0x18, 0, 0, 0, 0, 1, q->f_14, q->f_18, q->f_1C, q->f_20);
}
