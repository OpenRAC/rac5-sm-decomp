/* LEVEL_18:0x158518 -- advances a hinge animation: resolves its progress, finishes when it reaches one, otherwise rotates the object by the change. */
typedef struct {
    char pad0[0xFC];
    int w_FC;
    char pad_100[2];
    short s_102;
} Target;

typedef struct {
    Target *target_00;
    char pad_04[0x0C];
    float lo_10;
    float hi_14;
    float cur_18;
    char pad_1C[0x20];
    float prog_3C;
    unsigned char key_40;
    char pad_41;
    unsigned char timed_42;
} S;

typedef struct {
    char pad0[0x45];
    unsigned char mode_45;
} Owner;

typedef struct {
    char pad0[0x54];
    Owner **owner_54;
    S *s_58;
} O;

extern float func_036560(void *a0);
extern void func_1582A8(O *o);
extern void func_1021B8(void *m, float a);
extern void func_1029C0(void *a, void *b, void *c);

static __inline__ float *MinRef(float *a, float *b)
{
    if (*a < *b) {
        return a;
    }
    return b;
}

void func_158518(O *o, float dt)
{
    S *s = o->s_58;
    Owner *owner = *o->owner_54;
    float m[12];
    float t;
    float one;
    float p;
    float q;
    float d;
    float prev;

    if (s->target_00 != 0) {
        if (s->target_00->w_FC == s->key_40) {
            s->target_00->s_102 = 20;
            return;
        }
    }
    if (s->timed_42 != 0) {
        t = s->prog_3C + dt;
        one = 1.0f;
        q = *MinRef(&t, &one);
        s->prog_3C = q;
        p = q;
    } else if (s->target_00 != 0) {
        p = func_036560(s->target_00);
    } else {
        p = 1.0f;
    }
    if (p == 1.0f) {
        if (owner->mode_45 == 2 || s->timed_42 != 0) {
            func_1582A8(o);
            return;
        }
    }
    if (s->target_00 == 0 && s->timed_42 == 0)
        return;
    if (s->lo_10 != 0.0f)
        d = (s->lo_10 - s->hi_14) * p;
    else
        d = (s->lo_10 - s->hi_14) * (p - 1.0f);
    prev = s->cur_18;
    s->cur_18 = d;
    func_1021B8(m, d - prev);
    func_1029C0(o, o, m);
}
