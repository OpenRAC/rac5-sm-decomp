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

extern void *D_002506FC;

Data *func_21D240(void *x, int flag, Obj *o);
void func_1CF150(Data *d, Obj *o);
void func_171A00(Obj *o);

void func_171928(Obj *o)
{
    Node *n = o->node;

    if (n->data == 0) {
        n->data = func_21D240(D_002506FC, 0, o);
        func_1CF150(n->data, o);
    }
    if (n->data != 0) {
        Data *d = n->data;

        d->p = o->p;
    }
    func_171A00(o);
}
