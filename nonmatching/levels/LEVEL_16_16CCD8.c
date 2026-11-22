/* USA LEVEL_16.REL:0x16CCD8, 268-byte candidate (21 November 2026).
 * Measured pinned: 6 differing words; first difference at 0xC0.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    char pad00[0x44];
    float vel[3];
    float f50;
    char pad54[0xC];
    float f60;
} Rec;

typedef struct {
    char pad00[0x30];
    float pos[3];
    char pad3C[9];
    unsigned char b45;
    char pad46[0x12];
    Rec *rec;
} Obj;

static __inline__ void Add3(float *p, float *v)
{
    p[0] += v[0];
    p[1] += v[1];
    p[2] += v[2];
}

extern int func_18DE60(Obj *o);
extern void func_16CB80(Obj *o);

void func_16CCD8(Obj *o)
{
    Rec *r;
    float v[3];
    float w[3];
    float d;
    float *vp;

    r = o->rec;
    vp = &r->vel[0];
    v[0] = r->vel[0] * 0.033333335f;
    v[1] = vp[1] * 0.033333335f;
    v[2] = vp[2] * 0.033333335f;
    r->f50 = r->f50 - v[1];
    Add3(o->pos, v);
    r->vel[1] = r->vel[1] + -0.32666668f;
    if (func_18DE60(o) == 0) {
        if (r->f50 >= r->f60) {
            w[0] = 0.0f;
            d = r->f50 - r->f60;
            w[2] = 0.0f;
            o->pos[1] = o->pos[1] + d;
            o->b45 = 2;
            w[1] = d;
            func_16CB80(o);
        }
    }
}
