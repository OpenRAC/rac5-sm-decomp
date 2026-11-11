/* LEVEL_17:0x120D58 -- placement copy of LEVEL_16_121330.c: advances two ring counters and refreshes the five entries of a slot table. */

struct Slot121330 {
    char pad0[0x8C];
    float f8C;
    char pad90[0x10];
    unsigned int iA0;
    char padA4[0x5C];
};

extern unsigned int D_001A8284;
extern unsigned int D_001AF178;
extern unsigned int D_001AF5F8;
extern float D_001AF174;
extern float D_001AF17C;
extern struct Slot121330 D_002D2C00[];
extern void func_120B10(struct Slot121330 *s, unsigned int n);

void func_120D58(void)
{
    int i;
    struct Slot121330 *cur;

    D_001AF178 = (D_001AF178 + 1) % D_001A8284;
    cur = &D_002D2C00[D_001AF5F8];
    D_001AF5F8 = (D_001AF5F8 + 1) % 5;
    func_120B10(cur, (D_001AF178 + 2) % D_001A8284);
    for (i = 0; i < 5; i++) {
        struct Slot121330 *p;

        p = &D_002D2C00[(i + D_001AF5F8) % 5];
        p->f8C = (float)(i - 2) * 0.15000000596046448f + 0.11150000244379044f;
        p->iA0 = 0x80808080;
    }
    cur = &D_002D2C00[(D_001AF5F8 + 2) % 5];
    D_001AF17C = D_001AF174;
    cur->iA0 = 0xFFFFFFFF;
}
