/* USA LEVEL_01.REL:0x07C670 (21 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement disagrees with an
 * accepted prototype.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
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

extern unsigned int D_001F6154;

extern void func_082758(struct O07C670 *o);
extern void func_07C7D0(struct O07C670 *o);
extern int func_07C820(struct O07C670 *o, int *code);
extern int func_07C8C0(struct O07C670 *o);
extern void func_0285A0(void);
extern void func_082460(struct O07C670 *o);
extern void func_082880(int code, int result);

void func_07C670(struct O07C670 *o, int notify)
{
    int code;
    int r;

    if (o->flags & 1) {
        func_082758(o);
        o->p->release(o);
        if (o->flags & 1) {
            if (o->p != 0) {
                o->p->count_a--;
            }
        }
        o->flags &= ~1;
        if (o->p->q != 0 && (o->p->q->flags & 0x80)) {
            func_07C7D0(o);
        } else {
            if (!(o->flags & 6)) {
                if (o->p != 0) {
                    o->p->count_b++;
                }
            }
            o->flags |= 6;
        }
        code = 0x400;
        r = func_07C820(o, &code);
        if (notify) {
            if (o->p->kind == 1) {
                if (D_001F6154 != 0) {
                    ((void (*)(int))D_001F6154)(func_07C8C0(o));
                    func_0285A0();
                }
            }
        }
        func_082460(o);
        func_082880(code, r);
    }
}
