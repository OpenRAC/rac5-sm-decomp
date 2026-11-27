/* LEVEL_06:0x18C460 -- callback: when the object's timer is running, advances it by the global step and tests the table bit selected by the current mode. */
typedef struct State {
    int time;
} State;

typedef struct Obj {
    char pad0[0x45];
    unsigned char slot;
    char pad46[0x54 - 0x46];
    State *state;
} Obj;

extern int D_001F5994;
extern int D_00209670;
extern unsigned int func_0259D8(int index, unsigned int bit);

static __inline__ int Advance(State *s)
{
    int t = s->time;

    if (t == 0)
        return 0;
    s->time = D_001F5994 + t;
    return 1;
}

int func_18C460(Obj *o)
{
    int mode;
    unsigned int slot;

    if (!Advance(o->state))
        return 0;
    slot = o->slot;
    mode = D_00209670;
    if (mode == 0x16)
        mode = 3;
    else if (!(mode ^ 0x17))
        mode = 6;
    return func_0259D8(mode * 2 + 2, slot) == 0;
}
