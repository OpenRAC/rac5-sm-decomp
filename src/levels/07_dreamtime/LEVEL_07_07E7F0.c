/* LEVEL_07:0x07E7F0 -- placement copy of LEVEL_09_079108.c: placement copy of LEVEL_01_07C670.c: tears down an active object: releases its pending claim, clears the flag and notifies. */

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

extern unsigned int D_0020A454;

extern void func_0848F0(struct O07C670 *o);
extern void func_07E950(struct O07C670 *o);
extern int func_07E9A0(struct O07C670 *o, int *code);
extern int func_07EA40(struct O07C670 *o);
extern void func_028900(void);
extern void func_0845F8(struct O07C670 *o);
extern void func_0849D0(int code, int result);

void func_07E7F0(struct O07C670 *o, int notify)
{
    int code;
    int r;

    if (o->flags & 1) {
        func_0848F0(o);
        o->p->release(o);
        if (o->flags & 1) {
            if (o->p != 0) {
                o->p->count_a--;
            }
        }
        o->flags &= ~1;
        if (o->p->q != 0 && (o->p->q->flags & 0x80)) {
            func_07E950(o);
        } else {
            if (!(o->flags & 6)) {
                if (o->p != 0) {
                    o->p->count_b++;
                }
            }
            o->flags |= 6;
        }
        code = 0x400;
        r = func_07E9A0(o, &code);
        if (notify) {
            if (o->p->kind == 1) {
                if (D_0020A454 != 0) {
                    ((void (*)(int))D_0020A454)(func_07EA40(o));
                    func_028900();
                }
            }
        }
        func_0845F8(o);
        func_0849D0(code, r);
    }
}
