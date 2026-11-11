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

extern void *D_001F6524;

Data *func_1CA8D8(void *x, int flag, Obj *o);
void func_198740(Data *d, Obj *o);
void func_154D58(Obj *o);

void func_154C80(Obj *o)
{
    Node *n = o->node;

    if (n->data == 0) {
        n->data = func_1CA8D8(D_001F6524, 0, o);
        func_198740(n->data, o);
    }
    if (n->data != 0) {
        Data *d = n->data;

        d->p = o->p;
    }
    func_154D58(o);
}
