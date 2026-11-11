/* LEVEL_18:0x16A948 -- placement copy of LEVEL_17_15E2D8.c: two-state toggle driven by the linked object's state: starts or stops the effect (flag 0x20, mode byte, sound) and runs the per-frame update unless it just started. */
typedef struct {
    char pad00[0x45];
    unsigned char state;
} Other;

typedef struct {
    Other *other;
    int f04;
} Holder;

typedef struct {
    int f00;
    char pad04[0x24];
    int f28;
    char pad2C[4];
    unsigned int f30;
} Aux;

typedef struct {
    char pad00[0x45];
    unsigned char state;
    char pad46[0xE];
    Holder *holder;
    Aux *aux;
    char pad5C[8];
    int flags;
} Obj;

extern void func_075998(int a0);
extern void func_075A00(int a0);
extern void func_167FC8(char *object, int *out);
extern void func_16AA38(char *record);
extern void func_16AA78(Obj *o, float dt);
extern void func_16B560(char *o, float dt);

void func_16A948(Obj *o, float dt)
{
    Holder *h = o->holder;
    Aux *a = o->aux;
    unsigned char st = h->other->state;

    if (o->state == 0) {
        if (st == 2) {
            a->f00 = 0;
            o->state = 1;
            o->flags = o->flags | 0x20;
            func_075998(h->f04);
            return;
        }
        if ((st ^ 1) == 0) {
            func_167FC8((char *)h->other, (int *)a);
            func_16AA38((char *)o);
            func_16AA78(o, dt);
            a->f30 = a->f30 | 2;
        }
    } else if (st != 2) {
        o->state = 0;
        o->flags = o->flags & ~0x20;
        func_075A00(h->f04);
        a->f28 = 0x28;
    }
    func_16B560((char *)o, dt);
}
