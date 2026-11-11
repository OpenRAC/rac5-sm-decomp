/* LEVEL_01:0x0D8F10 -- fills the vector slots of a record from one required and up to eight optional vectors (the rest become zero). */

typedef struct {
    float x, y, z, w;
} Vec4;

typedef struct {
    char pad_00[0x38];
    Vec4 v[9];
} Rec;

void func_0D8F10(Rec *r, Vec4 *a, Vec4 *b, Vec4 *c, Vec4 *d, Vec4 *e, Vec4 *f, Vec4 *g, Vec4 *h, Vec4 *i)
{
    Vec4 zero;

    r->v[0] = *a;
    if (b == 0)
        r->v[8] = *a;
    else
        r->v[8] = *b;
    zero.x = 0.0f;
    zero.z = 0.0f;
    zero.y = 0.0f;
    zero.w = 0.0f;
    r->v[1] = zero;
    r->v[2] = zero;
    r->v[3] = zero;
    if (c != 0)
        r->v[1] = *c;
    if (d != 0)
        r->v[2] = *d;
    if (e != 0)
        r->v[3] = *e;
    if (f != 0)
        r->v[4] = *f;
    if (g != 0)
        r->v[5] = *g;
    if (h != 0)
        r->v[6] = *h;
    if (i != 0)
        r->v[7] = *i;
}
