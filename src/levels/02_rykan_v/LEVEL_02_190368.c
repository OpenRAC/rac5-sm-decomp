/* LEVEL_02:0x190368 -- placement copy of LEVEL_01_179CC0.c: adds a global offset to a nonzero field of the object's child record. */
typedef struct {
    char pad00[0xC];
    int f0C;
} Child;

typedef struct {
    char pad00[0x54];
    Child *child;
} Obj;

extern int D_0021BD54;

void func_190368(Obj *o)
{
    Child *c = o->child;

    if (c->f0C != 0) {
        c->f0C = D_0021BD54 + c->f0C;
    }
}
