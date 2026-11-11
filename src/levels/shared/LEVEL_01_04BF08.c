/* LEVEL_01:0x04BF08 -- copies the source transform into the object and into its linked record, then seeds the object's direction vectors and clears the third. */

struct Mat {
    float f[16];
};

struct Obj {
    struct Mat m_00;
    char pad_40[0x200 - 0x40];
    float v_200[3];
    char pad_20C[0x210 - 0x20C];
    float v_210[3];
    char pad_21C[0x220 - 0x21C];
    float v_220[3];
    char pad_22C[0x2DC - 0x22C];
    float f_2DC;
    float f_2E0;
    int w_2E4;
    char pad_2E8[0x59C - 0x2E8];
    struct Mat *p_59C;
};

static __inline__ void CopyVec(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

static __inline__ void ZeroVec(float *d)
{
    d[0] = 0;
    d[1] = 0;
    d[2] = 0;
}

void func_04BF08(struct Obj *o, struct Mat *s)
{
    *o->p_59C = *s;
    o->m_00 = *s;
    o->f_2DC = s->f[13];
    o->f_2E0 = s->f[13];
    o->w_2E4 = 0;
    CopyVec(o->v_200, &s->f[8]);
    CopyVec(o->v_210, &s->f[8]);
    ZeroVec(o->v_220);
}
