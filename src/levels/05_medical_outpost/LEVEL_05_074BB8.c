/* LEVEL_05:0x074BB8 -- placement copy of LEVEL_01_0785A0.c: updates a bitmask and submits one or two oriented sprites when the global flag is set. */
extern float cosf(float);
extern float sqrtf(float);

typedef struct Obj0785A0 {
    unsigned char pad00[4];
    float ang04;
    float ang08;
    unsigned char pad0C[0x10];
    unsigned int flags1C;
    unsigned int flags20;
} Obj0785A0;

extern unsigned char D_001E5464;
extern unsigned int D_001E57F4;

extern void func_0751D0(Obj0785A0 *o);
extern void func_0749A0(Obj0785A0 *o, float *w, float *h, int *b1, int *b2);
extern void func_099660(void *pos, unsigned int flags, float h, float w, int b, float c, float s, int a3);

static __inline__ void DrawOne(float ang, unsigned int flags, float h, float w, int b, void *pos, int a3)
{
    float c;
    float s;

    c = cosf(ang);
    s = sqrtf(1.0f - c * c);
    if (ang < 0.0f) {
        s = -s;
    }
    func_099660(pos, flags, h, w, b, c, s, a3);
}

void func_074BB8(Obj0785A0 *o, void *pos, int idx, int a3)
{
    float w;
    float h;
    int b1;
    int b2;

    if (D_001E5464 != 0) {
        func_0751D0(o);
        func_0749A0(o, &w, &h, &b1, &b2);
        if (idx == 2) {
            D_001E57F4 = 0xFFFFFFFFU;
        } else {
            D_001E57F4 = 1U << idx;
        }
        DrawOne(o->ang04, o->flags1C, h, w, b1, pos, a3);
        if (o->flags20 != 0) {
            DrawOne(o->ang08, o->flags20, h, w, b2, pos, a3);
        }
    }
}
