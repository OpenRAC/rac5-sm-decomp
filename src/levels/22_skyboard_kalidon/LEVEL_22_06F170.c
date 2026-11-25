/* LEVEL_22:0x06F170 -- placement copy of LEVEL_09_079108.c: placement copy of LEVEL_01_07C670.c: tears down an active object: releases its pending claim, clears the flag and notifies. */

struct Q07C670 {
    char pad0[0x3C];
    unsigned int flags;
};

struct P07C670 {
    char pad0[0x10];
    struct Q07C670 *q;
    char pad14[4];
    void (*release)(struct O07C670 *o);
    char pad1C[0x23];
    unsigned char kind;
    unsigned short count_a;
    unsigned short count_b;
};

struct O07C670 {
    char pad0[0x40];
    struct P07C670 *p;
    char pad44[0x20];
    int flags;
};

extern unsigned int D_001554D4;

extern void func_074558(struct O07C670 *o);
extern void func_06F2D0(struct O07C670 *o);
extern int func_06F320(struct O07C670 *o, int *code);
extern int func_06F3C0(struct O07C670 *o);
extern void func_022D88(void);
extern void func_074330(struct O07C670 *o);
extern void func_074680(int code, int result);

void func_06F170(struct O07C670 *o, int notify)
{
    int code;
    int r;

    if (o->flags & 1) {
        func_074558(o);
        o->p->release(o);
        if (o->flags & 1) {
            if (o->p != 0) {
                o->p->count_a--;
            }
        }
        o->flags &= ~1;
        if (o->p->q != 0 && (o->p->q->flags & 0x80)) {
            func_06F2D0(o);
        } else {
            if (!(o->flags & 6)) {
                if (o->p != 0) {
                    o->p->count_b++;
                }
            }
            o->flags |= 6;
        }
        code = 0x400;
        r = func_06F320(o, &code);
        if (notify) {
            if (o->p->kind == 1) {
                if (D_001554D4 != 0) {
                    ((void (*)(int))D_001554D4)(func_06F3C0(o));
                    func_022D88();
                }
            }
        }
        func_074330(o);
        func_074680(code, r);
    }
}
