/* LEVEL_01:0x050190 -- computes two offset positions from an object: its position raised by 0.7 plus 0.3 of its offset vector, then plus or minus half of its direction. */
typedef struct {
    float d[3];
    char pad0[0x30 - 12];
    float pos[3];
    char pad1[0xBDC - 0x3C];
    float e[3];
} Obj;

static __inline__ void Copy3(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

static __inline__ void Add3(float *d, float *a, float *b)
{
    d[0] = a[0] + b[0];
    d[1] = a[1] + b[1];
    d[2] = a[2] + b[2];
}

static __inline__ void Scale3(float *d, float *v, float s)
{
    d[0] = s * v[0];
    d[1] = s * v[1];
    d[2] = s * v[2];
}

static __inline__ void Mul3(float *d, float *v, float s)
{
    d[0] = v[0] * s;
    d[1] = v[1] * s;
    d[2] = v[2] * s;
}
void func_050190(Obj *o, int flag, float *p, float *q)
{
    float s = 0.5f;
    float a[3];
    float b[3];

    Copy3(p, o->pos);
    p[1] += 0.7f;
    if (flag)
        s = -s;
    Scale3(a, o->d, s);
    Mul3(b, o->e, 0.3f);
    Add3(p, p, b);
    Add3(q, p, a);
}
