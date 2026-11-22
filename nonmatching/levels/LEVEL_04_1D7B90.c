/* USA LEVEL_04.REL:0x1D7B90, 232-byte candidate (21 November 2026).
 * Measured pinned: 23 differing words; first difference at 0x70.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    char pad_00[4];
    float speed_04;
    float v_08[2];
} Rec;

typedef struct {
    char pad_00[0x58];
    Rec *rec_58;
} Obj;

extern float sqrtf(float x);

void func_1D7B90(Obj *o, int unused, float *a)
{
    Rec *r;
    float *v;
    float len2;
    float len;
    float inv;

    r = o->rec_58;
    v = r->v_08;
    r->v_08[0] = r->v_08[0] * r->speed_04;
    v[1] = v[1] * r->speed_04;
    r->v_08[0] = r->v_08[0] + a[0];
    v[1] = v[1] + a[1];
    len2 = r->v_08[0] * r->v_08[0] + v[1] * v[1];
    if (len2 < 2.384185791015625e-07f) {
        len = 0.0f;
    } else {
        len = sqrtf(len2);
        inv = 1.0f / len;
        r->v_08[0] = inv * r->v_08[0];
        v[1] = inv * v[1];
    }
    r->speed_04 = len;
}
