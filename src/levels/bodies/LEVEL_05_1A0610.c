/* LEVEL_05:0x1A0610 -- placement copy of LEVEL_01_1A6010.c: advances the hold timer of one slot and reports when it fires. */

typedef struct Pair1A6010 {
    unsigned int lo;
    unsigned int hi;
} Pair1A6010;

typedef struct Timers1A6010 {
    float t[5];
    unsigned int flags;
} Timers1A6010;

typedef struct Link1A6010 {
    void *target;
} Link1A6010;

typedef struct Obj1A6010 {
    char pad_00[0x54];
    Link1A6010 *p_54;
    Timers1A6010 *p_58;
} Obj1A6010;

typedef struct Other1A6010 {
    char pad_00[0x30];
    float pos[3];
} Other1A6010;

int func_038E68(Other1A6010 *a);
int func_1B55F8(void *t, float *pos);
Pair1A6010 func_0398D8(Other1A6010 *a);
void func_1A0770(Obj1A6010 *o, Other1A6010 *a, int idx);

int func_1A0610(Obj1A6010 *o, Other1A6010 *a, int idx, float dt)
{
    Timers1A6010 *c;
    void *target;
    float *pos;
    int bit;

    bit = 1 << idx;
    pos = a->pos;
    target = o->p_54->target;
    c = o->p_58;
    if (func_038E68(a) == 0x1B && (target == 0 || func_1B55F8(target, pos) == 0)) {
        c->flags |= bit;
        c->t[idx] += dt;
        if (c->t[idx] >= 2.5f) {
            func_1A0770(o, a, idx);
            return 1;
        }
        return 0;
    }
    if (func_0398D8(a).lo & 2) {
        c->t[idx] = 0.0f;
        c->flags &= ~bit;
    } else if (c->flags & bit) {
        c->t[idx] += dt;
    }
    return 0;
}
