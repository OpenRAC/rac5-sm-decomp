typedef struct {
    char  pad[0x18];
    float f18;
} Node;

typedef struct {
    char  pad[0x54];
    Node *node;
    int  *slot;
} Obj;

extern void func_1B3060(Obj *, int);

void func_1B2A90(Obj *o)
{
    Node *n = o->node;
    float f = n->f18 - 1.0f;
    int a = *o->slot;

    n->f18 = f;
    if (f <= 0.0f)
        func_1B3060(o, a);
}
