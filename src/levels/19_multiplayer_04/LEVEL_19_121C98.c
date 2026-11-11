/* LEVEL_19:0x121C98 -- placement copy of LEVEL_16_121330.c: advances two ring counters and refreshes the five entries of a slot table. */

struct Slot121330 {
    char pad0[0x8C];
    float f8C;
    char pad90[0x10];
    unsigned int iA0;
    char padA4[0x5C];
};

extern unsigned int D_001B5E04;
extern unsigned int D_001BCCF8;
extern unsigned int D_001BD178;
extern float D_001BCCF4;
extern float D_001BCCFC;
extern struct Slot121330 D_002E1A80[];
extern void func_121A50(struct Slot121330 *s, unsigned int n);

void func_121C98(void)
{
    int i;
    struct Slot121330 *cur;

    D_001BCCF8 = (D_001BCCF8 + 1) % D_001B5E04;
    cur = &D_002E1A80[D_001BD178];
    D_001BD178 = (D_001BD178 + 1) % 5;
    func_121A50(cur, (D_001BCCF8 + 2) % D_001B5E04);
    for (i = 0; i < 5; i++) {
        struct Slot121330 *p;

        p = &D_002E1A80[(i + D_001BD178) % 5];
        p->f8C = (float)(i - 2) * 0.15000000596046448f + 0.11150000244379044f;
        p->iA0 = 0x80808080;
    }
    cur = &D_002E1A80[(D_001BD178 + 2) % 5];
    D_001BCCFC = D_001BCCF4;
    cur->iA0 = 0xFFFFFFFF;
}
