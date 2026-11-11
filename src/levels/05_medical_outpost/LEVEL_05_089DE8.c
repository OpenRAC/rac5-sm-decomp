/* LEVEL_05:0x089DE8 -- same "scale one table row" shape as LEVEL_23:0x082350. */
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

extern Elem D_002296F0[64];
extern Obj *D_0022AEF4;

void func_089DE8(float f12)
{
    Obj *o = D_0022AEF4;

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
        D_002296F0[o->idx].f0 *= k;
        D_002296F0[o->idx].f1 *= k;
        D_002296F0[o->idx].f2 *= k;
    }
}
