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

extern void *D_001F0FAC;

Data *func_1C3C48(void *x, int flag, Obj *o);
void func_1922C8(Data *d, Obj *o);
void func_152B30(Obj *o);

void func_152A58(Obj *o)
{
    Node *n = o->node;

    if (n->data == 0) {
        n->data = func_1C3C48(D_001F0FAC, 0, o);
        func_1922C8(n->data, o);
    }
    if (n->data != 0) {
        Data *d = n->data;

        d->p = o->p;
    }
    func_152B30(o);
}
