/* LEVEL_01:0x15A560 -- per-frame state step: reacts to a trigger, otherwise counts down and restarts an action. */
typedef struct {
    char pad0[0x30];
    void *target;
    char pad34[0x18];
    unsigned char flag4C;
} Aux15A560;

typedef struct {
    char pad0[0x60];
    int timer;
} State15A560;

typedef struct {
    char pad0[0x45];
    unsigned char kind;
    char pad46[0xE];
    Aux15A560 *aux;
    State15A560 *state;
} Obj15A560;

extern void func_01A2A0(int *buf);
extern int func_084708(void *t, int *buf);
extern int func_15D2C0(Obj15A560 *o);
extern void func_15C260(Obj15A560 *o, int a, int b);
extern int func_07CE40(Obj15A560 *o);
extern int func_07CAB8(Obj15A560 *o, int a);
extern void func_07CD28(Obj15A560 *o, int a, int b, int c, float x, float y);
extern int func_15D3A0(void);

void func_15A560(Obj15A560 *o)
{
    int buf[4];
    Aux15A560 *a = o->aux;
    State15A560 *s = o->state;

    func_01A2A0(buf);
    if ((a->target != 0 && func_084708(a->target, buf) != 0) || func_15D2C0(o) != 0) {
        if (a->flag4C)
            func_15C260(o, o->kind, 7);
        else
            func_15C260(o, o->kind, 8);
        return;
    }
    if (func_07CE40(o) != 7) {
        s->timer = s->timer - 1;
    } else if (func_07CAB8(o, 0) != 0) {
        func_07CD28(o, 6, 0, 1, 0.0f, 0.0f);
    }
    if (s->timer <= 0) {
        s->timer = func_15D3A0();
        func_07CD28(o, 7, 0, 1, 0.15f, 0.0f);
    }
}
