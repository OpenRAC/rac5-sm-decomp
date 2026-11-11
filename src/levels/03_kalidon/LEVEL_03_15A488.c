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

extern void *D_0021FB74;

Data *func_1F02B0(void *x, int flag, Obj *o);
void func_1AFBA0(Data *d, Obj *o);
void func_15A560(Obj *o);

void func_15A488(Obj *o)
{
    Node *n = o->node;

    if (n->data == 0) {
        n->data = func_1F02B0(D_0021FB74, 0, o);
        func_1AFBA0(n->data, o);
    }
    if (n->data != 0) {
        Data *d = n->data;

        d->p = o->p;
    }
    func_15A560(o);
}
