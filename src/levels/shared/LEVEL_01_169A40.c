/* LEVEL_01:0x169A40 -- sets two child parameters and one object float, then reports success. */
typedef struct {
    char pad0[0x138];
    float f138;
    int w13C;
} Child;

typedef struct {
    char pad0[0x58];
    Child *child;
    char pad5C[0x70 - 0x5C];
    float f70;
} Obj;

int func_169A40(Obj *o)
{
    Child *c = o->child;

    c->w13C = 0x800;
    c->f138 = 12.500248908996582f;
    o->f70 = 5.0000996589660645f;
    return 1;
}
