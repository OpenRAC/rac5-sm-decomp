/* LEVEL_03:0x0E8A18 -- placement copy of LEVEL_01_0E9738.c: steps a fade value up or down, updates the alpha byte, and optionally copies a vector and notifies. */

struct Src0E9738 {
    char pad0[0x30];
    float v30[3];
};

struct Fade0E9738 {
    char pad0[0x10];
    struct Src0E9738 *p10;
    int w14;
    int w18;
    float f1C;
    float f20;
    unsigned char b24;
    unsigned char b25;
    char pad26[2];
    float f28;
    float f2C;
};

struct Obj0E9738 {
    char pad0[6];
    unsigned char b06;
    char pad07;
    unsigned int w08;
    float v0C[3];
    char pad18[8];
    char b20[0x10];
    struct Fade0E9738 fade;
};

extern int func_203908(float f);
extern void func_0E8B58(struct Obj0E9738 *o);
extern void func_124060(void *a, struct Src0E9738 *b, struct Fade0E9738 *c);

static __inline__ void copy3_0E9738(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}
void func_0E8A18(struct Obj0E9738 *o)
{
    struct Fade0E9738 *f;
    unsigned int c;

    f = &o->fade;
    f->w14 = f->w14 + 1;
    if (f->w14 == f->w18) {
        f->f2C = 0.0f;
    }
    if (f->f28 < f->f2C) {
        f->f28 = f->f28 + f->f1C;
        if (f->f2C < f->f28) {
            f->f28 = f->f2C;
        }
        c = o->w08;
        c &= 0x00FFFFFF;
        c |= func_203908(f->f28) << 24;
        o->w08 = c;
    } else if (f->f2C < f->f28) {
        f->f28 = f->f28 + f->f20;
        if (f->f28 <= 0.0f) {
            func_0E8B58(o);
            return;
        }
        c = o->w08;
        c &= 0x00FFFFFF;
        c |= func_203908(f->f28) << 24;
        o->w08 = c;
    }
    o->b06 = o->b06 - f->b24;
    if (f->b25 != 0) {
        copy3_0E9738(o->v0C, f->p10->v30);
        func_124060(o->b20, f->p10, f);
    }
}
