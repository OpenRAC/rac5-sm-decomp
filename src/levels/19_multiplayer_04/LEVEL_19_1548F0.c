/* LEVEL_19:0x1548F0 -- decision step toward a target object: ends with 3 once the target check fails and clears the target, else returns 15 or 8 when it is facing the target closely, otherwise defers to the steering helper. */
typedef struct {
    char pad_00[0x30];
    float x_30;
    char pad_34[4];
    float z_38;
} Tgt;

typedef struct {
    char pad_00[0x40];
    Tgt *tgt_40;
} State;

typedef struct {
    char pad_00[0x38];
    void *ref_38;
} Link;

typedef struct {
    char pad_00[0x20];
    float face_20[1];
    char pad_24[4];
    float face_28[1];
    char pad_2C[4];
    float x_30;
    char pad_34[4];
    float z_38;
    char pad_3C[0x18];
    Link *link_54;
    State *state_58;
} Obj;

extern float sqrtf(float value);
extern int func_076698(void *target, void *v);
extern int func_154890(float *face, float *dir, float dot);

static __inline__ float Norm2D(float *d)
{
    float len2;
    float root;
    float one;

    len2 = d[0] * d[0] + d[1] * d[1];
    if (len2 < 2.384185791015625e-07f) {
        return 0.0f;
    }
    one = 1.0f;
    root = sqrtf(len2);
    len2 = one / root;
    d[0] = len2 * d[0];
    d[1] = len2 * d[1];
    return root;
}

int func_1548F0(Obj *o)
{
    State *st;
    float d[2];
    float len;
    float dot;
    int done;
    float *face;
    Tgt *t;

    st = o->state_58;
    if (o->link_54->ref_38 != 0) {
        if (func_076698(o->link_54->ref_38, (char *)st->tgt_40 + 0x30) == 0) {
            st->tgt_40 = 0;
            done = 1;
        } else {
            done = 0;
        }
    } else {
        done = 0;
    }
    if ((unsigned char)done) {
        return 3;
    }
    t = st->tgt_40;
    d[0] = t->x_30 - o->x_30;
    d[1] = t->z_38 - o->z_38;
    len = Norm2D(d);
    face = o->face_20;
    dot = face[0] * d[0] + face[2] * d[1];
    if (len < 2.5f) {
        if (0.8999999761581421f <= dot) {
            return 15;
        }
        return func_154890(face, d, dot);
    } else {
        if (0.8999999761581421f <= dot) {
            return 8;
        }
        return func_154890(face, d, dot);
    }
}
