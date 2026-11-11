/* LEVEL_23:0x082350 -- scales the three floats of one table row by
   f12 * 1.2 + 1.0, when the global object says which row. */
typedef struct {
    char pad[0x10];
    float f0;
    float f1;
    float f2;
    char pad2[0x30 - 0x1C];
} Elem;

typedef struct {
    char pad[0x18];
    unsigned char idx;
} Obj;

extern Elem D_0020ECB0[64];
extern Obj *D_002104B4;

void func_082350(float f12)
{
    Obj *o = D_002104B4;

    if (o == 0) {
        return;
    }
    if (o->idx == 0xFF) {
        return;
    }
    if (o->idx == 0) {
        return;
    }
    {
        float k = f12 * 1.3499999f + 1.0f;
        D_0020ECB0[o->idx].f0 *= k;
        D_0020ECB0[o->idx].f1 *= k;
        D_0020ECB0[o->idx].f2 *= k;
    }
}
