/* USA LEVEL_01.REL:0x030898, 324-byte candidate (21 November 2026).
 * Measured pinned: 28 differing words; first difference at 0xC.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    char pad0[0x10];
    int owner;
    char pad14[4];
    int tracer;
} Obj;

typedef struct {
    char pad0[0x30];
    float pos[3];
} Other;

extern int func_0145D0(float *pos, float *delta, int owner, int c, float f);
extern void func_031740(Obj *o, float *rec, float *pos, float *to);
extern void func_084890(int owner, float *pos);

int func_030898(Obj *obj, Other *other, float *vec, unsigned int flags, float scale)
{
    float d[3];
    float to[2];
    float rec[4];
    float *pos;
    int owner;
    int r;

    pos = other->pos;
    d[0] = vec[0] * scale;
    d[1] = vec[1] * scale;
    d[2] = vec[2] * scale;
    owner = 0;
    if (((flags ^ 1) & 1) != 0) {
        owner = obj->owner;
    }
    r = func_0145D0(pos, d, owner, 0, 0.2f);
    if (obj->tracer != 0 && (flags & 2) == 0) {
        to[0] = other->pos[0] + d[0];
        to[1] = pos[2] + d[2];
        rec[0] = vec[0];
        rec[1] = vec[1];
        rec[2] = vec[2];
        rec[3] = 1.0f;
        func_031740(obj, rec, pos, to);
    }
    if (((flags ^ 1) & 1) != 0) {
        if (obj->owner != 0) {
            func_084890(obj->owner, other->pos);
        }
    }
    return r;
}
