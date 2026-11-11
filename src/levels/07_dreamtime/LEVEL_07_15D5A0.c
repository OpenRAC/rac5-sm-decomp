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

extern void *D_0021B7C4;

Data *func_1E9C98(void *x, int flag, Obj *o);
void func_1AEC40(Data *d, Obj *o);
void func_15D678(Obj *o);

void func_15D5A0(Obj *o)
{
    Node *n = o->node;

    if (n->data == 0) {
        n->data = func_1E9C98(D_0021B7C4, 0, o);
        func_1AEC40(n->data, o);
    }
    if (n->data != 0) {
        Data *d = n->data;

        d->p = o->p;
    }
    func_15D678(o);
}
