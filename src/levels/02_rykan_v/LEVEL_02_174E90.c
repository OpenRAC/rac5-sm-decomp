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

extern void *D_0021C634;

Data *func_1F0178(void *x, int flag, Obj *o);
void func_1B2788(Data *d, Obj *o);
void func_174F68(Obj *o);

void func_174E90(Obj *o)
{
    Node *n = o->node;

    if (n->data == 0) {
        n->data = func_1F0178(D_0021C634, 0, o);
        func_1B2788(n->data, o);
    }
    if (n->data != 0) {
        Data *d = n->data;

        d->p = o->p;
    }
    func_174F68(o);
}
