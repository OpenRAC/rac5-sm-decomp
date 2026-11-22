/* LEVEL_19:0x13F448 -- placement copy of LEVEL_16_1427B0.c: steps the emitter's state machine, refreshes the object's occlusion bit from its target and, while in the running state, advances the phase and spawns the effect once per full cycle. */
typedef struct {
    float p[3];
    float f_0C;
    float f_10;
    float q[3];
    float f_20;
    void *w_24;
} Spawn;

typedef struct {
    char pad_00[0x5E0];
    void *owner_5E0;
} Target;

typedef struct {
    Target *target_00;
    char pad_04[8];
    unsigned char on_0C;
    char pad_0D[3];
    int state_10;
    char pad_14[0x10];
    float t_24;
} State;

typedef struct {
    char pad_00[0x58];
    State *st_58;
    char pad_5C[8];
    int flags_64;
    char pad_68[0x11];
    unsigned char cnt_79;
} Obj;

extern float D_001CDF38[3];
extern float D_001CDF58[3];
extern char D_001D4008[];
extern int D_001BEA38;

extern float fmodf(float x, float y);
extern void func_13F828(Obj *o);
extern void func_13F788(Obj *o);
extern void func_13FA60(Obj *o);
extern int func_05CAA0(Target *t);
extern int func_037638(Target *t);
extern int func_114EC0(Target *t);
extern void func_140E70(int a, Spawn *s, int b, Obj *o, float x, float y);

void func_13F448(Obj *o, float dt)
{
    State *st;
    Spawn s;
    unsigned int f;

    st = o->st_58;
    func_13F828(o);
    if (st->state_10 == 0) {
        func_13F788(o);
    } else if (st->state_10 == 1) {
        func_13FA60(o);
        o->cnt_79 = o->cnt_79 + 2;
    }
    f = 0;
    if (st->target_00 == 0 || st->target_00->owner_5E0 != o || func_05CAA0(st->target_00) != 0 || func_037638(st->target_00) != 0 || func_114EC0(st->target_00) != 0) {
        f = 1;
    }
    o->flags_64 = (o->flags_64 & ~0x20) | (f << 5);
    if (o->flags_64 & 0x20) {
        return;
    }
    if (st->state_10 == 1) {
        st->t_24 = st->t_24 + dt * 20.0f;
        if (1.0f <= st->t_24) {
            s.p[0] = D_001CDF38[0];
            s.p[1] = D_001CDF38[1];
            s.p[2] = D_001CDF38[2];
            if (st->on_0C != 0) {
                s.p[1] = s.p[1] + *(float *)((char *)st + 8) * 8.0f;
            }
            s.q[0] = D_001CDF58[0];
            s.q[1] = D_001CDF58[1];
            s.q[2] = D_001CDF58[2];
            s.f_0C = 0.10000000149011612f;
            s.f_10 = 0.25f;
            s.f_20 = 0.0f;
            s.w_24 = D_001D4008;
            func_140E70(D_001BEA38, &s, (int)st->t_24, o, s.f_20, s.f_20);
            st->t_24 = fmodf(st->t_24, 1.0f);
        }
    }
}
