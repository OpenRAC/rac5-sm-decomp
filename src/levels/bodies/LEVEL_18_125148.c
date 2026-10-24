/* LEVEL_18.REL @ 0x125148 — 100 octets, lwc1 */
typedef struct {
    char pad14[0x14];
    float f14;
    float f18;
    float f1C;
    float f20;
} Q;

typedef struct {
    char pad58[0x58];
    int f58;
} Inner;

typedef struct {
    char pad58[0x58];
    Inner *f58;
} Outer;

extern Q *D_001BE970;

void func_072BC8(int a0, Q *a1, float f12, int a2, float f13, int a3,
                 float f14, int a4, float f15, int a5, int a6, int a7);

void func_125148(Outer *a0)
{
    Q *q = D_001BE970;
    Inner *p = a0->f58;

    if (q != 0)
        func_072BC8((int)a0, q, q->f14, 0, q->f18, 0, q->f1C, 0, q->f20, 0,
                    0, 1);
    p->f58 |= 1;
}
