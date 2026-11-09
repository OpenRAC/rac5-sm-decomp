/* LEVEL_01:0x0E8C08 -- steps a fade value up or down, updates the alpha byte, and optionally copies a vector and notifies. */

struct Src0E8C08 {
    char pad0[0x30];
    float v30[3];
};

struct Fade0E8C08 {
    char pad0[0x10];
    struct Src0E8C08 *p10;
    int w14;
    int w18;
    float f1C;
    float f20;
    float f24;
    float f28;
    unsigned char b2C;
    unsigned char b2D;
};

struct Obj0E8C08 {
    char pad0[6];
    unsigned char b06;
    char pad07;
    unsigned int w08;
    float v0C[3];
    char pad18[8];
    char b20[0x10];
    struct Fade0E8C08 fade;
};

extern int func_1EB278(float f);
extern void func_0E8D48(struct Obj0E8C08 *o);
extern void func_125E78(void *a, struct Src0E8C08 *b, struct Fade0E8C08 *c);

static __inline__ void copy3_0E8C08(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}
void func_0E8C08(struct Obj0E8C08 *o)
{
    struct Fade0E8C08 *f;
    unsigned int c;

    f = &o->fade;
    f->w14 = f->w14 + 1;
    if (f->w14 == f->w18) {
        f->f28 = 0.0f;
    }
    if (f->f24 < f->f28) {
        f->f24 = f->f24 + f->f1C;
        if (f->f28 < f->f24) {
            f->f24 = f->f28;
        }
        c = o->w08;
        c &= 0x00FFFFFF;
        c |= func_1EB278(f->f24) << 24;
        o->w08 = c;
    } else if (f->f28 < f->f24) {
        f->f24 = f->f24 + f->f20;
        if (f->f24 <= 0.0f) {
            func_0E8D48(o);
            return;
        }
        c = o->w08;
        c &= 0x00FFFFFF;
        c |= func_1EB278(f->f24) << 24;
        o->w08 = c;
    }
    o->b06 = o->b06 - f->b2C;
    if (f->b2D != 0) {
        copy3_0E8C08(o->v0C, f->p10->v30);
        func_125E78(o->b20, f->p10, f);
    }
}
