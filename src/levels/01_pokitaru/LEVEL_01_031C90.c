/* LEVEL_01:0x031C90 -- rebases three stored offsets on a global base pointer; the third is kept only when a word in the target is set. */

struct Obj {
    unsigned char pad0[0x18];
    unsigned int f18;
    unsigned int f1C;
    unsigned char pad1[0x10];
    unsigned int f30;
};

extern unsigned char *D_00206D94;

void func_031C90(struct Obj *o)
{
    unsigned char *p;

    if (o->f18 != 0) {
        o->f18 = (unsigned int)D_00206D94 + o->f18;
    }
    if (o->f1C != 0) {
        o->f1C = (unsigned int)D_00206D94 + o->f1C;
    }
    if (o->f30 != 0) {
        p = D_00206D94 + o->f30;
        if (*(unsigned int *)(p + 0x40) == 0) {
            o->f30 = 0;
        } else {
            o->f30 = (unsigned int)p;
        }
    }
}
