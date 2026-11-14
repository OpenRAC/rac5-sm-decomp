/* LEVEL_06:0x186998 -- fetches a position and classifies the squared distance to the object: 10 beyond 100, 11 when inside 6.25 or inside 100, otherwise the object's state byte. */
typedef struct Dst Dst;

typedef struct Obj {
    char pad00[0x30];
    float pos[3];
    char pad3C[9];
    unsigned char state;
} Obj;

extern void func_018B30(Dst *a0);

static __inline__ void Sub3(float *out, float *a, float *b)
{
    out[0] = a[0] - b[0];
    out[1] = a[1] - b[1];
    out[2] = a[2] - b[2];
}

int func_186998(Obj *o)
{
    float buf[3];
    float d[3];
    float d2;

    func_018B30((Dst *)buf);
    Sub3(d, buf, o->pos);
    d2 = d[0] * d[0] + d[1] * d[1] + d[2] * d[2];
    if (d2 > 100.0f) {
        return 10;
    }
    if (d2 <= 6.25f) {
        return 11;
    }
    if (d2 < 100.0f) {
        return 11;
    }
    return o->state;
}
