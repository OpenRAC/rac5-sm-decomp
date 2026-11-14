/* LEVEL_06:0x1B0CE8 -- sets the state record's word at +0x10 when it is still empty. */
typedef struct {
    char pad0[0x10];
    int slot;
} State;

typedef struct {
    char pad0[0x58];
    State *state;
} Obj;

void func_1B0CE8(Obj *o, int value)
{
    State *s = o->state;

    if (s->slot == 0)
        s->slot = value;
}
