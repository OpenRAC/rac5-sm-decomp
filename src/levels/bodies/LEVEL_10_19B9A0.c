/* LEVEL_10:0x19B9A0 -- per-state update: state 2 resets, state 3 counts down and releases its parts, then a state dispatch. */
typedef struct Own { char pad0[0xC0]; void *fC0; void *fC4; char padC8[4]; void *fCC; char padD0[4]; char fD4[0xC]; char fE0[1]; } Own;
typedef struct Obj { char pad0[0x45]; unsigned char state; char pad46[0x70 - 0x46]; float timer; } Obj;
typedef struct Obj2 { char pad0[0x58]; Own *own; } Obj2;
extern void func_19BAA8(Obj *o);
extern void func_07CCA0(void *p, int f);
extern void func_123D68(char *dst, void *a, char *b);
extern void func_0BD728(void);

void func_19B9A0(Obj *o)
{
    Own *w = ((Obj2 *)o)->own;

    switch (o->state) {
    case 2:
        func_19BAA8(o);
        break;
    case 3:
        if (o->timer > 0.0f) {
            o->timer = o->timer - 1.0f;
            if (o->timer <= 0.0f) {
                if (w->fC4)
                    func_07CCA0(w->fC4, 1);
                w->fC4 = 0;
                if (w->fCC)
                    func_07CCA0(w->fCC, 1);
                w->fCC = 0;
                w->fC0 = 0;
            }
        }
        func_19BAA8(o);
        if (w->fC0)
            func_123D68(w->fE0, w->fC0, w->fD4);
        break;
    }
    switch (o->state) {
    case 0:
    case 1:
    case 6:
        break;
    default:
        func_0BD728();
    }
}
