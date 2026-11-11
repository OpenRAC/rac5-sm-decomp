/* LEVEL_01:0x179CC0 -- adds a global offset to a nonzero field of the object's child record. */
typedef struct {
    char pad00[0xC];
    int f0C;
} Child;

typedef struct {
    char pad00[0x54];
    Child *child;
} Obj;

extern int D_00206D94;

void func_179CC0(Obj *o)
{
    Child *c = o->child;

    if (c->f0C != 0) {
        c->f0C = D_00206D94 + c->f0C;
    }
}
