/* LEVEL_04:0x1ACB68 -- placement copy of LEVEL_01_1A0FB8.c: resets an object's motion record and loads it from a hit descriptor. */
typedef struct {
    float m[16];
} Mat4;

typedef struct {
    char pad0[0x10];
    float v10[3];
    char pad1C[0x14];
    float v30[3];
    char pad3C[0x30];
    unsigned int w6C;
    char pad70[6];
    unsigned char b76;
    unsigned char b77;
} Blk;

typedef struct {
    char pad0[0x10];
    Blk *blk;
    float f14;
    float f18;
} Aa;

typedef struct {
    int w0, w4, w8;
    float vC[3];
    int w18;
    char pad1C[4];
    int w20;
    char pad24[4];
    unsigned char b28, b29, b2A, b2B;
    char pad2C[0x18];
    float f44, f48;
    unsigned char b4C, b4D;
    char pad4E[2];
    float f50, f54;
    char pad58[8];
    float v60[3];
    int f6C;
    float f70;
    char pad74[4];
    float v78[3];
    char pad84[0x24];
    float vA8[3];
    char padB4[4];
    Mat4 mat;
} Bb;

typedef struct {
    char pad0[4];
    float *vec;
} Hit;

typedef struct {
    char pad0[0x45];
    unsigned char type;
    unsigned char b46;
    char pad47[0xD];
    Aa *a;
    Bb *b;
    char pad5C[0x14];
    int w70;
} Obj;

extern char D_0024F950[];
extern void func_03DAE8(void *a, int b);
extern int func_1ACAF8(Obj *o, Hit **h0, Hit **h1);
extern void func_1AB778(void *a, void *b, void *c);
extern void func_1AE940(Obj *o);

void func_1ACB68(Obj *o)
{
    Aa *a = o->a;
    Bb *b = o->b;
    Hit *h[2];
    float *z;

    h[1] = h[0] = 0;
    {
        Blk *k = a->blk;

        k->w6C = 0xFFFFFFFFu;
    }
    func_03DAE8(D_0024F950, 0);
    func_1ACAF8(o, &h[0], &h[1]);
    b->b28 = 0;
    b->b29 = 0;
    b->f44 = b->f50 = a->f14;
    b->f48 = b->f54 = a->f18;
    b->b4D = 1;
    if (o->type == 1) {
        if (h[0] && a->blk) {
            float *p = h[0]->vec;
            float *v;
            float *q;
            float *d;

            func_1AB778(a->blk, p + 4, p);
            v = b->v60;
            q = h[0]->vec;
            v[0] = q[0];
            v[1] = q[1];
            v[2] = q[2];
            d = a->blk->v30;
            d[0] = b->v60[0];
            d[1] = v[1];
            d[2] = v[2];
        }
        b->f70 = -0.33333334f;
    } else if (o->type == 2) {
        float *src = &b->mat.m[12];
        float *v = b->v60;

        *(Mat4 *)a->blk = b->mat;
        v[0] = src[0];
        v[1] = src[1];
        v[2] = src[2];
        b->f70 = 0.0f;
    }
    if (h[1]) {
        float *d = b->vA8;
        float *s = h[1]->vec;

        d[0] = s[0];
        d[1] = s[1];
        d[2] = s[2];
    }
    b->w0 = 0;
    b->w4 = 0;
    b->w8 = 0;
    b->w18 = 0;
    z = b->vC;
    z[0] = 0;
    z[1] = 0;
    z[2] = 0;
    b->w20 = 0;
    func_1AB778(b->v78, b->vA8, a->blk->v30);
    o->w70 = 0;
    b->b2A = 0;
    if (a->blk) {
        b->b2B = a->blk->b77;
        b->b4C = a->blk->b76;
        a->blk->b77 = 0xFF;
        a->blk->b76 = 0xFF;
    }
    func_1AE940(o);
    o->b46 = 1;
}
