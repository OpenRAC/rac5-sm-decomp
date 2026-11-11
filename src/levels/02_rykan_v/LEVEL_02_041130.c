/* LEVEL_02:0x041130 -- placement copy of LEVEL_16_038148.c: releases the three handles of a record, clearing a flag on the first. */
struct Rec7 {
    char pad0[0x64];
    int w64;
};

struct Obj7 {
    char pad0[0x59C];
    void *p59C;
    char pad1[0x5D8 - 0x5A0];
    struct Rec7 *p5D8;
    char pad2[0xB34 - 0x5DC];
    void *pB34;
};

void func_087408(void *p);
void func_07F760(void *p);

void func_041130(struct Obj7 *a0)
{
    if (a0->p5D8 != 0) {
        a0->p5D8->w64 = a0->p5D8->w64 & -33;
        a0->p5D8 = 0;
        if (a0->pB34 != 0) {
            func_087408(a0->pB34);
            a0->pB34 = 0;
        }
    }
    if (a0->p59C != 0) {
        func_07F760(a0->p59C);
    }
}
