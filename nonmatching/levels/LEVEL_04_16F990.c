/* USA LEVEL_04.REL:0x16F990, 224-byte candidate (21 November 2026).
 * Measured pinned: 21 differing words; first difference at 0x30.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Rec {
    float v[3];
} Rec;

typedef struct Obj {
    char pad0[0x30];
    float pos[3];
    char pad1[0x45 - 0x3C];
    unsigned char state;
    char pad2[0x58 - 0x46];
    Rec *rec;
} Obj;

extern int func_170518(Obj *o, unsigned char *out);

static __inline__ void Scale3(float *dst, float *a, float k)
{
    dst[0] = a[0] * k;
    dst[1] = a[1] * k;
    dst[2] = a[2] * k;
}

static __inline__ void AddTo3(float *dst, float *b)
{
    dst[0] = dst[0] + b[0];
    dst[1] = dst[1] + b[1];
    dst[2] = dst[2] + b[2];
}

void func_16F990(Obj *o)
{
    float step[3];
    unsigned char b;
    float lim;
    float *p;
    Rec *r;

    r = o->rec;
    Scale3(step, r->v, 0.033333335f);
    AddTo3(o->pos, step);
    r->v[1] = r->v[1] + -0.32666668f;
    lim = 10.0f;
    p = (r->v[1] < lim) ? &r->v[1] : &lim;
    r->v[1] = *p;
    if (func_170518(o, &b)) {
        o->state = b;
    }
}
