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

extern void *D_00210124;

Data *func_1E1348(void *x, int flag, Obj *o);
void func_1A4748(Data *d, Obj *o);
void func_1590D8(Obj *o);

void func_159000(Obj *o)
{
    Node *n = o->node;

    if (n->data == 0) {
        n->data = func_1E1348(D_00210124, 0, o);
        func_1A4748(n->data, o);
    }
    if (n->data != 0) {
        Data *d = n->data;

        d->p = o->p;
    }
    func_1590D8(o);
}
