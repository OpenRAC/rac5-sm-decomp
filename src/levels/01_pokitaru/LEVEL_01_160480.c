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

extern void *D_002074EC;

Data *func_1DB4E0(void *x, int flag, Obj *o);
void func_19CA98(Data *d, Obj *o);
void func_160558(Obj *o);

void func_160480(Obj *o)
{
    Node *n = o->node;

    if (n->data == 0) {
        n->data = func_1DB4E0(D_002074EC, 0, o);
        func_19CA98(n->data, o);
    }
    if (n->data != 0) {
        Data *d = n->data;

        d->p = o->p;
    }
    func_160558(o);
}
