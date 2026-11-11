/* LEVEL_05:0x02E7D8 -- placement copy of LEVEL_01_031C90.c: rebases three stored offsets on a global base pointer; the third is kept only when a word in the target is set. */

struct Obj {
    unsigned char pad0[0x18];
    unsigned int f18;
    unsigned int f1C;
    unsigned char pad1[0x10];
    unsigned int f30;
};

extern unsigned char *D_001F5E14;

void func_02E7D8(struct Obj *o)
{
    unsigned char *p;

    if (o->f18 != 0) {
        o->f18 = (unsigned int)D_001F5E14 + o->f18;
    }
    if (o->f1C != 0) {
        o->f1C = (unsigned int)D_001F5E14 + o->f1C;
    }
    if (o->f30 != 0) {
        p = D_001F5E14 + o->f30;
        if (*(unsigned int *)(p + 0x40) == 0) {
            o->f30 = 0;
        } else {
            o->f30 = (unsigned int)p;
        }
    }
}
