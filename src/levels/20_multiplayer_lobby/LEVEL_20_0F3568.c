/* LEVEL_20:0x0F3568 -- placement copy of LEVEL_16_121468.c: steps two ring counters backwards and refreshes the five entries of a slot table. */

struct Slot121468 {
    char pad0[0x8C];
    float f8C;
    char pad90[0x10];
    unsigned int iA0;
    char padA4[0x5C];
};

extern unsigned int D_00117344;
extern unsigned int D_0011E220;
extern unsigned int D_0011E6A0;
extern float D_0011E21C;
extern float D_0011E224;
extern struct Slot121468 D_00204E40[];
extern void func_0F31E8(struct Slot121468 *s, unsigned int n);

void func_0F3568(void)
{
    int i;
    struct Slot121468 *cur;

    D_0011E220 = (D_0011E220 + D_00117344 - 1) % D_00117344;
    D_0011E6A0 = (D_0011E6A0 + 4) % 5;
    cur = &D_00204E40[D_0011E6A0];
    func_0F31E8(cur, (D_0011E220 + D_00117344 - 2) % D_00117344);
    for (i = 0; i < 5; i++) {
        struct Slot121468 *p;

        p = &D_00204E40[(i + D_0011E6A0) % 5];
        p->f8C = (float)(i - 2) * 0.15000000596046448f + 0.11150000244379044f;
        p->iA0 = 0x80808080;
    }
    cur = &D_00204E40[(D_0011E6A0 + 2) % 5];
    D_0011E224 = -D_0011E21C;
    cur->iA0 = 0xFFFFFFFF;
}
