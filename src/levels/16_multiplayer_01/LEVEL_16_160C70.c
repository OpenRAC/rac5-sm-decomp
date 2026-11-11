/* LEVEL_16:0x160C70 -- classifies the object's relation to its current target (none, approach, or a facing/distance state code). */

struct T {
    char pad_00[0x30];
    float v_30[3];
};

struct Sub {
    char pad_00[0x20];
    float f_20;
    char pad_24[4];
    float f_28;
    char pad_2C[4];
    float v_30[3];
    char pad_3C[0xA4 - 0x3C];
    struct T *t_A4;
    char pad_A8[4];
    float f_AC;
    char pad_B0[0xCD - 0xB0];
    unsigned char b_CD;
};

struct Obj {
    char pad_00[0x45];
    unsigned char b_45;
    char pad_46[0x58 - 0x46];
    struct Sub *p_58;
};

extern int func_160F10(struct Obj *o);
extern int func_160DC0(struct Obj *o);

static __inline__ void SubVec(float *d, float *a, float *b)
{
    d[0] = a[0] - b[0];
    d[1] = a[1] - b[1];
    d[2] = a[2] - b[2];
}

int func_160C70(struct Obj *o)
{
    struct Sub *s;
    struct T *t;
    float d[3];
    float dist2;
    float dot;

    s = o->p_58;
    if (func_160F10(o) == 0 && func_160DC0(o) == 0) {
        s->t_A4 = 0;
        return 0;
    }
    t = s->t_A4;
    if (t == 0) {
        return 0;
    }
    if (o->b_45 == 10 && s->b_CD != 0) {
        return 10;
    }
    SubVec(d, t->v_30, s->v_30);
    dist2 = d[0] * d[0] + d[2] * d[2];
    if (dist2 < 9.0f) {
        dot = d[0] * s->f_20 + d[2] * s->f_28;
        if (dot < 0.0f) {
            return 2;
        }
        if (dot * dot < dist2 * 0.64000004529953f) {
            return 2;
        }
        if (!(s->f_AC <= 0.0f)) {
            return 4;
        }
        return 3;
    }
    return s->b_CD ? 10 : 2;
}
