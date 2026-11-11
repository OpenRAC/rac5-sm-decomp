/* LEVEL_16:0x121330 -- advances two ring counters and refreshes the five entries of a slot table. */

struct Slot121330 {
    char pad0[0x8C];
    float f8C;
    char pad90[0x10];
    unsigned int iA0;
    char padA4[0x5C];
};

extern unsigned int D_001B4C84;
extern unsigned int D_001BBB80;
extern unsigned int D_001BC000;
extern float D_001BBB7C;
extern float D_001BBB84;
extern struct Slot121330 D_002E1900[];
extern void func_1210E8(struct Slot121330 *s, unsigned int n);

void func_121330(void)
{
    int i;
    struct Slot121330 *cur;

    D_001BBB80 = (D_001BBB80 + 1) % D_001B4C84;
    cur = &D_002E1900[D_001BC000];
    D_001BC000 = (D_001BC000 + 1) % 5;
    func_1210E8(cur, (D_001BBB80 + 2) % D_001B4C84);
    for (i = 0; i < 5; i++) {
        struct Slot121330 *p;

        p = &D_002E1900[(i + D_001BC000) % 5];
        p->f8C = (float)(i - 2) * 0.15000000596046448f + 0.11150000244379044f;
        p->iA0 = 0x80808080;
    }
    cur = &D_002E1900[(D_001BC000 + 2) % 5];
    D_001BBB84 = D_001BBB7C;
    cur->iA0 = 0xFFFFFFFF;
}
