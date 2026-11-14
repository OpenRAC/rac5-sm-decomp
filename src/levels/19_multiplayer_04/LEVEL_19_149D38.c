/* LEVEL_19:0x149D38 -- two-state toggle driven by the linked object's state: starts the effect (flag 0x20, state byte) or, while running, updates it with the frame time, and stops it again when the link leaves state 2. */
typedef struct {
    char pad00[0x45];
    unsigned char state;
} Other;

typedef struct {
    Other *other;
    int f04;
    int f08;
} Holder;

typedef struct {
    int f00;
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

extern void func_076500(int a0);
extern void func_076568(int a0);
extern void func_1481D8(char *object, int *out);
extern void func_149E00(char *record);
extern void func_149E40(unsigned char *a0, float dt);

void func_149D38(Obj *o, float dt)
{
    Holder *h = o->holder;
    Aux *a = o->aux;
    unsigned char st = h->other->state;

    if (o->state == 0) {
        if (st == 2) {
            a->f00 = 0;
            o->state = 1;
            o->flags = o->flags | 0x20;
            func_076500(h->f08);
            return;
        }
        if ((st ^ 1) == 0) {
            func_1481D8((char *)h->other, (int *)a);
            func_149E00((char *)o);
            func_149E40((unsigned char *)o, dt);
        }
    } else if (st != 2) {
        o->state = 0;
        o->flags = o->flags & ~0x20;
        func_076568(h->f08);
    }
}
