/* USA LEVEL_02.REL:0x1A0B38, 220-byte candidate (21 November 2026).
 * Measured gnu-ee-trial: 30 differing words; first difference at 0x18.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern float fabsf(float x);

typedef struct {
    char pad00[0x70];
    float count;
} Owner;

typedef struct {
    Owner *owner;
    float target;
} Rec;

typedef struct {
    char pad00[0x45];
    unsigned char state;
    char pad46[0x54 - 0x46];
    Rec *rec;
} Obj;

extern float func_1A0F80(Obj *o, unsigned char *out);
extern int func_1A0C18(Obj *o, float f);

static __inline__ unsigned char Reached(float t, float f)
{
    if (t < f) {
        return 1;
    }
    if (fabsf(t - f) <= 9.999999747378752e-06f) {
        return 1;
    }
    return 0;
}

void func_1A0B38(Obj *o)
{
    unsigned char out[16];
    Rec *r = o->rec;
    float f;
    unsigned char ok;

    if (o->state == 0) {
        f = func_1A0F80(o, out);
        ok = Reached(r->target, f);
        if (ok) {
            if (out[0] == 0) {
                o->state = 1;
            } else {
                o->state = 1;
            }
            func_1A0C18(o, f);
        }
    } else if (o->state == 1) {
        if (func_1A0C18(o, r->target) != 0) {
            o->state = 2;
            r->owner->count = r->owner->count + 1.0f;
        }
    }
}
