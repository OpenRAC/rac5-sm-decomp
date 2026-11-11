/* LEVEL_17:0x15E2D8 -- two-state toggle driven by the linked object's state: starts or stops the effect (flag 0x20, mode byte, sound) and runs the per-frame update unless it just started. */
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

extern void func_076A90(int a0);
extern void func_076AF8(int a0);
extern void func_15B958(char *object, int *out);
extern void func_15E3C8(char *record);
extern void func_15E408(Obj *o, float dt);
extern void func_15EEF0(char *o, float dt);

void func_15E2D8(Obj *o, float dt)
{
    Holder *h = o->holder;
    Aux *a = o->aux;
    unsigned char st = h->other->state;

    if (o->state == 0) {
        if (st == 2) {
            a->f00 = 0;
            o->state = 1;
            o->flags = o->flags | 0x20;
            func_076A90(h->f04);
            return;
        }
        if ((st ^ 1) == 0) {
            func_15B958((char *)h->other, (int *)a);
            func_15E3C8((char *)o);
            func_15E408(o, dt);
            a->f30 = a->f30 | 2;
        }
    } else if (st != 2) {
        o->state = 0;
        o->flags = o->flags & ~0x20;
        func_076AF8(h->f04);
        a->f28 = 0x28;
    }
    func_15EEF0((char *)o, dt);
}
