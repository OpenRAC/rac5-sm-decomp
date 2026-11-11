/* LEVEL_16:0x13CA10 -- creates the object's data block when it is missing,
   then copies the two float blocks into it. */
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

extern void *D_001BD784;

Data *func_18DCC8(void *x, int flag, Obj *o);
void func_16BFA8(Data *d, Obj *o);
void func_13CAE8(Obj *o);

void func_13CA10(Obj *o)
{
    Node *n = o->node;

    if (n->data == 0) {
        n->data = func_18DCC8(D_001BD784, 0, o);
        func_16BFA8(n->data, o);
    }
    if (n->data != 0) {
        Data *d = n->data;

        d->p = o->p;
    }
    func_13CAE8(o);
}
