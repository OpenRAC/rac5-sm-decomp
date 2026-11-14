/* LEVEL_08:0x204910 -- placement copy of LEVEL_04_1DD998.c: builds a vector from the object's two scales and its model's size and hands it, with the first float of the second argument, to the shared helper. */
typedef struct {
    float x, y, z;
} V3;

typedef struct {
    char pad00[0x18];
    float f18;
    float f1C;
} Model;

typedef struct {
    Model *model;
} Inner;

typedef struct Obj Obj;

typedef struct {
    Obj *child;
} Slot;

struct Obj {
    char pad00[0x20];
    float sx;
    char pad24[4];
    float sz;
    char pad2C[0x58 - 0x2C];
    Slot *slot;
};

extern void func_0379C8(char *a0, int a1, float f);

void func_204910(Obj *o, float *p)
{
    V3 v;
    Model *m;
    float s;

    m = ((Inner *)o->slot->child->slot)->model;
    s = m->f1C;
    v.x = s * o->sx;
    v.z = s * o->sz;
    v.y = m->f18;
    func_0379C8((char *)o, (int)&v, p[0]);
}
