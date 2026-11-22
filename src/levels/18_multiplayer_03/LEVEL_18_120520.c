/* LEVEL_18:0x120520 -- placement copy of LEVEL_16_121468.c: steps two ring counters backwards and refreshes the five entries of a slot table. */

struct Slot121468 {
    char pad0[0x8C];
    float f8C;
    char pad90[0x10];
    unsigned int iA0;
    char padA4[0x5C];
};

extern unsigned int D_001B6104;
extern unsigned int D_001BD000;
extern unsigned int D_001BD480;
extern float D_001BCFFC;
extern float D_001BD004;
extern struct Slot121468 D_002E1C80[];
extern void func_1201A0(struct Slot121468 *s, unsigned int n);

void func_120520(void)
{
    int i;
    struct Slot121468 *cur;

    D_001BD000 = (D_001BD000 + D_001B6104 - 1) % D_001B6104;
    D_001BD480 = (D_001BD480 + 4) % 5;
    cur = &D_002E1C80[D_001BD480];
    func_1201A0(cur, (D_001BD000 + D_001B6104 - 2) % D_001B6104);
    for (i = 0; i < 5; i++) {
        struct Slot121468 *p;

        p = &D_002E1C80[(i + D_001BD480) % 5];
        p->f8C = (float)(i - 2) * 0.15000000596046448f + 0.11150000244379044f;
        p->iA0 = 0x80808080;
    }
    cur = &D_002E1C80[(D_001BD480 + 2) % 5];
    D_001BD004 = -D_001BCFFC;
    cur->iA0 = 0xFFFFFFFF;
}
