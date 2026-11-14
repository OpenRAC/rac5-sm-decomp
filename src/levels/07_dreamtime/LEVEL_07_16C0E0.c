/* LEVEL_07:0x16C0E0 -- clears a state byte, a counter and the child's field, then reports success. */
typedef struct {
    char pad[0xE8];
    int wE8;
} Child;

typedef struct {
    char pad0[0x46];
    char b46;
    char pad47[0x58 - 0x47];
    Child *child;
    char pad5C[0x70 - 0x5C];
    int w70;
} Obj;

int func_16C0E0(Obj *o)
{
    Child *c = o->child;

    o->w70 = 0;
    o->b46 = 0;
    c->wE8 = 0;
    return 1;
}
