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

extern void *D_001BE8C4;

Data *func_18CD30(void *x, int flag, Obj *o);
void func_16CE60(Data *d, Obj *o);
void func_1390C8(Obj *o);

void func_138FF0(Obj *o)
{
    Node *n = o->node;

    if (n->data == 0) {
        n->data = func_18CD30(D_001BE8C4, 0, o);
        func_16CE60(n->data, o);
    }
    if (n->data != 0) {
        Data *d = n->data;

        d->p = o->p;
    }
    func_1390C8(o);
}
