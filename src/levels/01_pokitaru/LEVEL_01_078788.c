/* LEVEL_01:0x078788 -- draws up to two oriented shapes of an object at pos + dir * t when rendering is enabled. */

typedef struct Obj {
    char pad_00[4];
    float ang1;
    float ang2;
    char pad_0C[0x10];
    int shape1;
    int shape2;
} Obj;

extern unsigned char D_001F60E4;
extern unsigned int D_001F6474;

extern float cosf(float x);
extern float sqrtf(float x);
extern void func_078BB8(Obj *o);
extern void func_078388(Obj *o, float *w, float *h, int *b1, int *b2);
extern void func_09C180(float *p, float *dir, int shape, float h, float w, int b, float s, float c);

static __inline__ void DrawOne(float ang, int shape, float h, float w, int b, float *p, float *dir)
{
    float c;
    float s;

    c = cosf(ang);
    s = sqrtf(1.0f - c * c);
    if (ang < 0.0f)
        s = -s;
    func_09C180(p, dir, shape, h, w, b, s, c);
}

void func_078788(float t, Obj *o, float *pos, float *dir, int mode)
{
    float p[3];
    float w;
    float h;
    int b1;
    int b2;

    if (D_001F60E4 != 0) {
        func_078BB8(o);
        func_078388(o, &w, &h, &b1, &b2);
        p[0] = pos[0] + dir[0] * t;
        p[1] = pos[1] + dir[1] * t;
        p[2] = pos[2] + dir[2] * t;
        h = h * 0.5f;
        w = w * 0.5f;
        if (mode == 2)
            D_001F6474 = -1;
        else
            D_001F6474 = 1 << mode;
        DrawOne(o->ang1, o->shape1, h, w, b1, p, dir);
        if (o->shape2 != 0)
            DrawOne(o->ang2, o->shape2, h, w, b2, p, dir);
    }
}
