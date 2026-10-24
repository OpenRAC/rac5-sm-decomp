typedef struct {
    int    f0;
    char   pad[0x54];
    float  f58;
} Node;

typedef struct {
    char  pad[0x58];
    Node *node;
} Obj;

extern void func_16E170(Obj *, int);

void func_16DBC0(Obj *o)
{
    Node *t = o->node;
    float f = t->f58 - 1.0f;
    int a = t->f0;

    t->f58 = f;
    if (f <= 0.0f)
        func_16E170(o, a);
}
