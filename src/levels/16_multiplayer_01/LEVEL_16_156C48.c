/* LEVEL_16:0x156C48 -- classifies the distance to a target into a small state code. */
typedef float V4[4];
typedef struct {
    char pad0[0x30];
    V4 pos;
} Ent;
typedef struct {
    char pad0[0x1C];
    int i1C;
    char pad20[0x10];
    int i30;
    float f34;
} Aux;
typedef struct {
    char pad0[0x50];
    Ent *tgt;
} Own;
typedef struct {
    char pad0[0x30];
    V4 pos;
    char pad40[0x54 - 0x40];
    Aux *aux;
    Own *own;
} Obj;
extern int func_0763F8(int a, float *v);
extern int func_17D7E8(int a, float *v);

int func_156C48(Obj *o)
{
    float t[4];
    float d[4];
    Aux *a;
    float *p;
    float h, r, x, z;

    p = o->own->tgt->pos;
    a = o->aux;
    t[0] = p[0];
    t[1] = p[1];
    t[2] = p[2];
    d[0] = t[0] - o->pos[0];
    d[2] = t[2] - o->pos[2];
    r = d[0] * d[0] + d[2] * d[2];
    h = a->f34 * a->f34;
    if (func_0763F8(a->i30, t) == 0)
        return 0x17;
    if (h < r)
        return 0x17;
    if (a->i1C != 0) {
        if (func_17D7E8(a->i1C, t) != 0)
            return 0xF;
    }
    if (r <= 2.25f)
        return 0x13;
    if (!(r <= 2.25f) && r <= 256.0f)
        return 0xF;
    return 0xD;
}
