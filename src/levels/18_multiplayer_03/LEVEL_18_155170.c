/* LEVEL_18:0x155170 -- placement copy of LEVEL_16_158CC8.c: two-pass loop over callee results, dispatches on a type-3 entry. */

struct Ctl {
    char p0[0xC];
    unsigned int f0C;
    void *f10;
};

struct Obj {
    char p0[0x58];
    struct Ctl *f58;
    char p1[0xF4 - 0x5C];
    int f0F4;
    char p2[0x100 - 0xF8];
    short f100;
    char p3[0x334 - 0x102];
    void *f334;
};

extern struct Obj *func_111AA0(int i);
extern void func_155208(struct Obj *a, struct Obj *b);

void func_155170(struct Obj *a0)
{
    struct Obj *p;
    unsigned int i = 0;

    do {
        p = func_111AA0(i);
        i++;
        if (p->f0F4 != 0) {
            if (p->f334 == a0) {
                if (p->f100 == 3) {
                    func_155208(a0, p);
                } else {
                    struct Ctl *c = a0->f58;
                    c->f10 = p;
                    c->f0C |= 1;
                }
            }
        }
    } while (i < 2);
}
