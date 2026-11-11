/* LEVEL_17:0x15E408 -- counts down a cooldown and fires the queued action once it has elapsed. */
typedef struct {
    char pad0[0xC0];
    char padC0[0x14];
    unsigned int flags;
    char pad_d8[0x14];
    int kind;
} Inner;

typedef struct {
    char pad0[0xF4];
    int hook;
} Owner;

typedef struct {
    Owner *owner;
    char pad4[0xC];
    char data10[0x0C];
    unsigned char hasData;
    char pad1D[3];
    float timer;
    unsigned char arg;
    char pad25[3];
    int pending;
} Aux;

typedef struct {
    char pad0[0x58];
    Aux *aux;
} Obj;

extern int func_018558(int n);
extern void func_15E868(Obj *o);
extern void func_15E9C0(Obj *o, void *data, void *owner, int arg);

void func_15E408(Obj *o, float dt)
{
    Aux *a;
    Owner *ow;
    char *in;
    float t;

    a = o->aux;
    ow = a->owner;
    t = 0.0f;
    in = (char *)ow + 0xC0;
    a->timer = a->timer - dt;
    if (a->timer < t)
        a->timer = t;
    if (func_018558(6) == 0 && *(int *)(in + 0x2C) == 0x10 && (*(unsigned int *)(in + 0x14) & 0x6000)
        && a->timer == t && a->pending) {
        if (ow->hook)
            func_15E868(o);
        func_15E9C0(o, a->hasData ? a->data10 : 0, ow, a->arg);
    }
}
