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

extern void *D_001BEBDC;

Data *func_18F168(void *x, int flag, Obj *o);
void func_170CA0(Data *d, Obj *o);
void func_1383D8(Obj *o);

void func_138300(Obj *o)
{
    Node *n = o->node;

    if (n->data == 0) {
        n->data = func_18F168(D_001BEBDC, 0, o);
        func_170CA0(n->data, o);
    }
    if (n->data != 0) {
        Data *d = n->data;

        d->p = o->p;
    }
    func_1383D8(o);
}
