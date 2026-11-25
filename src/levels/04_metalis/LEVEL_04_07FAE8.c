/* LEVEL_04:0x07FAE8 -- placement copy of LEVEL_09_079108.c: placement copy of LEVEL_01_07C670.c: tears down an active object: releases its pending claim, clears the flag and notifies. */

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

extern unsigned int D_0020F614;

extern void func_085B68(struct O07C670 *o);
extern void func_07FC48(struct O07C670 *o);
extern int func_07FC98(struct O07C670 *o, int *code);
extern int func_07FD38(struct O07C670 *o);
extern void func_028208(void);
extern void func_085870(struct O07C670 *o);
extern void func_085E08(int code, int result);

void func_07FAE8(struct O07C670 *o, int notify)
{
    int code;
    int r;

    if (o->flags & 1) {
        func_085B68(o);
        o->p->release(o);
        if (o->flags & 1) {
            if (o->p != 0) {
                o->p->count_a--;
            }
        }
        o->flags &= ~1;
        if (o->p->q != 0 && (o->p->q->flags & 0x80)) {
            func_07FC48(o);
        } else {
            if (!(o->flags & 6)) {
                if (o->p != 0) {
                    o->p->count_b++;
                }
            }
            o->flags |= 6;
        }
        code = 0x400;
        r = func_07FC98(o, &code);
        if (notify) {
            if (o->p->kind == 1) {
                if (D_0020F614 != 0) {
                    ((void (*)(int))D_0020F614)(func_07FD38(o));
                    func_028208();
                }
            }
        }
        func_085870(o);
        func_085E08(code, r);
    }
}
