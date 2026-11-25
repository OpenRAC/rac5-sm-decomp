/* LEVEL_08:0x080010 -- placement copy of LEVEL_01_078788.c: draws up to two oriented shapes of an object at pos + dir * t when rendering is enabled. */

typedef struct Obj {
    char pad_00[4];
    float ang1;
    float ang2;
    char pad_0C[0x10];
    int shape1;
    int shape2;
} Obj;

extern unsigned char D_0023EFA4;
extern unsigned int D_0023F334;

extern float cosf(float x);
extern float sqrtf(float x);
extern void func_080440(Obj *o);
extern void func_07FC10(Obj *o, float *w, float *h, int *b1, int *b2);
extern void func_0A49C8(float *p, float *dir, int shape, float h, float w, int b, float s, float c);

static __inline__ void DrawOne(float ang, int shape, float h, float w, int b, float *p, float *dir)
{
    float c;
    float s;

    c = cosf(ang);
    s = sqrtf(1.0f - c * c);
    if (ang < 0.0f)
        s = -s;
    func_0A49C8(p, dir, shape, h, w, b, s, c);
}

void func_080010(float t, Obj *o, float *pos, float *dir, int mode)
{
    float p[3];
    float w;
    float h;
    int b1;
    int b2;

    if (D_0023EFA4 != 0) {
        func_080440(o);
        func_07FC10(o, &w, &h, &b1, &b2);
        p[0] = pos[0] + dir[0] * t;
        p[1] = pos[1] + dir[1] * t;
        p[2] = pos[2] + dir[2] * t;
        h = h * 0.5f;
        w = w * 0.5f;
        if (mode == 2)
            D_0023F334 = -1;
        else
            D_0023F334 = 1 << mode;
        DrawOne(o->ang1, o->shape1, h, w, b1, p, dir);
        if (o->shape2 != 0)
            DrawOne(o->ang2, o->shape2, h, w, b2, p, dir);
    }
}
