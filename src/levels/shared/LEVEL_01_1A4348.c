/* LEVEL_01:0x1A4348 -- clears a state byte, a counter and the child's first field, then reports success. */
typedef struct {
    char pad[0x1C];
    int w1C;
} Child;

typedef struct {
    char pad0[0x45];
    char b45;
    char pad46[0x58 - 0x46];
    Child *child;
    char pad5C[0x70 - 0x5C];
    int w70;
} Obj;

int func_1A4348(Obj *o)
{
    Child *c = o->child;

    o->w70 = 0;
    o->b45 = 0;
    c->w1C = 0;
    return 1;
}
