/* LEVEL_23:0x06F878 -- placement copy of LEVEL_01_0785A0.c: updates a bitmask and submits one or two oriented sprites when the global flag is set. */
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

extern unsigned char D_001C94E4;
extern unsigned int D_001C9874;

extern void func_06FE90(Obj0785A0 *o);
extern void func_06F660(Obj0785A0 *o, float *w, float *h, int *b1, int *b2);
extern void func_091988(void *pos, unsigned int flags, float h, float w, int b, float c, float s, int a3);

static __inline__ void DrawOne(float ang, unsigned int flags, float h, float w, int b, void *pos, int a3)
{
    float c;
    float s;

    c = cosf(ang);
    s = sqrtf(1.0f - c * c);
    if (ang < 0.0f) {
        s = -s;
    }
    func_091988(pos, flags, h, w, b, c, s, a3);
}

void func_06F878(Obj0785A0 *o, void *pos, int idx, int a3)
{
    float w;
    float h;
    int b1;
    int b2;

    if (D_001C94E4 != 0) {
        func_06FE90(o);
        func_06F660(o, &w, &h, &b1, &b2);
        if (idx == 2) {
            D_001C9874 = 0xFFFFFFFFU;
        } else {
            D_001C9874 = 1U << idx;
        }
        DrawOne(o->ang04, o->flags1C, h, w, b1, pos, a3);
        if (o->flags20 != 0) {
            DrawOne(o->ang08, o->flags20, h, w, b2, pos, a3);
        }
    }
}
