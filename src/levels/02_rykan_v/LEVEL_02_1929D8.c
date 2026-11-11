/* LEVEL_02:0x1929D8 -- sets up the object and its nested record (flags, state bytes, links), starts the helper at time zero and returns 1. */
typedef struct Nested Nested;
typedef struct Obj Obj;

struct Nested {
    int f00;
    char pad04[0xA];
    unsigned char b0E;
    char pad0F;
    Obj *f10;
    int f14;
    int f18;
};

struct Obj {
    char pad00[0x58];
    Nested *nested;
    char pad5C[8];
    unsigned int flags;
    char pad68[8];
    float f70;
    char pad74[3];
    unsigned char b77;
};

extern float D_0023FB48;
extern void func_083428(Obj *o, float t, unsigned idx);

int func_1929D8(Obj *o)
{
    Nested *n = o->nested;
    float t;

    o->b77 = 0x28;
    o->flags |= 0x4400;
    func_083428(o, 0.0f, 0);
    t = D_0023FB48;
    n->f10 = o;
    n->b0E = 2;
    n->f14 = 0;
    n->f00 = 0;
    o->f70 = t;
    n->f18 = 0;
    return 1;
}
