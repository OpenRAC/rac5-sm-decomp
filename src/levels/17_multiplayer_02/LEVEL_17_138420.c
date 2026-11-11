/* LEVEL_17:0x138420 -- creates the object's data block when it is missing,
   then copies the two float blocks into it. */
typedef struct {
    float f[2];
} Vec2;

typedef struct {
    Vec2 f;
    Vec2 g;
} Pair;

typedef struct {
    char pad[0x30];
    Pair p;
} Data;

typedef struct {
    char pad[0x10];
    Data *data;
} Node;

typedef struct {
    char pad[0x30];
    Pair p;
    char pad40[0x14];
    Node *node;
} Obj;

extern void *D_001B0D4C;

Data *func_181310(void *x, int flag, Obj *o);
void func_162748(Data *d, Obj *o);
void func_1384F8(Obj *o);

void func_138420(Obj *o)
{
    Node *n = o->node;

    if (n->data == 0) {
        n->data = func_181310(D_001B0D4C, 0, o);
        func_162748(n->data, o);
    }
    if (n->data != 0) {
        Data *d = n->data;

        d->p = o->p;
    }
    func_1384F8(o);
}
