typedef struct {
    float x;
    float y;
    float z;
} Vec;

typedef struct {
    char  pad[0x4];
    Vec  *f4;
} Ptr;

typedef struct {
    char  pad0[0x1C];
    Ptr  *f1C;
    char  pad1[0x30 - 0x20];
    Vec   v;
    char  pad2[0x4C - 0x3C];
    int   f4C;
    char  pad3[0x5D - 0x50];
    char  f5D;
} Node;

typedef struct {
    char  pad0[0x30];
    Vec   v;
    char  pad1[0x54 - 0x3C];
    Node *f54;
} Obj;

void func_1665E8(Obj *o)
{
    Node *a = (Node *)o->f54;
    Vec  *v = a->f1C->f4;

    Vec *d = &o->v;

    d->x = v->x;
    d->y = v->y;
    d->z = v->z;
    a->f5D = 1;
    a->f4C = 0;
}
